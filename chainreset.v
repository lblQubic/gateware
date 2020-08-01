module chainreset #(parameter NSTEP=1)
(input clk
,input [NSTEP-1:0] readycriteria
,input [NSTEP-1:0] resetin
,output [NSTEP-1:0] resetout
,input [NSTEP-1:0] donecriteria
,output [NSTEP-1:0] done
,output [NSTEP-1:0] donestrobe
,input [NSTEP*16-1:0] resetlength
,input [NSTEP*16-1:0] readylength
,input [NSTEP*32-1:0] timeout
,output [NSTEP-1:0] error
);
// After readycriteria met and resetin has rising edge
// wait for readylength cycle
// reasetin are latched after the bit 0, so canbe pushed early, but readycriteria is not
// so it must after the previous step is done
// generate resetout pulse for resetlength clk cycle
// then wait for donecriteria, if not met in timeout cycle
// report error and skip other steps
// if met, then generate 1 cycle donestrobe and done status
reg [NSTEP-1:0] resetin_r=0;
reg [NSTEP-1:0] resetin_rd=0;
wire rising0=resetin[NSTEP-1]&~resetin_r[NSTEP-1];
always @(posedge clk) begin
	resetin_r<=resetin;
/*	if (NSTEP>1) begin
		resetin_rd[NSTEP-1:1]<=rising0 ? 0 : (resetin_r[NSTEP-1:1] | resetin_rd[NSTEP-1:1]);
	end
	resetin_rd[0]<=resetin_r[0]|resetin_rd[0];
	*/
	resetin_rd<=rising0 ? 0 : resetin_r|resetin_rd;
end
reg [15:0] shift=NSTEP;
reg [15:0] shiftnext=NSTEP;
wire [1-1:0] readycriteria_i=readycriteria>>(shift-1);
wire [1-1:0] resetin_i=resetin_rd>>(shift-1);
wire [1-1:0] donecriteria_i=donecriteria>>(shift-1);
wire [1*16-1:0] resetlength_i=resetlength>>((shift-1)*16);
wire [1*16-1:0] readylength_i=readylength>>((shift-1)*16);
wire [1*32-1:0] timeout_i=timeout>>((shift-1)*32);
reg [1-1:0] resetout_i=0;
reg [1-1:0] done_i=0;
reg [1-1:0] donestrobe_i=0;
reg [1-1:0] error_i=0;
wire [NSTEP-1:0] resetout_s=resetout_i<<(shift-1);
wire [NSTEP-1:0] done_s=done_i<<(shift-1);
wire [NSTEP-1:0] donestrobe_s=donestrobe_i<<(shift-1);
wire [NSTEP-1:0] error_s=error_i<<(shift-1);
reg [NSTEP-1:0] resetout_r=0;
reg [NSTEP-1:0] done_r=0;
reg [NSTEP-1:0] donestrobe_r=0;
reg [NSTEP-1:0] error_r=0;

localparam IDLE=3'h0;
localparam RESETIN=3'h1;
localparam READY=3'h2;
localparam RESETOUT=3'h3;
localparam WAITFORDONE=3'h4;
localparam DONE=3'h5;
localparam TIMEOUT=3'h6;
reg [2:0] state=0;
reg [2:0] next=0;
reg [31:0] cnt=0;
always @(posedge clk) begin
	if (rising0) begin
		state<=IDLE;
	end
	else begin
		state<=next;
		cnt<=(state==next) ? cnt+(state!=TIMEOUT) : 0;
	end
end
always @(*) begin
	case (state)
		IDLE:	next=resetin_i ? RESETIN : IDLE;
		RESETIN:next=rising0 ? IDLE : readycriteria_i ? READY : RESETIN;
		READY: 	next=rising0 ? IDLE : cnt==readylength_i ? RESETOUT : READY;
		RESETOUT: next =rising0 ? IDLE :  cnt==resetlength_i ? WAITFORDONE : RESETOUT;
		WAITFORDONE : next= rising0 ? IDLE : donecriteria_i ? DONE : (|timeout_i & cnt==timeout_i) ? TIMEOUT : WAITFORDONE;
		DONE: next =rising0 ? IDLE : shift==0 ? DONE :  IDLE;
		TIMEOUT: next= rising0 ? IDLE : TIMEOUT;
	endcase
end
always @(posedge clk) begin
	if (rising0) begin
		shift<=NSTEP;
		shiftnext<=NSTEP;
		done_r<=0;
		donestrobe_r<=0;
		error_r<=0;
		resetout_r<=0;
	end
	else begin
		case (next)
			IDLE,RESETIN,READY,WAITFORDONE: begin
				done_i<=0;donestrobe_i<=0;error_i<=0;resetout_i<=0;
			end
			RESETOUT: begin
				done_i<=0;donestrobe_i<=0;error_i<=0;resetout_i<=1;
			end
			DONE: begin
				done_i<=1;donestrobe_i<=1;error_i<=0;resetout_i<=0;shiftnext<=shift-1;
			end
			TIMEOUT: begin
				done_i<=0;donestrobe_i<=0;error_i<=1;resetout_i<=0;
			end
		endcase
		done_r<=done_s|done_r;
		donestrobe_r<=donestrobe_s;
		error_r<=error_s|error_r;
		resetout_r<=resetout_s;
		shift<=shiftnext;
	end
end
assign done=done_r;
assign donestrobe=donestrobe_r;
assign error=error_r;
assign resetout=resetout_r;
endmodule

// Throw this away when we get a customized riscv core
// from Anastasiia and Farzad
module qcmd_gen #(
	parameter nell=3,
	parameter aw=15
) (
	input clk,
	input [aw-1:0] waddr,
	input [31:0] wdata,
	input wstrobe,
	input trig,
	output [63:0] command,
	output [8-1:0] cmda,
	output cstrobe
	,output [31:0]  extra
);

reg [aw-2-1:0] play=0;
wire [63:0] memout;
wire [aw-2-1:0] waddr_m = waddr[aw-1:2];

// Upper word
//wire wstrobe_h = wstrobe & waddr[aw+1] &  waddr[0];
wire wstrobe_h = wstrobe & waddr[1:0]==2'b01;
dpram #(.aw(aw-2), .dw(32)) ram_h(.clka(clk), .clkb(clk),
	.addra(waddr_m), .dina(wdata), .wena(wstrobe_h),
	.addrb(play), .doutb(memout[63:32])
);

// Lower word
//wire wstrobe_l = wstrobe & waddr[aw+1] & ~waddr[0];
wire wstrobe_l = wstrobe & waddr[1:0]==2'b10;
dpram #(.aw(aw-2), .dw(32)) ram_l(.clka(clk), .clkb(clk),
	.addra(waddr_m), .dina(wdata), .wena(wstrobe_l),
	.addrb(play), .doutb(memout[31:0])
);

// Aux = 24 bits Time trigger, padding, nell bits cmda
//wire wstrobe_t = wstrobe & ~waddr[aw+1];
wire wstrobe_t = wstrobe & waddr[1:0]==2'b00;
wire [31:0] aux_o;
dpram #(.aw(aw-2), .dw(32)) ram_t(.clka(clk), .clkb(clk),
	.addra(waddr_m), .dina(wdata), .wena(wstrobe_t),
	.addrb(play), .doutb(aux_o)
);
wire [23:0] trig_t = aux_o[31:8];

wire wstrobe_e = wstrobe & waddr[1:0]==2'b11;
wire [31:0] aux_e;
dpram #(.aw(aw-2), .dw(32)) ram_e(.clka(clk), .clkb(clk),
	.addra(waddr_m), .dina(wdata), .wena(wstrobe_e),
	.addrb(play), .doutb(extra)
);
// Stupid sequence logic
reg [23:0] count=0;
reg cstrobe_r=0;
wire fire = count==trig_t;
always @(posedge clk) begin
	count <= count + 1;
	cstrobe_r <= fire;
	if (fire) play <= play + 1;
	if (trig) begin
		count <= 0;
		play <= 0;
	end
end

// Assign this module's outputs
assign command = memout;
assign cmda = aux_o[8-1:0];
assign cstrobe = cstrobe_r;

endmodule

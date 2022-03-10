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
wire wstrobe_h = wstrobe & waddr[1:0]==2'b01;
dpram #(.AW(aw-2), .DW(32), .BUFIN(0), .BUFOUT(1), .SIM(0)) ram_h(.clka(clk), .clkb(clk),
	.addra(waddr_m), .dina(wdata), .wena(wstrobe_h), .douta(), .renb(1'b1), .reset(),
	.addrb(play), .doutb(memout[63:32])
);

// Lower word
wire wstrobe_l = wstrobe & waddr[1:0]==2'b10;
dpram #(.AW(aw-2), .DW(32), .BUFIN(0), .BUFOUT(1), .SIM(0)) ram_l(.clka(clk), .clkb(clk),
	.addra(waddr_m), .dina(wdata), .wena(wstrobe_l), .douta(), .renb(1'b1), .reset(),
	.addrb(play), .doutb(memout[31:0])
);

// Aux = 24 bits Time trigger, padding, nell bits cmda
wire wstrobe_t = wstrobe & waddr[1:0]==2'b00;
wire [31:0] aux_o;
dpram #(.AW(aw-2), .DW(32), .BUFIN(0), .BUFOUT(1), .SIM(0)) ram_t(.clka(clk), .clkb(clk),
	.addra(waddr_m), .dina(wdata), .wena(wstrobe_t), .douta(), .renb(1'b1), .reset(),
	.addrb(play), .doutb(aux_o)
);
//wire [23:0] trig_t = aux_o[31:8];
reg [23:0] trig_t=0;

wire wstrobe_e = wstrobe & waddr[1:0]==2'b11;
wire [31:0] aux_e;
dpram #(.AW(aw-2), .DW(32), .BUFIN(0), .BUFOUT(1), .SIM(0)) ram_e(.clka(clk), .clkb(clk),
	.addra(waddr_m), .dina(wdata), .wena(wstrobe_e), .douta(), .renb(1'b1), .reset(),
	//.addrb(play), .doutb(extra)
	.addrb(play), .doutb(aux_e)
);
// Stupid sequence logic
reg [aw-2-1:0] play_w=0;
reg [aw-2-1:0] play_w1=0;
reg [23:0] count=0;
reg cstrobe_r=0;
reg cstrobe_r1=0;
//reg cstrobe_r2=0;
//wire fire = count==trig_t;
reg fire=0;
always @(posedge clk) begin
	count <= count + 1;
	trig_t <= aux_o[31:8];
	fire <= count==trig_t;
	cstrobe_r1 <= fire;
	cstrobe_r <= cstrobe_r1;
	if (trig) begin
		count <= 0;
		play_w <= 0;
	end
	else if (cstrobe_r) play_w <= play_w + 1;
end

reg [63:0] command_w=0;
reg [8-1:0] cmda_w=0;
reg cstrobe_w1=0;
reg cstrobe_w2=0;
reg cstrobe_w3=0;
reg cstrobe_w4=0;
reg [31:0] extra_w=0;
always @(posedge clk) begin
	play_w1 <= play_w;
	play <= play_w1;
	command_w <= memout;
	cmda_w <= aux_o[8-1:0];
	cstrobe_w1 <= cstrobe_r;
	cstrobe_w2 <= cstrobe_w1;
	cstrobe_w3 <= cstrobe_w2;
	cstrobe_w4 <= cstrobe_w3;
	extra_w <= aux_e;
end

// Assign this module's outputs
//assign command = memout;
//assign cmda = aux_o[8-1:0];
//assign cstrobe = cstrobe_w2;
//assign extra = aux_e;
assign command = command_w;
assign cmda = cmda_w;
assign cstrobe = cstrobe_w4;
assign extra = extra_w;

endmodule

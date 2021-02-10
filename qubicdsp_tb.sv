`timescale 1ns / 100ps
module qubicdsp_tb(
);
regmap #(.LBCWIDTH(8),.LBAWIDTH(24),.LBDWIDTH(32)) lbreg();
dsp dsp();
qubicdsp qubicdsp(.dsp(dsp.dsp),.lbreg(lbreg.dsp));

reg sysclk=0;
integer cc=0;
initial begin
	$dumpfile("qubicdsp.vcd");
	$dumpvars(17,qubicdsp_tb);
	while (1) begin
		cc=cc+1;
		sysclk=0; #2.5;
		sysclk=1; #2.5;
	end
	$finish();
end

reg [31:0] sysclkcnt=0;
always @(posedge sysclk) begin
	sysclkcnt<=sysclkcnt+1;
end

reg clk250=0;
initial begin
    forever #(4) clk250=~clk250;
end

reg [31:0] clk250cnt=0;
always @(posedge clk250) begin
	clk250cnt<=clk250cnt+1;
end

reg dspclk=0;
initial begin
    forever #(4) dspclk=~dspclk;
end
assign qubicdsp.dsp.clk=dspclk;

localparam SIM=1;

reg [31:0] dspclkcnt=0;
wire reset=dspclkcnt<100;

always @(posedge qubicdsp.dsp.clk) begin
   dspclkcnt<=dspclkcnt+1;
end

reg [15:0] simdata=999;

assign qubicdsp.dsp.dac0=simdata;
assign qubicdsp.dsp.adc0=qubicdsp.dsp.dac0;

//assign lbreg.test1=32'hfff000ab;

//always @ (*) begin
//	qubicdsp.dsp.adc0 <= # 600 qubicdsp.dsp.dac0;
//	qubicdsp.dsp.adc1 <= # 600 qubicdsp.dsp.dac1;
//	qubicdsp.dsp.adc2 <= # 600 qubicdsp.dsp.dac2;
//	qubicdsp.dsp.adc3 <= # 600 qubicdsp.dsp.dac3;
//	qubicdsp.dsp.adc4 <= # 600 qubicdsp.dsp.dac4;
//	qubicdsp.dsp.adc5 <= # 600 qubicdsp.dsp.dac5;
//	qubicdsp.dsp.adc6 <= # 600 qubicdsp.dsp.dac6;
//	qubicdsp.dsp.adc7 <= # 600 qubicdsp.dsp.dac7;
//end

endmodule

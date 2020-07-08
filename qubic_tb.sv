//`include "constants.vams"
`include "xc7vx485tffg1761pkg.vh"
`timescale 1ns / 1ns
module qubic_tb();
xc7vx485tffg1761pkg fpga();
reg sysclk=0;
integer cc=0;
initial begin
	$dumpfile("qubic.vcd");
	$dumpvars(17,qubic_tb);
//	for (cc=0; cc<300; cc=cc+1) begin
	while (1) begin
		cc=cc+1;

		sysclk=0; #2.5;
		sysclk=1; #2.5;
	end
	$finish();
end
hw hw();
vc707_sim vc707_sim(.fpga(fpga),.hw(hw.vc707.sim));
assign hw.vc707.sysclk=sysclk;
//assign hw.vc707.usb2uart.tx=0;
//assign hw.vc707.usb2uart.rx=0;
localparam BAUD=960000;
qubic #(.BAUD(BAUD)) qubic(.fpga(fpga));

reg [31:0] sysclkcnt=0;
always @(posedge sysclk) begin
	sysclkcnt<=sysclkcnt+1;
end
reg [31:0] uartclkcnt=0;
always @(posedge uartclk) begin
	uartclkcnt<=uartclkcnt+1;
end
wire [7:0] rxdata;
wire [7:0]  txdata;//=sysclkcnt[20:13];//8'hcc;
wire rxvalid;
wire txready;
wire txstart;//sysclkcnt[13:0]==100;
reg txready_d=0;
reg txready_d2=0;
wire uartclk=qubic.qubichw_config.uartclk;
uart #(.DWIDTH(8),.NSTOP(1),.UARTCLK(100000000),.BAUD(BAUD))
uart (.clk(uartclk)
,.TX(hw.vc707.usb2uart.tx)
,.RX(hw.vc707.usb2uart.rx)
//,.rst(uartclkcnt<4)
,.rst(1'b0)
,.txdata(txdata)
,.txstart(txstart)
,.rxdata(rxdata)
,.rxvalid(rxvalid)
,.txready(txready)
);
localparam LINES=7;
localparam TOTALBYTE=LINES*8;
reg  [LINES*64-1:0] cmdsim={8'hff,24'hffffff,32'hffffffff
,8'hff,24'hffffff,32'hffffff00
,64'h010000090000e920
,64'h0000000900000000
,64'h0100000a00000013
,64'h00000000facefeed
,64'h00000001deadbeef
};
/*localparam TOTALBYTE=LINES*8-1;
	{8'd1,24'h0,32'habcd1234
,8'd0,24'h0,32'hfacefeed
,8'd0,24'h1,24'h0
,8'hff,24'hffffff,32'hffffffff
,8'hff,24'hffffff,32'hffffff00
,8'd0,24'h1,32'hdeadbeef
,8'd0,24'h3,32'hfacefeed
};
*/
reg [7:0] txdata_r=0;
reg [31:0] txcnt=0;
always @(posedge uartclk) begin
	txready_d<=txready;
	if (txstart) begin
		{txdata_r,cmdsim}=cmdsim<<8;
		txcnt<=txcnt+1;
	end
end
assign txdata=cmdsim[LINES*64-1:LINES*64-8];
assign txstart=(txready_d&~txready_d2&(txcnt<=TOTALBYTE) )|uartclkcnt==4;
assign hw.vc707.VP_0=1'b0;
assign hw.vc707.VN_0=1'b1;
endmodule

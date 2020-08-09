//`include "constants.vams"
//`include "xc7vx485tffg1761pkg.vh"
`timescale 1ns / 100ps
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

reg sgmiiclk=0;
initial begin
    forever #(4) sgmiiclk=~sgmiiclk;
end
reg si5324clk=0;
initial begin
    forever #(0.5) si5324clk=~si5324clk;
end
hw hw();
vc707_sim vc707_sim(.fpga(fpga),.hw(hw.vc707.sim));
assign hw.vc707.sysclk=sysclk;
assign hw.vc707.sgmiiclk_q0_p=sgmiiclk;
assign hw.vc707.sgmiiclk_q0_n=~sgmiiclk;
assign hw.vc707.si5324_out_c_p=si5324clk;
assign hw.vc707.si5324_out_c_n=~si5324clk;
assign hw.vc707.pcie.clk_qo_p=1'b0;
assign hw.vc707.pcie.clk_qo_n=1'b1;
assign hw.vc707.sma_mgt_refclk_p=1'b0;
assign hw.vc707.sma_mgt_refclk_n=1'b1;
//assign hw.vc707.usb2uart.tx=0;
//assign hw.vc707.usb2uart.rx=0;
localparam BAUD=9600000;
qubic #(.BAUD(BAUD),.SIM(1)) qubic(.fpga(fpga));

reg [31:0] sysclkcnt=0;
always @(posedge sysclk) begin
	sysclkcnt<=sysclkcnt+1;
end
reg [31:0] sgmiiclkcnt=0;
always @(posedge sgmiiclk) begin
	sgmiiclkcnt<=sgmiiclkcnt+1;
end
wire uartclk;
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
assign uartclk=qubic.qubichw_config.uartclk;
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
localparam LINES=10;
localparam TOTALBYTE=LINES*8;
reg  [LINES*64-1:0] cmdsim={8'hff,24'hffffff,32'hffffffff
,8'hff,24'hffffff,32'hffffff00
,64'h0100001700e02281
,64'h0100001800000001
,64'h010000090000e920
,64'h0000000900000000
,64'h0100000a00000013
,64'h00000000facefeed
,64'h00000001deadbeef
,64'h0100001500000000
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
//assign hw.vc707.sgmii_rx_p=hw.vc707.sgmii_tx_p;
//assign hw.vc707.sgmii_rx_n=hw.vc707.sgmii_tx_n;

wire mdio_i,mdio_o,mdio_t;
assign mdio_t=qubic.qubichw_config.mdio_t;
assign mdio_i=mdio_o;
IOBUF mdiobuf(.O(mdio_o),.I(mdio_i),.T(~mdio_t),.IO(hw.vc707.phy_mdio));

assign hw.vc707.sfp.rx_n=hw.vc707.sfp.tx_n;
assign hw.vc707.sfp.rx_p=hw.vc707.sfp.tx_p;
assign hw.vc707.sfp.los=1'b0;
wire resetdone;
gmii gmii();
sgmii_ethernet_pcs_pma #(.SIM(1))
sgmii_ethernet_pcs_pma(.gtrefclk(sgmiiclk)
,.rxn(hw.vc707.sgmii_tx_n)
,.rxp(hw.vc707.sgmii_tx_p)
,.txn(hw.vc707.sgmii_rx_n)
,.txp(hw.vc707.sgmii_rx_p)
,.gmii(gmii.phy)
,.independent_clock_bufg(sysclk)
,.reset(sysclkcnt==20)//hwreset)
,.resetdone(resetdone)
,.status_vector()
);
reg tx_en=0;
always @(posedge gmii.tx_clk) begin
	tx_en<=sysclkcnt>32'h1000;
end
/*assign gmii.tx_en=tx_en;
assign gmii.txd=8'hde;
assign gmii.tx_er=1'b0;*/
// ping example
/*localparam NBYTES=14*8-2;
localparam data={
64'h55555555555555d5
,64'h00105ad155b2c46e
,64'h1f01d90d08004500
,64'h0054a66240004001
,64'h0f4ec0a801c8c0a8
,64'h01e00800b0285ae8
,64'h00936b39235f0000
,64'h00009af004000000
,64'h0000101112131415
,64'h161718191a1b1c1d
,64'h1e1f202122232425
,64'h262728292a2b2c2d
,64'h2e2f303132333435
,48'h36370cb55572
};*/
// arp example
localparam NBYTES=9*8;
localparam data={
64'h55555555555555d5
,64'hffffffffffffc46e
,64'h1f01d90d08060001
,64'h080006040001c46e
,64'h1f01d90dc0a801c8
,64'h000000000000c0a8
,64'h01e0000000000000
,64'h0000000000000000
,64'h0000000072bda56a
};
assign gmii.tx_clk=gmii.rx_clk;
reg [6:0] inc=0;
reg [31:0] txclkcnt=0;
wire ethstart= txclkcnt[7]&(txclkcnt[6:0]==inc) && resetdone;
reg ethstart_d=0;
reg [8*NBYTES-1:0] datasr=0;
always @(posedge gmii.tx_clk) begin
	txclkcnt<=txclkcnt+1;
	ethstart_d<=ethstart;
	if (ethstart&~ethstart_d) begin
		datasr<=data;
		inc<=inc+1;
	end
	if (|datasr)
		datasr<= datasr<<8;
end
assign gmii.tx_en= |datasr;
assign gmii.tx_er= 1'b0;
assign gmii.txd=datasr[8*NBYTES-1:8*NBYTES-8];
endmodule

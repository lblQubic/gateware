//`include "constants.vams"
//`include "xc7vx485tffg1761pkg.vh"
`timescale 1ns / 10ps
module icc_tb(
);

reg sysclk=0;
initial begin
	$dumpfile("icc.vcd");
	$dumpvars(17,icc_tb);
    forever #(2.5) sysclk=~sysclk;
	/*while (1) begin
		sysclk=0; #2.5;
		sysclk=1; #2.5;
	end*/
	$finish();
end
reg [31:0] sysclkcnt=0;
always @(posedge sysclk) begin
	sysclkcnt<=sysclkcnt+1;
end
reg si5324_out_c=0;
initial begin
    forever #(4) si5324_out_c=~si5324_out_c;
end
localparam SIM=1;
reg sma_mgt_refclk=0;
real DELAY=0.15;
always @(*)
	sma_mgt_refclk= #DELAY si5324_out_c;
wire resetcntdelay=~|sysclkcnt[13:0];
always @(*) begin
	if (resetcntdelay)
		DELAY=DELAY+0.0;
end
localparam DWIDTH=32;


wire readyforreset_sfp;
wire reset_sfp=sysclkcnt==100;
wire rxusrclk_sfp;
wire txusrclk_sfp;
wire [3:0] rxcharisk_sfp;
wire [31:0] rxdata_sfp;
wire [31:0] sfptestrx;
assign sfptestrx=rxdata_sfp;
wire rxuserrdy_sfp=1'b1;
wire sfptesttx=32'habcdbeef;
wire [3:0] txcharisk_sfp=0;//rxusrclk_sfpcnt[4:0]==0  ? 4'h1 : 0;//16'h00bc;4'b1;
reg [31:0] rxusrclk_sfpcnt=0;
wire [DWIDTH-1:0] txdata_sfp=rxusrclk_sfpcnt[DWIDTH-1:0];//rxusrclk_sfpcnt[4:0]==0  ? 32'hbc : rxusrclk_sfpcnt[DWIDTH-1:0];//16'h00bc;
wire txuserrdy_sfp=1'b1;
wire resetdone_sfp ;
wire sfpreconnected=1'b0;
wire sfp_tx_p,sfp_tx_n,sfp_rx_p,sfp_rx_n;
wire sma_mgt_tx_p,sma_mgt_tx_n,sma_mgt_rx_p,sma_mgt_rx_n;
assign {sma_mgt_rx_p,sma_mgt_rx_n}
={sma_mgt_tx_p,sma_mgt_tx_n};
assign {sfp_rx_p,sfp_rx_n}
={sfp_tx_p,sfp_tx_n};

gticc_gt #(.SIM_CPLLREFCLK_SEL(3'h5),.DWIDTH(DWIDTH))
gticc_gt_sfp(.CPLLLOCKDETCLK(sysclk)
,.GTNORTHREFCLK0(1'b0),.GTNORTHREFCLK1(1'b0),.GTREFCLK0(1'b0),.GTREFCLK1(1'b0),.GTSOUTHREFCLK0(si5324_out_c),.GTSOUTHREFCLK1(1'b0)
,.GTXRXN(sfp_rx_n),.GTXRXP(sfp_rx_p),.GTXTXN(sfp_tx_n),.GTXTXP(sfp_tx_p)
,.QPLLCLK(1'b0),.QPLLREFCLK(1'b0)
//,.CPLLREFCLKSEL(3'b1)
,.CPLLREFCLKSEL(3'h5)
,.rxusrclk(rxusrclk_sfp)
,.txusrclk(txusrclk_sfp)
,.RXCHARISK(rxcharisk_sfp)
,.RXDATA(rxdata_sfp)
,.RXUSERRDY(rxuserrdy_sfp)
,.TXCHARISK(txcharisk_sfp)
,.TXDATA(txdata_sfp)
,.TXUSERRDY(txuserrdy_sfp)
,.reset(reset_sfp||sfpreconnected)
,.resetdone(resetdone_sfp)
//,.readyforreset(readyforreset_sfp)
,.RXOUTCLKFABRIC(rxoutclkfabric_sfp)
,.RXOUTCLKPCS(rxoutclkpcs_sfp)
);
reg [DWIDTH-1:0] rxdata_sfp_d=0;
reg [DWIDTH-1:0] rxdatadiff=0;
always @(posedge rxusrclk_sfp) begin
	rxusrclk_sfpcnt<=rxusrclk_sfpcnt+1;
	rxdata_sfp_d<=rxdata_sfp;
	rxdatadiff<=rxdata_sfp-rxdata_sfp_d;
end
endmodule

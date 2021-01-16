//`include "constants.vams"
//`include "xc7vx485tffg1761pkg.vh"
`timescale 1ns / 100ps
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
reg clk125=0;
initial begin
    forever #(4) clk125=~clk125;
end
reg [31:0] clk125cnt=0;
always @(posedge clk125) begin
	clk125cnt<=clk125cnt+1;
end
reg clk250=0;
initial begin
    forever #(2) clk250=~clk250;
end
reg clk250_1=0;
always@(*)
	clk250_1= #0.1 clk250;
reg clk250_2=0;
always@(*)
	#0.1 clk250_2= clk250;
reg [31:0] clk250cnt=0;
always @(posedge clk250) begin
	clk250cnt<= clk250cnt+1;
end
reg clk249_9=0;
initial begin
    forever #(2.1) clk249_9=~clk249_9;
end
reg sjesdclk=0;
initial begin
    forever #(4) sjesdclk=~sjesdclk;
end
reg clk500=0;
initial begin
    forever #(1) clk500=~clk500;
end
reg [31:0] clk500cnt=0;
always @(posedge clk500) begin
	clk500cnt<=clk500cnt+1;
end
reg si5324_out_c=0;
initial begin
    forever #(2) si5324_out_c=~si5324_out_c;
end
localparam SIM=1;






wire qpllresetdone_113;
wire qplloutclk_113;
wire qplloutrefclk_113;
wire qpllpd_113=1'b0;
wire qpllrefclklost_113;
wire qpllreset_113;
//wire [2:0] qpllrefclksel_113=3'h1;
wire [2:0] qpllrefclksel_113=3'h5;
gticc_common #(.SIM_QPLLREFCLK_SEL(3'h005))
gticc_common_113(.QPLLLOCKDETCLK(sysclk)
,.GTNORTHREFCLK0(1'b0),.GTNORTHREFCLK1(1'b0),.GTREFCLK0(1'b0),.GTREFCLK1(1'b0),.GTSOUTHREFCLK0(si5324_out_c),.GTSOUTHREFCLK1(1'b0)
,.QPLLREFCLKSEL(qpllrefclksel_113)
,.QPLLOUTCLK(qplloutclk_113)
,.QPLLOUTREFCLK(qplloutrefclk_113)
,.reset(qpllreset_113)
,.resetdone(qpllresetdone_113)
);



wire readyforreset_sfp;
wire reset_sfp;
wire rxusrclk_sfp;
wire txusrclk_sfp;
wire [3:0] rxcharisk_sfp;
wire [31:0] rxdata_sfp;
wire [31:0] sfptestrx;
assign sfptestrx=rxdata_sfp;
wire rxuserrdy_sfp=1'b1;
wire [3:0] txcharisk_sfp;//=4'b0;
wire sfptesttx=32'habcdbeef;
wire [31:0] txdata_sfp;//=0;
wire txuserrdy_sfp=1'b1;
wire resetdone_sfp ;
wire sfpreconnected=1'b0;
wire sfp_tx_p,sfp_tx_n,sfp_rx_p,sfp_rx_n;
wire sma_mgt_tx_p,sma_mgt_tx_n,sma_mgt_rx_p,sma_mgt_rx_n;
assign {sma_mgt_rx_p,sma_mgt_rx_n}={sfp_tx_p,sfp_tx_n};
assign {sfp_rx_p,sfp_rx_n}={sma_mgt_tx_p,sma_mgt_tx_n};
gticc_gt #(.SIM_CPLLREFCLK_SEL(3'b001))
gticc_gt_sfp(.CPLLLOCKDETCLK(sysclk)
,.GTNORTHREFCLK0(1'b0),.GTNORTHREFCLK1(1'b0),.GTREFCLK0(1'b0),.GTREFCLK1(1'b0),.GTSOUTHREFCLK0(si5324_out_c),.GTSOUTHREFCLK1(1'b0)
,.GTXRXN(sfp_rx_n),.GTXRXP(sfp_rx_p),.GTXTXN(sfp_tx_n),.GTXTXP(sfp_tx_p)
,.QPLLCLK(qplloutclk_113),.QPLLREFCLK(qplloutrefclk_113)
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
);


wire reset_smasfp;//=reset_sfp;
wire rxusrclk_smasfp;
wire txusrclk_smasfp;
wire [3:0] rxcharisk_smasfp;
wire [31:0] rxdata_smasfp;
wire smasfptestrx=rxdata_smasfp;
wire rxuserrdy_smasfp=1'b1;
wire [3:0] txcharisk_smasfp;//=4'b0;
wire [31:0] smasfptesttx=32'h12345678;
wire [31:0] txdata_smasfp;//=smasfptesttx;//32'habcdbeef;
wire txuserrdy_smasfp=1'b1;
wire resetdone_smasfp;
gticc_gt gticc_gt_smasfp(.CPLLLOCKDETCLK(sysclk)
,.GTNORTHREFCLK0(1'b0),.GTNORTHREFCLK1(1'b0),.GTREFCLK0(sgmiiclk),.GTREFCLK1(sma_mgt_refclk),.GTSOUTHREFCLK0(si5324_out_c),.GTSOUTHREFCLK1(1'b0)
,.GTXRXN(sma_mgt_rx_n),.GTXRXP(sma_mgt_rx_p),.GTXTXN(sma_mgt_tx_n),.GTXTXP(sma_mgt_tx_p)
,.QPLLCLK(qplloutclk_113),.QPLLREFCLK(qplloutrefclk_113)
//,.CPLLREFCLKSEL(3'b1)
,.CPLLREFCLKSEL(3'h5)
,.rxusrclk(rxusrclk_smasfp)
,.txusrclk(txusrclk_smasfp)
,.RXCHARISK(rxcharisk_smasfp)
,.RXDATA(rxdata_smasfp)
,.RXUSERRDY(rxuserrdy_smasfp)
,.TXCHARISK(txcharisk_smasfp)
,.TXDATA(txdata_smasfp)
,.TXUSERRDY(txuserrdy_smasfp)
,.reset(reset_smasfp)//||smasfpreconnected)
,.resetdone(resetdone_smasfp)
//,.readyforreset(readyforreset_smasfp)
);

reg [31:0] smasfptxclkcnt=0;
always @(posedge txusrclk_smasfp) begin
	smasfptxclkcnt<=smasfptxclkcnt+1;
end
assign	txdata_smasfp=(~|smasfptxclkcnt[3:0]) ? 32'h000000bc : smasfptesttx;//32'habcdbeef;
assign	txcharisk_smasfp=(~|smasfptxclkcnt[3:0]) ? 4'h1 : 4'h0;

reg [31:0] sfptxclkcnt=0;
always @(posedge txusrclk_sfp) begin
	sfptxclkcnt<=sfptxclkcnt+1;
end
assign	txdata_sfp=(~|sfptxclkcnt[3:0]) ? 32'h000000bc : sfptesttx;//32'habcdbeef;
assign	txcharisk_sfp=(~|sfptxclkcnt[3:0]) ? 4'h1 : 4'h0;
reg [31:0] sfprx=0;
reg [31:0] smasfprx=0;
always @(posedge rxusrclk_sfp) begin
	if (~|rxcharisk_sfp) begin
		sfprx<=rxdata_sfp;
	end

end

always @(posedge rxusrclk_smasfp) begin
	if (~|rxcharisk_smasfp) begin
		smasfprx<=rxdata_smasfp;
	end
end



localparam RESET_PLL=0;
localparam QPLLRESET_113=1;
localparam RESET_SFP=2;
localparam RESET_SMASFP=3;
localparam NSTEP=4;

wire [NSTEP-1:0] done;
wire [NSTEP-1:0] dbdone_w;
reg [NSTEP-1:0] dbdone=0;
wire [NSTEP-1:0] donestrobe;
wire [NSTEP-1:0] error;
wire [NSTEP-1:0] resetout;
wire [NSTEP-1:0] dbresetout;
wire [NSTEP-1:0] donecriteria;
reg [NSTEP-1:0] donecriteria_r=0;
wire stbdone;
wire resetin=sysclkcnt==100;
reg [31:0] resetcnt=0;
always @(posedge sysclk) begin
	if (resetin) begin
		resetcnt<=resetcnt+1;
	end
	if (stbdone) begin
		dbdone<=dbdone_w;
		donecriteria_r<=donecriteria;
	end
end
wire [NSTEP*16-1:0] readylength;//={NSTEP{16'd20}};
wire [NSTEP*16-1:0] resetlength;//={NSTEP{16'd20}};
wire [NSTEP*32-1:0] resettimeout;//={NSTEP{32'b0}};
wire [NSTEP*16-1:0] resettodonecheck;//={16'd10,16'd20,16'd1};


wire [2:0] dbchainstate,dbchainnext;
chainreset #(.NSTEP(NSTEP))
chainreset(.clk(sysclk)
,.resetin(resetin)
,.resetout(resetout)
,.donecriteria(donecriteria)
,.resetlength(resetlength)
,.readylength(readylength)
,.resettodonecheck(resettodonecheck)
,.resettimeout(resettimeout)
,.done(done)
,.stbdone(stbdone)
,.dbdone(dbdone_w)
,.dbstate(dbchainstate)
,.dbnext(dbchainnext)
,.dbresetout(dbresetout)
);

assign qpllreset_113=resetout[QPLLRESET_113];
assign donecriteria[QPLLRESET_113]=qpllresetdone_113;
assign readylength[QPLLRESET_113*16+:16]=16'd30;assign resetlength[QPLLRESET_113*16+:16]=16'd20;assign resettodonecheck[QPLLRESET_113*16+:16]=16'd10;assign resettimeout[QPLLRESET_113*32+:32]=32'h10000000;
assign reset_sfp=resetout[RESET_SFP];
assign donecriteria[RESET_SFP]=resetdone_sfp;
assign readylength[RESET_SFP*16+:16]=16'd30;assign resetlength[RESET_SFP*16+:16]=16'd20;assign resettodonecheck[RESET_SFP*16+:16]=16'd10;assign resettimeout[RESET_SFP*32+:32]=32'h10000000;
assign reset_smasfp=resetout[RESET_SMASFP];
assign donecriteria[RESET_SMASFP]=resetdone_smasfp;
assign readylength[RESET_SMASFP*16+:16]=16'd30;assign resetlength[RESET_SMASFP*16+:16]=16'd20;assign resettodonecheck[RESET_SMASFP*16+:16]=16'd10;assign resettimeout[RESET_SMASFP*32+:32]=32'h10000000;

reg [63:0] d250cnt=0;
reg [63:0] d100cnt=0;
reg [63:0] diffinte=0;
always @(posedge clk249_9) begin
	if (clk250) begin
		d250cnt<=resetdone_sfp ? d250cnt+1 : 0;
	end
	if (rxusrclk_sfp) begin
		d100cnt<= resetdone_sfp ? d100cnt+1 : 0;
	end
end
wire helpclk;
wire pllclkfbout,pllclkfbin;
wire pll_locked;
MMCME2_BASE#(.BANDWIDTH("OPTIMIZED")
,.CLKIN1_PERIOD(4.0)
,.CLKFBOUT_MULT_F(62.375)
,.DIVCLK_DIVIDE(13)
,.CLKFBOUT_PHASE(0.0)
,.CLKOUT0_DIVIDE_F(6.0)
,.CLKOUT0_DUTY_CYCLE(0.5)
,.CLKOUT0_PHASE(0.0)
,.REF_JITTER1(0.0)
,.STARTUP_WAIT("FALSE")
) pllhelperclk (.CLKIN1(si5324_out_c)
,.CLKOUT0(helpclk_w)
,.LOCKED(pll_locked)
,.CLKFBOUT(pllclkfbout)
,.CLKFBIN(pllclkfbin)
,.PWRDWN(1'b0)
,.RST(pll_reset)
);

assign pll_reset=resetout[RESET_PLL];
assign donecriteria[RESET_PLL]=pll_locked;
assign readylength[RESET_PLL*16+:16]=16'd30;assign resetlength[RESET_PLL*16+:16]=16'd20;assign resettodonecheck[RESET_PLL*16+:16]=16'd10;assign resettimeout[RESET_PLL*32+:32]=32'h10000000;

	
BUFG pllclkfb(.I(pllclkfbout),.O(pllclkfbin));
BUFG helpclkbufg(.I(helpclk_w),.O(helpclk));
endmodule

/*
MMCME2_BASE #(.BANDWIDTH("OPTIMIZED")
,.CLKIN1_PERIOD(5.0)  // 200MHz
,.CLKFBOUT_MULT_F(5)   //
,.DIVCLK_DIVIDE(1)     //
,.CLKFBOUT_PHASE(0.0)
,.CLKOUT0_DIVIDE_F(10)   // 100M
,.CLKOUT0_DUTY_CYCLE(0.5)
,.CLKOUT0_PHASE(0.0)
,.CLKOUT1_DIVIDE(5)   // 200M
,.CLKOUT1_DUTY_CYCLE(0.5)
,.CLKOUT1_PHASE(0.0)
,.REF_JITTER1(0.0)
,.CLKOUT2_DIVIDE(8)   // 125M
,.CLKOUT2_DUTY_CYCLE(0.5)
,.CLKOUT2_PHASE(0.0)
,.CLKOUT3_DIVIDE(4)   // 250M
,.CLKOUT3_DUTY_CYCLE(0.5)
,.CLKOUT3_PHASE(0.0)
//,.REF_JITTER2(0.0)
,.STARTUP_WAIT("FALSE")
) mmcme2_base_sysclk (.CLKIN1(sysclk)
,.CLKOUT0(mmcm_clk100)
,.CLKOUT1(mmcm_clk200)
,.CLKOUT2(mmcm_clk125)
,.CLKOUT3(mmcm_clk250)
,.LOCKED(mmcm_locked)
,.CLKFBOUT(mmcmclkfbout)
,.CLKFBIN(mmcmclkfbin)
,.PWRDWN(1'b0)
,.RST(mmcm_reset)
);
*/

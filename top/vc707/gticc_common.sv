`timescale 1ns / 10ps
module gticc_common #(parameter SIM_RESET_SPEEDUP = "TRUE" // Set to "true" to speed up sim reset
,parameter SIM_QPLLREFCLK_SEL = 3'b001
,parameter QPLL_FBDIV_TOP = 16
)(input [2:0] QPLLREFCLKSEL
,input GTNORTHREFCLK0
,input GTNORTHREFCLK1
,input GTREFCLK0
,input GTREFCLK1
,input GTSOUTHREFCLK0
,input GTSOUTHREFCLK1
,input QPLLLOCKDETCLK
,output QPLLOUTCLK
,output QPLLOUTREFCLK
,input reset
,output resetdone
);
wire QPLLRESET=reset;
wire QPLLLOCK;
wire QPLLREFCLKLOST;
assign resetdone=QPLLLOCK&~QPLLREFCLKLOST;

localparam QPLL_FBDIV_IN =(QPLL_FBDIV_TOP == 16) ? 10'b0000100000 :
	(QPLL_FBDIV_TOP == 20) ? 10'b0000110000 :
	(QPLL_FBDIV_TOP == 32) ? 10'b0001100000 :
	(QPLL_FBDIV_TOP == 40) ? 10'b0010000000 :
	(QPLL_FBDIV_TOP == 64) ? 10'b0011100000 :
	(QPLL_FBDIV_TOP == 66) ? 10'b0101000000 :
	(QPLL_FBDIV_TOP == 80) ? 10'b0100100000 :
	(QPLL_FBDIV_TOP == 100) ? 10'b0101110000 : 10'b0000000000;
localparam QPLL_FBDIV_RATIO =(QPLL_FBDIV_TOP == 16) ? 1'b1 :
	(QPLL_FBDIV_TOP == 20) ? 1'b1 :
	(QPLL_FBDIV_TOP == 32) ? 1'b1 :
	(QPLL_FBDIV_TOP == 40) ? 1'b1 :
	(QPLL_FBDIV_TOP == 64) ? 1'b1 :
	(QPLL_FBDIV_TOP == 66) ? 1'b0 :
	(QPLL_FBDIV_TOP == 80) ? 1'b1 :
	(QPLL_FBDIV_TOP == 100) ? 1'b1 : 1'b1;

GTXE2_COMMON #(.SIM_RESET_SPEEDUP(SIM_RESET_SPEEDUP),.SIM_QPLLREFCLK_SEL(SIM_QPLLREFCLK_SEL),.SIM_VERSION("4.0"),.BIAS_CFG(64'h0000040000001000),.COMMON_CFG(32'h00000000),.QPLL_CFG(27'h06801C1),.QPLL_CLKOUT_CFG(4'b0000),.QPLL_COARSE_FREQ_OVRD(6'b010000),.QPLL_COARSE_FREQ_OVRD_EN(1'b0),.QPLL_CP(10'b0000011111),.QPLL_CP_MONITOR_EN(1'b0),.QPLL_DMONITOR_SEL(1'b0),.QPLL_FBDIV_MONITOR_EN(1'b0),.QPLL_INIT_CFG(24'h000006),.QPLL_LOCK_CFG(16'h21E8),.QPLL_LPF(4'b1111)
,.QPLL_FBDIV(QPLL_FBDIV_IN)
,.QPLL_FBDIV_RATIO(QPLL_FBDIV_RATIO)
,.QPLL_REFCLK_DIV(1))
gtxe2_common(.DRPADDR(8'b0),.DRPCLK(1'b0),.DRPDI(16'b0),.DRPDO(),.DRPEN(1'b0),.DRPRDY(),.DRPWE(1'b0),.GTGREFCLK(1'b0)
,.QPLLOUTRESET(1'b0),.QPLLRSVD1(16'b0000000000000000),.QPLLRSVD2(5'b11111),.BGBYPASSB(1'b1),.BGMONITORENB(1'b1),.BGPDB(1'b1),.BGRCALOVRD(5'b11111),.PMARSVD(8'b00000000),.RCALENB(1'b1),.QPLLLOCKEN(1'b1),.QPLLPD(1'b0)
,.GTNORTHREFCLK0
,.GTNORTHREFCLK1
,.GTREFCLK0
,.GTREFCLK1
,.GTSOUTHREFCLK0
,.GTSOUTHREFCLK1
,.QPLLOUTCLK
,.QPLLOUTREFCLK
,.QPLLLOCK
,.QPLLLOCKDETCLK
,.QPLLREFCLKLOST
,.QPLLREFCLKSEL
,.QPLLRESET
,.QPLLDMONITOR()
,.REFCLKOUTMONITOR()
,.QPLLFBCLKLOST()
);
endmodule

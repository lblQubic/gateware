`default_nettype wire
`timescale 1ns / 10ps
module gticc_gt #
(parameter GT_SIM_GTRESET_SPEEDUP = "TRUE"
,parameter RX_DFE_KL_CFG2_IN = 32'h301148AC
,parameter SIM_CPLLREFCLK_SEL = 3'b001
,parameter PMA_RSV_IN = 32'h00018480
,parameter PCS_RSVD_ATTR_IN = 48'h000000000000
)
(input CPLLLOCKDETCLK
,input CPLLPD
,input [2:0] CPLLREFCLKSEL
,output CPLLFBCLKLOST
,output CPLLLOCK
,output CPLLREFCLKLOST
,input CPLLRESET
,input GTNORTHREFCLK0
,input GTNORTHREFCLK1
,input GTREFCLK0
,input GTREFCLK1
,input GTSOUTHREFCLK0
,input GTSOUTHREFCLK1
,input QPLLCLK
,input QPLLREFCLK
,input RXUSERRDY
,output RXUSRCLK
,output RXUSRCLK2
,output [31:0] RXDATA
,input GTXRXP
,input GTXRXN
,output RXBYTEISALIGNED
,output RXBYTEREALIGN
,output RXCOMMADET
,input GTRXRESET
,input RXPMARESET
,output [3:0] RXCHARISCOMMA
,output RXRESETDONE
,input GTTXRESET
,input TXUSERRDY
,output TXUSRCLK
,output TXUSRCLK2
,input [31:0] TXDATA
,output GTXTXN
,output GTXTXP
,input [3:0] TXCHARISK
,output [3:0] RXCHARISK
,output TXRESETDONE
);
wire TXOUTCLK;
wire RXOUTCLK;
wire [31:0] rxdata_float_i;
wire [3:0] rxchariscomma_float_i;
wire [3:0] rxcharisk_float_i;
GTXE2_CHANNEL #(.CPLL_CFG(24'hBC07DC),.CPLL_INIT_CFG(24'h00001E),.DMONITOR_CFG(24'h000A00),.ES_PMA_CFG(10'b0000000000),.PCS_RSVD_ATTR(PCS_RSVD_ATTR_IN),.RXBUFRESET_TIME(5'b00001),.RXCDRFREQRESET_TIME(5'b00001),.RXCDRPHRESET_TIME(5'b00001),.RXDFELPMRESET_TIME(7'b0001111),.RXDLY_CFG(16'h001F),.RXDLY_LCFG(9'h030),.RXDLY_TAP_CFG(16'h0000),.RXISCANRESET_TIME(5'b00001),.RXPH_CFG(24'h000000),.RXPH_MONITOR_SEL(5'b00000),.RXPMARESET_TIME(5'b00011),.TRANS_TIME_RATE(8'h0E),.TX_LOOPBACK_DRIVE_HIZ("FALSE"),.TX_RXDETECT_CFG(14'h1832),.TX_RXDETECT_REF(3'b100),.UCODEER_CLR(1'b0),.ALIGN_COMMA_DOUBLE("FALSE")
,.ALIGN_COMMA_ENABLE(10'b1111111111),.ALIGN_COMMA_WORD(4),.ALIGN_MCOMMA_DET("TRUE"),.ALIGN_MCOMMA_VALUE(10'b1010000011),.ALIGN_PCOMMA_DET("TRUE"),.ALIGN_PCOMMA_VALUE(10'b0101111100),.CBCC_DATA_SOURCE_SEL("DECODED"),.CHAN_BOND_KEEP_ALIGN("FALSE"),.CHAN_BOND_MAX_SKEW(1),.CHAN_BOND_SEQ_1_1(10'b0000000000),.CHAN_BOND_SEQ_1_2(10'b0000000000),.CHAN_BOND_SEQ_1_3(10'b0000000000),.CHAN_BOND_SEQ_1_4(10'b0000000000),.CHAN_BOND_SEQ_1_ENABLE(4'b1111),.CHAN_BOND_SEQ_2_1(10'b0000000000),.CHAN_BOND_SEQ_2_2(10'b0000000000),.CHAN_BOND_SEQ_2_3(10'b0000000000),.CHAN_BOND_SEQ_2_4(10'b0000000000),.CHAN_BOND_SEQ_2_ENABLE(4'b1111),.CHAN_BOND_SEQ_2_USE("FALSE"),.CHAN_BOND_SEQ_LEN(1),.CLK_CORRECT_USE("FALSE"),.CLK_COR_KEEP_IDLE("FALSE"),.CLK_COR_MAX_LAT(20),.CLK_COR_MIN_LAT(16),.CLK_COR_PRECEDENCE("TRUE"),.CLK_COR_REPEAT_WAIT(0),.CLK_COR_SEQ_1_1(10'b0100000000),.CLK_COR_SEQ_1_2(10'b0000000000),.CLK_COR_SEQ_1_3(10'b0000000000),.CLK_COR_SEQ_1_4(10'b0000000000),.CLK_COR_SEQ_1_ENABLE(4'b1111),.CLK_COR_SEQ_2_1(10'b0100000000),.CLK_COR_SEQ_2_2(10'b0000000000),.CLK_COR_SEQ_2_3(10'b0000000000),.CLK_COR_SEQ_2_4(10'b0000000000),.CLK_COR_SEQ_2_ENABLE(4'b1111),.CLK_COR_SEQ_2_USE("FALSE"),.CLK_COR_SEQ_LEN(1),.CPLL_FBDIV(4),.CPLL_FBDIV_45(4),.CPLL_LOCK_CFG(16'h01E8),.CPLL_REFCLK_DIV(1),.DEC_MCOMMA_DETECT("TRUE"),.DEC_PCOMMA_DETECT("TRUE"),.DEC_VALID_COMMA_ONLY("FALSE"),.ES_CONTROL(6'b000000),.ES_ERRDET_EN("FALSE"),.ES_EYE_SCAN_EN("TRUE"),.ES_HORZ_OFFSET(12'h000),.ES_PRESCALE(5'b00000),.ES_QUALIFIER(80'h00000000000000000000),.ES_QUAL_MASK(80'h00000000000000000000),.ES_SDATA_MASK(80'h00000000000000000000),.ES_VERT_OFFSET(9'b000000000),.FTS_DESKEW_SEQ_ENABLE(4'b1111),.FTS_LANE_DESKEW_CFG(4'b1111),.FTS_LANE_DESKEW_EN("FALSE"),.GEARBOX_MODE(3'b000),.OUTREFCLK_SEL_INV(2'b11),.PCS_PCIE_EN("FALSE"),.PD_TRANS_TIME_FROM_P2(12'h03c),.PD_TRANS_TIME_NONE_P2(8'h3c),.PD_TRANS_TIME_TO_P2(8'h64),.PMA_RSV(PMA_RSV_IN),.PMA_RSV2(16'h2050),.PMA_RSV3(2'b00),.PMA_RSV4(32'h00000000),.RXBUF_ADDR_MODE("FAST"),.RXBUF_EIDLE_HI_CNT(4'b1000),.RXBUF_EIDLE_LO_CNT(4'b0000),.RXBUF_EN("TRUE"),.RXBUF_RESET_ON_CB_CHANGE("TRUE"),.RXBUF_RESET_ON_COMMAALIGN("FALSE"),.RXBUF_RESET_ON_EIDLE("FALSE"),.RXBUF_RESET_ON_RATE_CHANGE("TRUE"),.RXBUF_THRESH_OVFLW(61),.RXBUF_THRESH_OVRD("FALSE"),.RXBUF_THRESH_UNDFLW(4),.RXCDR_CFG(72'h03000023ff10400020),.RXCDR_FR_RESET_ON_EIDLE(1'b0),.RXCDR_HOLD_DURING_EIDLE(1'b0),.RXCDR_LOCK_CFG(6'b010101),.RXCDR_PH_RESET_ON_EIDLE(1'b0),.RXGEARBOX_EN("FALSE"),.RXLPM_HF_CFG(14'b00000011110000),.RXLPM_LF_CFG(14'b00000011110000),.RXOOB_CFG(7'b0000110),.RXOUT_DIV(1),.RXPCSRESET_TIME(5'b00001),.RXPHDLY_CFG(24'h084020),.RXPRBS_ERR_LOOPBACK(1'b0),.RXSLIDE_AUTO_WAIT(7),.RXSLIDE_MODE("OFF"),.RX_BIAS_CFG(12'b000000000100),.RX_BUFFER_CFG(6'b000000),.RX_CLK25_DIV(5),.RX_CLKMUX_PD(1'b1),.RX_CM_SEL(2'b11),.RX_CM_TRIM(3'b010),.RX_DATA_WIDTH(40),.RX_DDI_SEL(6'b000000),.RX_DEBUG_CFG(12'b000000000000),.RX_DEFER_RESET_BUF_EN("TRUE"),.RX_DFE_GAIN_CFG(23'h020FEA),.RX_DFE_H2_CFG(12'b000000000000),.RX_DFE_H3_CFG(12'b000001000000),.RX_DFE_H4_CFG(11'b00011110000),.RX_DFE_H5_CFG(11'b00011100000),.RX_DFE_KL_CFG(13'b0000011111110),.RX_DFE_KL_CFG2(RX_DFE_KL_CFG2_IN),.RX_DFE_LPM_CFG(16'h0904),.RX_DFE_LPM_HOLD_DURING_EIDLE(1'b0),.RX_DFE_UT_CFG(17'b10001111000000000),.RX_DFE_VP_CFG(17'b00011111100000011),.RX_DFE_XYD_CFG(13'b0000000000000),.RX_DISPERR_SEQ_MATCH("TRUE"),.RX_INT_DATAWIDTH(1),.RX_OS_CFG(13'b0000010000000),.RX_SIG_VALID_DLY(10),.RX_XCLK_SEL("RXREC"),.SAS_MAX_COM(64),.SAS_MIN_COM(36),.SATA_BURST_SEQ_LEN(4'b0101),.SATA_BURST_VAL(3'b100),.SATA_CPLL_CFG("VCO_3000MHZ"),.SATA_EIDLE_VAL(3'b100),.SATA_MAX_BURST(8),.SATA_MAX_INIT(21),.SATA_MAX_WAKE(7),.SATA_MIN_BURST(4),.SATA_MIN_INIT(12),.SATA_MIN_WAKE(4),.SHOW_REALIGN_COMMA("TRUE"),.SIM_CPLLREFCLK_SEL(SIM_CPLLREFCLK_SEL),.SIM_RECEIVER_DETECT_PASS("TRUE"),.SIM_RESET_SPEEDUP(GT_SIM_GTRESET_SPEEDUP),.SIM_TX_EIDLE_DRIVE_LEVEL("X"),.SIM_VERSION("4.0"),.TERM_RCAL_CFG(5'b10000),.TERM_RCAL_OVRD(1'b0),.TST_RSV(32'h00000000),.TXBUF_EN("TRUE"),.TXBUF_RESET_ON_RATE_CHANGE("TRUE"),.TXDLY_CFG(16'h001F),.TXDLY_LCFG(9'h030),.TXDLY_TAP_CFG(16'h0000),.TXGEARBOX_EN("FALSE"),.TXOUT_DIV(1),.TXPCSRESET_TIME(5'b00001),.TXPHDLY_CFG(24'h084020),.TXPH_CFG(16'h0780),.TXPH_MONITOR_SEL(5'b00000),.TXPMARESET_TIME(5'b00001),.TX_CLK25_DIV(5),.TX_CLKMUX_PD(1'b1),.TX_DATA_WIDTH(40),.TX_DEEMPH0(5'b00000),.TX_DEEMPH1(5'b00000),.TX_DRIVE_MODE("DIRECT"),.TX_EIDLE_ASSERT_DELAY(3'b110),.TX_EIDLE_DEASSERT_DELAY(3'b100),.TX_INT_DATAWIDTH(1),.TX_MAINCURSOR_SEL(1'b0),.TX_MARGIN_FULL_0(7'b1001110),.TX_MARGIN_FULL_1(7'b1001001),.TX_MARGIN_FULL_2(7'b1000101),.TX_MARGIN_FULL_3(7'b1000010),.TX_MARGIN_FULL_4(7'b1000000),.TX_MARGIN_LOW_0(7'b1000110),.TX_MARGIN_LOW_1(7'b1000100),.TX_MARGIN_LOW_2(7'b1000010),.TX_MARGIN_LOW_3(7'b1000000),.TX_MARGIN_LOW_4(7'b1000000),.TX_PREDRIVER_MODE(1'b0),.TX_QPI_STATUS_EN(1'b0),.TX_XCLK_SEL("TXOUT"))
gtxe2_channel(
.CFGRESET(1'b0)
,.EYESCANMODE(1'b0)
,.PCSRSVDIN(16'b0000000000000000)
,.PCSRSVDIN2(5'b00000)
,.PCSRSVDOUT()
,.PMARSVDIN(5'b00000)
,.PMARSVDIN2(5'b00000)
,.RXCDRFREQRESET(1'b0)
,.RXCDRLOCK()
,.RXCDROVRDEN(1'b0)
,.RXCDRRESET(1'b0)
,.RXCDRRESETRSV(1'b0)
,.RXOOBRESET(1'b0)
,.TSTIN(20'b11111111111111111111)
,.TSTOUT()
,.TXDIFFPD(1'b0)
,.TXPISOPD(1'b0)
,.CLKRSVD(4'b0)
,.DMONITOROUT(),.DRPADDR(0),.DRPCLK(0),.DRPDI(0),.DRPDO(),.DRPEN(0),.DRPRDY(),.DRPWE(0),.EYESCANDATAERROR(),.EYESCANRESET(1'b0),.EYESCANTRIGGER(1'b0),.GTGREFCLK(1'b0),.GTREFCLKMONITOR(),.GTRESETSEL(1'b0),.GTRSVD(16'b0000000000000000),.LOOPBACK(3'b0),.PHYSTATUS(),.RESETOVRD(1'b0),.RX8B10BEN(1'b1),.RXBUFRESET(1'b0),.RXBUFSTATUS(),.RXCDRHOLD(1'b0),.RXCHANBONDSEQ(),.RXCHANISALIGNED(),.RXCHANREALIGN(),.RXCHBONDEN(1'b0),.RXCHBONDI(5'b00000),.RXCHBONDLEVEL(3'b0),.RXCHBONDMASTER(1'b0),.RXCHBONDO(),.RXCHBONDSLAVE(1'b0),.RXCLKCORCNT(),.RXCOMINITDET(),.RXCOMMADETEN(1'b1),.RXCOMSASDET(),.RXCOMWAKEDET(),.RXDATAVALID(),.RXDDIEN(1'b0),.RXDFEAGCHOLD(1'b0),.RXDFEAGCOVRDEN(1'b0),.RXDFECM1EN(1'b0),.RXDFELFHOLD(1'b0),.RXDFELFOVRDEN(1'b0),.RXDFELPMRESET(1'b0),.RXDFETAP2HOLD(1'b0),.RXDFETAP2OVRDEN(1'b0),.RXDFETAP3HOLD(1'b0),.RXDFETAP3OVRDEN(1'b0),.RXDFETAP4HOLD(1'b0),.RXDFETAP4OVRDEN(1'b0),.RXDFETAP5HOLD(1'b0),.RXDFETAP5OVRDEN(1'b0),.RXDFEUTHOLD(1'b0),.RXDFEUTOVRDEN(1'b0),.RXDFEVPHOLD(1'b0),.RXDFEVPOVRDEN(1'b0),.RXDFEVSEN(1'b0),.RXDFEXYDEN(1'b1),.RXDFEXYDHOLD(1'b0),.RXDFEXYDOVRDEN(1'b0),.RXDISPERR(),.RXDLYBYPASS(1'b1),.RXDLYEN(1'b0),.RXDLYOVRDEN(1'b0),.RXDLYSRESET(1'b0),.RXDLYSRESETDONE(),.RXELECIDLE(),.RXELECIDLEMODE(2'b11),.RXGEARBOXSLIP(1'b0),.RXHEADER(),.RXHEADERVALID(),.RXLPMEN(1'b1),.RXLPMHFHOLD(),.RXLPMHFOVRDEN(1'b0),.RXLPMLFHOLD(),.RXLPMLFKLOVRDEN(1'b0),.RXMCOMMAALIGNEN(1'b1),.RXMONITOROUT(),.RXMONITORSEL(1'b0),.RXNOTINTABLE(),.RXOSHOLD(1'b0),.RXOSOVRDEN(1'b0),.RXOUTCLKFABRIC(),.RXOUTCLKPCS(),.RXOUTCLKSEL(3'b010),.RXPCOMMAALIGNEN(1'b1),.RXPCSRESET(1'b0),.RXPD(2'b00),.RXPHALIGN(1'b0),.RXPHALIGNDONE(),.RXPHALIGNEN(1'b0),.RXPHDLYPD(1'b0),.RXPHDLYRESET(1'b0),.RXPHMONITOR(),.RXPHOVRDEN(1'b0),.RXPHSLIPMONITOR(),.RXPOLARITY(1'b0),.RXPRBSCNTRESET(1'b0),.RXPRBSERR(),.RXPRBSSEL(3'b0),.RXQPIEN(1'b0),.RXQPISENN(),.RXQPISENP(),.RXRATE(3'b0),.RXRATEDONE(),.RXSLIDE(1'b0),.RXSTARTOFSEQ(),.RXSTATUS(),.RXSYSCLKSEL(2'b00),.RXVALID(),.SETERRSTATUS(1'b0),.TX8B10BBYPASS(8'b0),.TX8B10BEN(1'b1),.TXBUFDIFFCTRL(3'b100),.TXBUFSTATUS(),.TXCHARDISPMODE(8'b0),.TXCHARDISPVAL(8'b0),.TXCOMFINISH(),.TXCOMINIT(1'b0),.TXCOMSAS(1'b0),.TXCOMWAKE(1'b0),.TXDEEMPH(1'b0),.TXDETECTRX(1'b0),.TXDIFFCTRL(4'b1000),.TXDLYBYPASS(1'b1),.TXDLYEN(1'b0),.TXDLYHOLD(1'b0),.TXDLYOVRDEN(1'b0),.TXDLYSRESET(1'b0),.TXDLYSRESETDONE(),.TXDLYUPDOWN(1'b0),.TXELECIDLE(1'b0),.TXGEARBOXREADY(),.TXHEADER(3'b0),.TXINHIBIT(1'b0),.TXMAINCURSOR(7'b0000000),.TXMARGIN(3'b0),.TXOUTCLKFABRIC(),.TXOUTCLKPCS(),.TXOUTCLKSEL(3'b010),.TXPCSRESET(1'b0),.TXPD(2'b00),.TXPDELECIDLEMODE(1'b0),.TXPHALIGN(1'b0),.TXPHALIGNDONE(),.TXPHALIGNEN(1'b0),.TXPHDLYPD(1'b0),.TXPHDLYRESET(1'b0),.TXPHDLYTSTCLK(1'b0),.TXPHINIT(1'b0),.TXPHINITDONE(),.TXPHOVRDEN(1'b0),.TXPMARESET(1'b0),.TXPOLARITY(1'b0),.TXPOSTCURSOR(5'b00000),.TXPOSTCURSORINV(1'b0),.TXPRBSFORCEERR(1'b0),.TXPRBSSEL(3'b0),.TXPRECURSOR(5'b0),.TXPRECURSORINV(1'b0),.TXQPIBIASEN(1'b0),.TXQPISENN(),.TXQPISENP(),.TXQPISTRONGPDOWN(1'b0),.TXQPIWEAKPUP(1'b0),.TXRATE(3'b0),.TXRATEDONE(),.TXSEQUENCE(7'b0),.TXSTARTSEQ(1'b0),.TXSWING(1'b0),.TXSYSCLKSEL(2'b00)
// interface
,.CPLLFBCLKLOST,.CPLLLOCK,.CPLLPD,.CPLLREFCLKLOST,.CPLLREFCLKSEL,.CPLLRESET,.GTNORTHREFCLK0,.GTNORTHREFCLK1,.GTREFCLK0,.GTREFCLK1,.GTSOUTHREFCLK0,.GTSOUTHREFCLK1,.QPLLCLK,.QPLLREFCLK,.RXUSERRDY,.RXUSRCLK,.RXUSRCLK2,.GTXRXP,.GTXRXN,.RXBYTEISALIGNED,.RXBYTEREALIGN,.RXCOMMADET,.RXOUTCLK,.GTRXRESET,.RXPMARESET,.RXRESETDONE,.GTTXRESET,.TXUSERRDY,.TXUSRCLK,.TXUSRCLK2,.GTXTXN,.GTXTXP,.TXOUTCLK,.TXCHARISK,.TXRESETDONE,.CPLLLOCKDETCLK
,.CPLLLOCKEN(1'b1)
,.RXDATA({rxdata_float_i,RXDATA})
,.RXCHARISCOMMA({rxchariscomma_float_i,RXCHARISCOMMA})
,.RXCHARISK({rxcharisk_float_i,RXCHARISK})
,.TXDATA({32'b0,TXDATA})
);

BUFG txoutclk_bufg(.I(TXOUTCLK),.O(TXUSRCLK));
assign TXUSRCLK2=TXUSRCLK;
BUFG rxoutclk_bufg(.I(RXOUTCLK),.O(RXUSRCLK));
assign RXUSRCLK2=RXUSRCLK;
endmodule



GTXE2_CHANNEL #(.SIM_RECEIVER_DETECT_PASS("TRUE"),.SIM_TX_EIDLE_DRIVE_LEVEL("X"),.SIM_RESET_SPEEDUP(GT_SIM_GTRESET_SPEEDUP),.SIM_CPLLREFCLK_SEL(SIM_CPLLREFCLK_SEL),.SIM_VERSION("4.0"),.ALIGN_COMMA_DOUBLE("FALSE"),.ALIGN_COMMA_ENABLE(10'b0001111111),.ALIGN_COMMA_WORD(2),.ALIGN_MCOMMA_DET("TRUE"),.ALIGN_MCOMMA_VALUE(10'b1010000011),.ALIGN_PCOMMA_DET("TRUE"),.ALIGN_PCOMMA_VALUE(10'b0101111100),.SHOW_REALIGN_COMMA("TRUE"),.RXSLIDE_AUTO_WAIT(7),.RXSLIDE_MODE("PCS"),.RX_SIG_VALID_DLY(10),.RX_DISPERR_SEQ_MATCH("TRUE"),.DEC_MCOMMA_DETECT("TRUE"),.DEC_PCOMMA_DETECT("TRUE"),.DEC_VALID_COMMA_ONLY("TRUE"),.CBCC_DATA_SOURCE_SEL("DECODED"),.CLK_COR_SEQ_2_USE("FALSE"),.CLK_COR_KEEP_IDLE("FALSE"),.CLK_COR_MAX_LAT(10),.CLK_COR_MIN_LAT(8),.CLK_COR_PRECEDENCE("TRUE"),.CLK_COR_REPEAT_WAIT(0),.CLK_COR_SEQ_LEN(1),.CLK_COR_SEQ_1_ENABLE(4'b1111),.CLK_COR_SEQ_1_1(10'b0100000000),.CLK_COR_SEQ_1_2(10'b0000000000),.CLK_COR_SEQ_1_3(10'b0000000000),.CLK_COR_SEQ_1_4(10'b0000000000),.CLK_CORRECT_USE("FALSE"),.CLK_COR_SEQ_2_ENABLE(4'b1111),.CLK_COR_SEQ_2_1(10'b0100000000),.CLK_COR_SEQ_2_2(10'b0000000000),.CLK_COR_SEQ_2_3(10'b0000000000),.CLK_COR_SEQ_2_4(10'b0000000000),.CHAN_BOND_KEEP_ALIGN("FALSE"),.CHAN_BOND_MAX_SKEW(1),.CHAN_BOND_SEQ_LEN(1),.CHAN_BOND_SEQ_1_1(10'b0000000000),.CHAN_BOND_SEQ_1_2(10'b0000000000),.CHAN_BOND_SEQ_1_3(10'b0000000000),.CHAN_BOND_SEQ_1_4(10'b0000000000),.CHAN_BOND_SEQ_1_ENABLE(4'b1111),.CHAN_BOND_SEQ_2_1(10'b0000000000),.CHAN_BOND_SEQ_2_2(10'b0000000000),.CHAN_BOND_SEQ_2_3(10'b0000000000),.CHAN_BOND_SEQ_2_4(10'b0000000000),.CHAN_BOND_SEQ_2_ENABLE(4'b1111),.CHAN_BOND_SEQ_2_USE("FALSE"),.FTS_DESKEW_SEQ_ENABLE(4'b1111),.FTS_LANE_DESKEW_CFG(4'b1111),.FTS_LANE_DESKEW_EN("FALSE"),.ES_CONTROL(6'b000000),.ES_ERRDET_EN("FALSE"),.ES_EYE_SCAN_EN("TRUE"),.ES_HORZ_OFFSET(12'h000),.ES_PMA_CFG(10'b0000000000),.ES_PRESCALE(5'b00000),.ES_QUALIFIER(80'h00000000000000000000),.ES_QUAL_MASK(80'h00000000000000000000),.ES_SDATA_MASK(80'h00000000000000000000),.ES_VERT_OFFSET(9'b000000000),.RX_DATA_WIDTH(20),.OUTREFCLK_SEL_INV(2'b11),.PMA_RSV(PMA_RSV_IN),.PMA_RSV2(16'h2050),.PMA_RSV3(2'b00),.PMA_RSV4(32'h00000000),.RX_BIAS_CFG(12'b000000000100),.DMONITOR_CFG(24'h000A00),.RX_CM_SEL(2'b00),.RX_CM_TRIM(3'b010),.RX_DEBUG_CFG(12'b000000000000),.RX_OS_CFG(13'b0000010000000),.TERM_RCAL_CFG(5'b10000),.TERM_RCAL_OVRD(1'b0),.TST_RSV(32'h00000000),.RX_CLK25_DIV(5),.TX_CLK25_DIV(5),.UCODEER_CLR(1'b0),.PCS_PCIE_EN("FALSE"),.PCS_RSVD_ATTR(PCS_RSVD_ATTR_IN),.RXBUF_ADDR_MODE("FAST"),.RXBUF_EIDLE_HI_CNT(4'b1000),.RXBUF_EIDLE_LO_CNT(4'b0000),.RXBUF_EN("FALSE"),.RX_BUFFER_CFG(6'b000000),.RXBUF_RESET_ON_CB_CHANGE("TRUE"),.RXBUF_RESET_ON_COMMAALIGN("FALSE"),.RXBUF_RESET_ON_EIDLE("FALSE"),.RXBUF_RESET_ON_RATE_CHANGE("TRUE"),.RXBUFRESET_TIME(5'b00001),.RXBUF_THRESH_OVFLW(61),.RXBUF_THRESH_OVRD("FALSE"),.RXBUF_THRESH_UNDFLW(4),.RXDLY_CFG(16'h001F),.RXDLY_LCFG(9'h030),.RXDLY_TAP_CFG(16'h0000),.RXPH_CFG(24'h000000),.RXPHDLY_CFG(24'h084020),.RXPH_MONITOR_SEL(5'b00000),.RX_XCLK_SEL("RXUSR"),.RX_DDI_SEL(6'b000000),.RX_DEFER_RESET_BUF_EN("TRUE"),.RXCDR_CFG(72'h03000023ff10100020),.RXCDR_FR_RESET_ON_EIDLE(1'b0),.RXCDR_HOLD_DURING_EIDLE(1'b0),.RXCDR_PH_RESET_ON_EIDLE(1'b0),.RXCDR_LOCK_CFG(6'b010101),.RXCDRFREQRESET_TIME(5'b00001),.RXCDRPHRESET_TIME(5'b00001),.RXISCANRESET_TIME(5'b00001),.RXPCSRESET_TIME(5'b00001),.RXPMARESET_TIME(5'b00011),.RXOOB_CFG(7'b0000110),.RXGEARBOX_EN("FALSE"),.GEARBOX_MODE(3'b000),.RXPRBS_ERR_LOOPBACK(1'b0),.PD_TRANS_TIME_FROM_P2(12'h03c),.PD_TRANS_TIME_NONE_P2(8'h3c),.PD_TRANS_TIME_TO_P2(8'h64),.SAS_MAX_COM(64),.SAS_MIN_COM(36),.SATA_BURST_SEQ_LEN(4'b0101),.SATA_BURST_VAL(3'b100),.SATA_EIDLE_VAL(3'b100),.SATA_MAX_BURST(8),.SATA_MAX_INIT(21),.SATA_MAX_WAKE(7),.SATA_MIN_BURST(4),.SATA_MIN_INIT(12),.SATA_MIN_WAKE(4),.TRANS_TIME_RATE(8'h0E),.TXBUF_EN("FALSE"),.TXBUF_RESET_ON_RATE_CHANGE("TRUE"),.TXDLY_CFG(16'h001F),.TXDLY_LCFG(9'h030),.TXDLY_TAP_CFG(16'h0000),.TXPH_CFG(16'h0780),.TXPHDLY_CFG(24'h084020),.TXPH_MONITOR_SEL(5'b00000),.TX_XCLK_SEL("TXUSR"),.TX_DATA_WIDTH(20),.TX_DEEMPH0(5'b00000),.TX_DEEMPH1(5'b00000),.TX_EIDLE_ASSERT_DELAY(3'b110),.TX_EIDLE_DEASSERT_DELAY(3'b100),.TX_LOOPBACK_DRIVE_HIZ("FALSE"),.TX_MAINCURSOR_SEL(1'b0),.TX_DRIVE_MODE("DIRECT"),.TX_MARGIN_FULL_0(7'b1001110),.TX_MARGIN_FULL_1(7'b1001001),.TX_MARGIN_FULL_2(7'b1000101),.TX_MARGIN_FULL_3(7'b1000010),.TX_MARGIN_FULL_4(7'b1000000),.TX_MARGIN_LOW_0(7'b1000110),.TX_MARGIN_LOW_1(7'b1000100),.TX_MARGIN_LOW_2(7'b1000010),.TX_MARGIN_LOW_3(7'b1000000),.TX_MARGIN_LOW_4(7'b1000000),.TXGEARBOX_EN("FALSE"),.TXPCSRESET_TIME(5'b00001),.TXPMARESET_TIME(5'b00001),.TX_RXDETECT_CFG(14'h1832),.TX_RXDETECT_REF(3'b100),.CPLL_CFG(24'hBC07DC),.CPLL_FBDIV(4),.CPLL_FBDIV_45(5),.CPLL_INIT_CFG(24'h00001E),.CPLL_LOCK_CFG(16'h01E8),.CPLL_REFCLK_DIV(1),.RXOUT_DIV(4),.TXOUT_DIV(4),.SATA_CPLL_CFG("VCO_3000MHZ"),.RXDFELPMRESET_TIME(7'b0001111),.RXLPM_HF_CFG(14'b00000011110000),.RXLPM_LF_CFG(14'b00000011110000),.RX_DFE_GAIN_CFG(23'h020FEA),.RX_DFE_H2_CFG(12'b000000000000),.RX_DFE_H3_CFG(12'b000001000000),.RX_DFE_H4_CFG(11'b00011110000),.RX_DFE_H5_CFG(11'b00011100000),.RX_DFE_KL_CFG(13'b0000011111110),.RX_DFE_LPM_CFG(16'h0904),.RX_DFE_LPM_HOLD_DURING_EIDLE(1'b0),.RX_DFE_UT_CFG(17'b10001111000000000),.RX_DFE_VP_CFG(17'b00011111100000011),.RX_CLKMUX_PD(1'b1),.TX_CLKMUX_PD(1'b1),.RX_INT_DATAWIDTH(0),.TX_INT_DATAWIDTH(0),.TX_QPI_STATUS_EN(1'b0),.RX_DFE_KL_CFG2(RX_DFE_KL_CFG2_IN),.RX_DFE_XYD_CFG(13'b0000000000000),.TX_PREDRIVER_MODE(1'b0)
)gtxe2_i(
.CPLLLOCKEN(1'b1),.CLKRSVD(4'h0),.GTGREFCLK(1'b0),.TX8B10BEN(1'b1),.LOOPBACK(3'h0),.RXRATE(3'h0),.SETERRSTATUS(1'b0),.EYESCANMODE(1'b0),.RXCDRFREQRESET(1'b0),.RXCDRHOLD(1'b0),.RXCDROVRDEN(1'b0),.RXCDRRESET(1'b0),.RXCDRRESETRSV(1'b0),.RX8B10BEN(1'b1),.RXPRBSSEL(3'h0),.RXPRBSCNTRESET(1'b0),.RXDFEXYDEN(1'b1),.RXDFEXYDHOLD(1'b0),.RXDFEXYDOVRDEN(1'b0),.RXBUFRESET(1'b0),.RXDDIEN(1'b1),.RXDLYOVRDEN(1'b0),.RXPHOVRDEN(1'b0),.RXCOMMADETEN(1'b1),.RXMCOMMAALIGNEN(1'b1),.RXCHBONDEN(1'b0),.RXCHBONDLEVEL(3'h0),.RXCHBONDMASTER(1'b0),.RXCHBONDSLAVE(1'b0),.RXLPMHFOVRDEN(1'b0),.RXDFEAGCOVRDEN(1'b0),.RXDFECM1EN(1'b0),.RXDFELFOVRDEN(1'b0),.RXDFETAP2HOLD(1'b0),.RXDFETAP2OVRDEN(1'b0),.RXDFETAP3HOLD(1'b0),.RXDFETAP3OVRDEN(1'b0),.RXDFETAP4HOLD(1'b0),.RXDFETAP4OVRDEN(1'b0),.RXDFETAP5HOLD(1'b0),.RXDFETAP5OVRDEN(1'b0),.RXDFEUTHOLD(1'b0),.RXDFEUTOVRDEN(1'b0),.RXDFEVPHOLD(1'b0),.RXDFEVPOVRDEN(1'b0),.RXDFEVSEN(1'b0),.RXLPMLFKLOVRDEN(1'b0),.RXOSHOLD(1'b0),.RXOSOVRDEN(1'b0),.RXGEARBOXSLIP(1'b0),.RXOOBRESET(1'b0),.RXPCSRESET(1'b0),.RXLPMEN(1'b1),.RXPOLARITY(1'b0),.RXQPIEN(1'b0),.TXPHDLYTSTCLK(1'b0),.TXPOSTCURSORINV(1'b0),.TXPRECURSOR(5'h0),.TXPRECURSORINV(1'b0),.TXQPIBIASEN(1'b0),.TXQPISTRONGPDOWN(1'b0),.TXQPIWEAKPUP(1'b0),.CFGRESET(1'b0),.GTRESETSEL(1'b0),.RESETOVRD(1'b0),.TXCHARDISPMODE(8'h0),.TXCHARDISPVAL(8'h0),.TXELECIDLE(1'b0),.TXMARGIN(3'h0),.TXRATE(3'h0),.TXSWING(1'b0),.TXPRBSFORCEERR(1'b0),.TXDLYHOLD(1'b0),.TXDLYOVRDEN(1'b0),.TXDLYUPDOWN(1'b0),.TXPHOVRDEN(1'b0),.TXDEEMPH(1'b0),.TXDIFFPD(1'b0),.TXINHIBIT(1'b0),.TXPISOPD(1'b0),.TXHEADER(3'h0),.TXSEQUENCE(7'h0),.TXSTARTSEQ(1'b0),.TXPCSRESET(1'b0),.TXPMARESET(1'b0),.TXCOMINIT(1'b0),.TXCOMSAS(1'b0),.TXCOMWAKE(1'b0),.TXPDELECIDLEMODE(1'b0),.TXPOLARITY(1'b0),.TXDETECTRX(1'b0),.TX8B10BBYPASS(8'h0),.TXPRBSSEL(3'h0)
,.CPLLPD(1'b0),.GTRSVD(16'b0000000000000000),.PCSRSVDIN(16'b0000000000000000),.PCSRSVDIN2(5'b00000),.PMARSVDIN(5'b00000),.PMARSVDIN2(5'b00000),.TSTIN(20'b11111111111111111111),.DRPADDR(9'h0),.DRPCLK(0),.DRPDI(0),.DRPEN(0),.DRPWE(0),.RXSYSCLKSEL(2'b00),.TXSYSCLKSEL(2'b00),.RXPD(2'b00),.TXPD(2'b00),.EYESCANRESET(0),.EYESCANTRIGGER(0),.RXDLYBYPASS(1'b0),.RXPHDLYPD(1'b0),.RXLPMHFHOLD(0),.RXLPMLFHOLD(0),.RXDFEAGCHOLD(0),.RXDFELFHOLD(0),.RXDFELPMRESET(0),.RXMONITORSEL(0),.RXOUTCLKSEL(3'b010),.RXELECIDLEMODE(2'b11),.RXSLIDE(0),.RXCHBONDI(5'b00000),.TXPOSTCURSOR(5'b00000),.TXDLYBYPASS(1'b1),.TXPHDLYPD(1'b1),.TXBUFDIFFCTRL(3'b100),.TXDIFFCTRL(4'b1000),.TXMAINCURSOR(7'b0000000),.TXOUTCLKSEL(3'b010)
,.TSTOUT(),.DRPDO(),.DRPRDY(),.GTREFCLKMONITOR(),.DMONITOROUT(),.PHYSTATUS(),.RXVALID(),.EYESCANDATAERROR(),.RXCLKCORCNT(),.RXPRBSERR(),.RXBUFSTATUS(),.RXSTATUS(),.RXCOMMADET(),.RXCHANBONDSEQ(),.RXCHBONDO(),.RXCHANISALIGNED(),.RXCHANREALIGN(),.RXMONITOROUT(),.RXRATEDONE(),.RXOUTCLKPCS(),.RXDATAVALID(),.RXHEADER(),.RXHEADERVALID(),.RXSTARTOFSEQ(),.RXCOMSASDET(),.RXCOMWAKEDET(),.RXCOMINITDET(),.RXQPISENN(),.RXQPISENP(),.PCSRSVDOUT(),.TXBUFSTATUS(),.TXRATEDONE(),.TXGEARBOXREADY(),.TXCOMFINISH(),.TXQPISENN(),.TXQPISENP()
,.CPLLFBCLKLOST,.CPLLLOCK,.CPLLLOCKDETCLK,.CPLLREFCLKLOST,.CPLLREFCLKSEL,.CPLLRESET,.GTNORTHREFCLK0,.GTNORTHREFCLK1,.GTREFCLK0,.GTREFCLK1,.GTSOUTHREFCLK0,.GTSOUTHREFCLK1,.QPLLCLK,.QPLLREFCLK,.RXUSERRDY,.RXCDRLOCK,.RXUSRCLK,.RXUSRCLK2,.GTXRXP,.GTXRXN,.RXDLYEN,.RXDLYSRESET,.RXDLYSRESETDONE,.RXPHALIGN,.RXPHALIGNDONE,.RXPHALIGNEN,.RXPHDLYRESET,.RXPHMONITOR,.RXPHSLIPMONITOR,.RXBYTEISALIGNED,.RXBYTEREALIGN,.RXPCOMMAALIGNEN,.RXOUTCLK,.RXOUTCLKFABRIC,.GTRXRESET,.RXPMARESET,.RXELECIDLE,.RXRESETDONE,.GTTXRESET,.TXUSERRDY,.TXUSRCLK,.TXUSRCLK2,.TXDLYEN,.TXDLYSRESET,.TXDLYSRESETDONE,.TXPHALIGN,.TXPHALIGNDONE,.TXPHALIGNEN,.TXPHDLYRESET,.TXPHINIT,.TXPHINITDONE,.GTXTXN,.GTXTXP,.TXOUTCLK,.TXOUTCLKFABRIC,.TXOUTCLKPCS,.TXRESETDONE
,.RXDATA(rxdata64)
,.RXDISPERR(rxdisperr8)
,.RXNOTINTABLE(rxnotintable8)
,.RXCHARISCOMMA(rxchariscomma8)
,.RXCHARISK(rxcharisk8)
,.TXDATA(txdata64)
,.TXCHARISK(txcharisk8)
);

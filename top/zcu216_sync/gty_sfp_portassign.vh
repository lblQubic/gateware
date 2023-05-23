wire [0:0] gtyrxn_int;
assign gtyrxn_int[0:0] = ch0_gtyrxn_in;

wire [0:0] gtyrxp_int;
assign gtyrxp_int[0:0] = ch0_gtyrxp_in;

wire [0:0] gtytxn_int;
assign ch0_gtytxn_out = gtytxn_int[0:0];

wire [0:0] gtytxp_int;
assign ch0_gtytxp_out = gtytxp_int[0:0];

wire [0:0] gtwiz_userclk_tx_reset_int;
wire [0:0] hb0_gtwiz_userclk_tx_reset_int;
assign gtwiz_userclk_tx_reset_int[0:0] = hb0_gtwiz_userclk_tx_reset_int;

wire [0:0] gtwiz_userclk_tx_srcclk_int;
wire [0:0] hb0_gtwiz_userclk_tx_srcclk_int;
assign hb0_gtwiz_userclk_tx_srcclk_int = gtwiz_userclk_tx_srcclk_int[0:0];

wire [0:0] gtwiz_userclk_tx_usrclk_int;
wire [0:0] hb0_gtwiz_userclk_tx_usrclk_int;
assign hb0_gtwiz_userclk_tx_usrclk_int = gtwiz_userclk_tx_usrclk_int[0:0];

wire [0:0] gtwiz_userclk_tx_usrclk2_int;
wire [0:0] hb0_gtwiz_userclk_tx_usrclk2_int;
assign hb0_gtwiz_userclk_tx_usrclk2_int = gtwiz_userclk_tx_usrclk2_int[0:0];

wire [0:0] gtwiz_userclk_tx_active_int;
wire [0:0] hb0_gtwiz_userclk_tx_active_int;
assign hb0_gtwiz_userclk_tx_active_int = gtwiz_userclk_tx_active_int[0:0];

wire [0:0] gtwiz_userclk_rx_reset_int;
wire [0:0] hb0_gtwiz_userclk_rx_reset_int;
assign gtwiz_userclk_rx_reset_int[0:0] = hb0_gtwiz_userclk_rx_reset_int;

wire [0:0] gtwiz_userclk_rx_srcclk_int;
wire [0:0] hb0_gtwiz_userclk_rx_srcclk_int;
assign hb0_gtwiz_userclk_rx_srcclk_int = gtwiz_userclk_rx_srcclk_int[0:0];

wire [0:0] gtwiz_userclk_rx_usrclk_int;
wire [0:0] hb0_gtwiz_userclk_rx_usrclk_int;
assign hb0_gtwiz_userclk_rx_usrclk_int = gtwiz_userclk_rx_usrclk_int[0:0];

wire [0:0] gtwiz_userclk_rx_usrclk2_int;
wire [0:0] hb0_gtwiz_userclk_rx_usrclk2_int;
assign hb0_gtwiz_userclk_rx_usrclk2_int = gtwiz_userclk_rx_usrclk2_int[0:0];

wire [0:0] gtwiz_userclk_rx_active_int;
wire [0:0] hb0_gtwiz_userclk_rx_active_int;
assign hb0_gtwiz_userclk_rx_active_int = gtwiz_userclk_rx_active_int[0:0];

wire [0:0] gtwiz_reset_clk_freerun_int;
wire [0:0] hb0_gtwiz_reset_clk_freerun_int = 1'b0;
assign gtwiz_reset_clk_freerun_int[0:0] = hb0_gtwiz_reset_clk_freerun_int;

wire [0:0] gtwiz_reset_all_int;
wire [0:0] hb0_gtwiz_reset_all_int = 1'b0;
assign gtwiz_reset_all_int[0:0] = hb0_gtwiz_reset_all_int;

wire [0:0] gtwiz_reset_tx_pll_and_datapath_int;
wire [0:0] hb0_gtwiz_reset_tx_pll_and_datapath_int;
assign gtwiz_reset_tx_pll_and_datapath_int[0:0] = hb0_gtwiz_reset_tx_pll_and_datapath_int;

wire [0:0] gtwiz_reset_tx_datapath_int;
wire [0:0] hb0_gtwiz_reset_tx_datapath_int;
assign gtwiz_reset_tx_datapath_int[0:0] = hb0_gtwiz_reset_tx_datapath_int;

wire [0:0] gtwiz_reset_rx_pll_and_datapath_int;
wire [0:0] hb0_gtwiz_reset_rx_pll_and_datapath_int = 1'b0;
assign gtwiz_reset_rx_pll_and_datapath_int[0:0] = hb0_gtwiz_reset_rx_pll_and_datapath_int;

wire [0:0] gtwiz_reset_rx_datapath_int;
wire [0:0] hb0_gtwiz_reset_rx_datapath_int = 1'b0;
assign gtwiz_reset_rx_datapath_int[0:0] = hb0_gtwiz_reset_rx_datapath_int;

wire [0:0] gtwiz_reset_rx_cdr_stable_int;
wire [0:0] hb0_gtwiz_reset_rx_cdr_stable_int;
assign hb0_gtwiz_reset_rx_cdr_stable_int = gtwiz_reset_rx_cdr_stable_int[0:0];

wire [0:0] gtwiz_reset_tx_done_int;
wire [0:0] hb0_gtwiz_reset_tx_done_int;
assign hb0_gtwiz_reset_tx_done_int = gtwiz_reset_tx_done_int[0:0];

wire [0:0] gtwiz_reset_rx_done_int;
wire [0:0] hb0_gtwiz_reset_rx_done_int;
assign hb0_gtwiz_reset_rx_done_int = gtwiz_reset_rx_done_int[0:0];

wire [31:0] gtwiz_userdata_tx_int;
wire [31:0] hb0_gtwiz_userdata_tx_int;
assign gtwiz_userdata_tx_int[31:0] = hb0_gtwiz_userdata_tx_int;

wire [31:0] gtwiz_userdata_rx_int;
wire [31:0] hb0_gtwiz_userdata_rx_int;
assign hb0_gtwiz_userdata_rx_int = gtwiz_userdata_rx_int[31:0];

wire [0:0] gtrefclk00_int;
wire [0:0] cm0_gtrefclk00_int;
assign gtrefclk00_int[0:0] = cm0_gtrefclk00_int;

wire [0:0] qpll0outclk_int;
wire [0:0] cm0_qpll0outclk_int;
assign cm0_qpll0outclk_int = qpll0outclk_int[0:0];

wire [0:0] qpll0outrefclk_int;
wire [0:0] cm0_qpll0outrefclk_int;
assign cm0_qpll0outrefclk_int = qpll0outrefclk_int[0:0];

wire [0:0] rx8b10ben_int;
wire [0:0] ch0_rx8b10ben_int = 1'b1;
assign rx8b10ben_int[0:0] = ch0_rx8b10ben_int;

wire [0:0] rxcommadeten_int;
wire [0:0] ch0_rxcommadeten_int = 1'b1;
assign rxcommadeten_int[0:0] = ch0_rxcommadeten_int;

wire [0:0] rxmcommaalignen_int;
wire [0:0] ch0_rxmcommaalignen_int = 1'b1;
assign rxmcommaalignen_int[0:0] = ch0_rxmcommaalignen_int;

wire [0:0] rxpcommaalignen_int;
wire [0:0] ch0_rxpcommaalignen_int = 1'b1;
assign rxpcommaalignen_int[0:0] = ch0_rxpcommaalignen_int;

wire [0:0] tx8b10ben_int;
wire [0:0] ch0_tx8b10ben_int = 1'b1;
assign tx8b10ben_int[0:0] = ch0_tx8b10ben_int;

wire [15:0] txctrl0_int;
wire [15:0] ch0_txctrl0_int;
assign txctrl0_int[15:0] = ch0_txctrl0_int;

wire [15:0] txctrl1_int;
wire [15:0] ch0_txctrl1_int;
assign txctrl1_int[15:0] = ch0_txctrl1_int;

wire [7:0] txctrl2_int;
wire [7:0] ch0_txctrl2_int;
assign txctrl2_int[7:0] = ch0_txctrl2_int;

wire [0:0] gtpowergood_int;
wire [0:0] ch0_gtpowergood_int;
assign ch0_gtpowergood_int = gtpowergood_int[0:0];

wire [0:0] rxbyteisaligned_int;
wire [0:0] ch0_rxbyteisaligned_int;
assign ch0_rxbyteisaligned_int = rxbyteisaligned_int[0:0];

wire [0:0] rxbyterealign_int;
wire [0:0] ch0_rxbyterealign_int;
assign ch0_rxbyterealign_int = rxbyterealign_int[0:0];

wire [0:0] rxcommadet_int;
wire [0:0] ch0_rxcommadet_int;
assign ch0_rxcommadet_int = rxcommadet_int[0:0];

wire [15:0] rxctrl0_int;
wire [15:0] ch0_rxctrl0_int;
assign ch0_rxctrl0_int = rxctrl0_int[15:0];

wire [15:0] rxctrl1_int;
wire [15:0] ch0_rxctrl1_int;
assign ch0_rxctrl1_int = rxctrl1_int[15:0];

wire [7:0] rxctrl2_int;
wire [7:0] ch0_rxctrl2_int;
assign ch0_rxctrl2_int = rxctrl2_int[7:0];

wire [7:0] rxctrl3_int;
wire [7:0] ch0_rxctrl3_int;
assign ch0_rxctrl3_int = rxctrl3_int[7:0];

wire [0:0] rxpmaresetdone_int;
wire [0:0] ch0_rxpmaresetdone_int;
assign ch0_rxpmaresetdone_int = rxpmaresetdone_int[0:0];

wire [0:0] rxrecclkout_int;
wire [0:0] ch0_rxrecclkout_int;
assign ch0_rxrecclkout_int = rxrecclkout_int[0:0];

wire [0:0] txpmaresetdone_int;
wire [0:0] ch0_txpmaresetdone_int;
assign ch0_txpmaresetdone_int = txpmaresetdone_int[0:0];

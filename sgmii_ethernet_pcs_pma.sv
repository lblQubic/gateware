module sgmii_ethernet_pcs_pma
#(parameter SIM=1)
(input gtrefclk
,output txp
,output txn
,input rxp
,input rxn
,gmii.phy gmii
,input independent_clock_bufg
,input reset
,output resetdone
,output[15:0] status_vector
,output gmii_isolate
);

reg resetsync=0;
wire cplllock;
wire mmcm_locked;
wire mmcm_reset;
wire pma_reset;
wire txoutclk;
wire rxoutclk;
wire rxuserclk;
wire rxuserclk2;
wire userclk;
wire userclk2;
wire gtrefclk_bufg;
wire sgmii_clk_en;
wire sgmii_clk_f;
wire sgmii_clk_r;
wire mmcmclkfb;
wire clk62_5;
wire clk125;
wire mdio_i;
wire mdio_o;
wire mdio_t;
wire [4:0] phyaddr=5'b00111;
wire configuration_valid=1'b1;
wire [4:0] configuration_vector=5'b00000;
wire speed_is_100=1'b0;
wire speed_is_10_100=1'b0;
wire signal_detect=1'b1;

BUFG gtrefclk_bufg_inst(.I(gtrefclk),.O(gtrefclk_bufg));
if (SIM)
gig_ethernet_pcs_pma_0
#(.EXAMPLE_SIMULATION(1))
gig_ethernet_pcs_pma_0(
.configuration_vector,.gtrefclk,.gtrefclk_bufg,.rxn,.rxp,.txn,.txp,.resetdone,.cplllock,.txoutclk,.rxoutclk,.userclk,.userclk2,.rxuserclk,.rxuserclk2,.independent_clock_bufg,.pma_reset,.mmcm_locked,.mmcm_reset,.speed_is_100,.speed_is_10_100,.status_vector,.signal_detect,.sgmii_clk_f,.sgmii_clk_r,.sgmii_clk_en,.gmii_isolate,.reset
,.gmii_rx_dv(gmii.rx_dv),.gmii_rx_er(gmii.rx_er),.gmii_rxd(gmii.rxd),.gmii_tx_en(gmii.tx_en),.gmii_tx_er(gmii.tx_er),.gmii_txd(gmii.txd)
,.gt0_qplloutclk_in(1'b0)
,.gt0_qplloutrefclk_in(1'b0)
);
else
gig_ethernet_pcs_pma_0
gig_ethernet_pcs_pma_0(
.configuration_vector,.gtrefclk,.gtrefclk_bufg,.rxn,.rxp,.txn,.txp,.resetdone,.cplllock,.txoutclk,.rxoutclk,.userclk,.userclk2,.rxuserclk,.rxuserclk2,.independent_clock_bufg,.pma_reset,.mmcm_locked,.mmcm_reset,.speed_is_100,.speed_is_10_100,.status_vector,.signal_detect,.sgmii_clk_f,.sgmii_clk_r,.sgmii_clk_en,.gmii_isolate,.reset
,.gmii_rx_dv(gmii.rx_dv),.gmii_rx_er(gmii.rx_er),.gmii_rxd(gmii.rxd),.gmii_tx_en(gmii.tx_en),.gmii_tx_er(gmii.tx_er),.gmii_txd(gmii.txd)
,.gt0_qplloutclk_in(1'b0)
,.gt0_qplloutrefclk_in(1'b0)
);

BUFG bufgtxoutclk(.I(txoutclk),.O(mmcm_txoutclk));
MMCME2_BASE #(.BANDWIDTH("OPTIMIZED"),.CLKIN1_PERIOD(16.0),.CLKFBOUT_MULT_F(16),.DIVCLK_DIVIDE(1),.CLKFBOUT_PHASE(0.0),.CLKOUT0_DIVIDE_F(8),.CLKOUT0_DUTY_CYCLE(0.5),.CLKOUT0_PHASE(0.0),.CLKOUT1_DIVIDE(16),.CLKOUT1_DUTY_CYCLE(0.5),.CLKOUT1_PHASE(0.0),.REF_JITTER1(0.0),.STARTUP_WAIT("FALSE")
) mmcme2_base_sysclk (.CLKIN1(mmcm_txoutclk)
,.CLKOUT0(mmcm_clk125)
,.CLKOUT1(mmcm_clk62_5)
,.LOCKED(mmcm_locked)
,.CLKFBOUT(mmcmclkfb)
,.CLKFBIN(mmcmclkfb)
,.PWRDWN(1'b0)
,.RST(mmcm_reset));
BUFG bufgclk125(.I(mmcm_clk125),.O(clk125));
BUFG bufgclk62_5(.I(mmcm_clk62_5),.O(clk62_5));
wire rxoutclk_buf;
BUFG bufgrxoutclk(.I(rxoutclk),.O(rxoutclk_buf));
assign rxuserclk2 = rxoutclk_buf;
assign rxuserclk  = rxoutclk_buf;
assign userclk=clk62_5;
assign userclk2=clk125;
reg   [3:0]  pma_reset_pipe;
always@(posedge independent_clock_bufg or posedge reset) begin
	if (reset == 1'b1) begin
		pma_reset_pipe <= 4'b1111;
	end
	else begin
		pma_reset_pipe <= {pma_reset_pipe[2:0], reset};
	end
end
assign pma_reset = pma_reset_pipe[3] ;
//BUFG gmiiclk(.I(userclk2),.O(gmii.rx_clk));
//ODDR gmiiclk(.Q(gmii.rx_clk),.CE(1'b1),.R(1'b0),.S(1'b0),.C(userclk2),.D1(sgmii_clk_r),.D2(sgmii_clk_f));
assign gmii.tx_clk=clk125;
assign gmii.rx_clk=clk125;
endmodule

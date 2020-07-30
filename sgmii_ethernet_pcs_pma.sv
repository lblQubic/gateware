module sgmii_ethernet_pcs_pma 
#(parameter EXAMPLE_SIMULATION=1,SIM=0)
(input sgmiiclk
,hw hw
,gmii.phy gmii
,input independent_clock_bufg
,input reset
,input readyforreset
,output resetdone
,output[15:0] status_vector
);




gig_ethernet_pcs_pma_0 #(.EXAMPLE_SIMULATION(1))
gig_ethernet_pcs_pma_1(
.configuration_vector,.signal_detect,.speed_is_100,.speed_is_10_100
,.gtrefclk_n(~sgmiiclk),.gtrefclk_p(sgmiiclk),.independent_clock_bufg(sysclk)
,.gmii_isolate(gmii.isolate),.gmii_rx_dv(gmii.rx_dv),.gmii_rx_er(gmii.rx_er),.gmii_rxd(gmii.rxd),.gmii_tx_en(gmii.tx_en),.gmii_tx_er(gmii.tx_er),.gmii_txd(gmii.txd),.sgmii_clk_f(sgmii_clk_f1),.sgmii_clk_r(sgmii_clk_r1)
,.rxn(rxn),.rxp(rxp),.txn(txn),.txp(txp)
,.userclk2_out(userclk2_1)
,.userclk_out(gmii.tx_clk_62_5)
,.gt0_qplloutclk_out(),.gt0_qplloutrefclk_out(),.gtrefclk_bufg_out(),.gtrefclk_out(),.mmcm_locked_out(),.pma_reset_out(),.rxuserclk2_out(),.rxuserclk_out(),.sgmii_clk_en(),.status_vector()
,.reset(reset),.resetdone(resetdone1)
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
wire sgmiiclk_bufg;
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
wire configuration_vector=5'b00000;
wire speed_is_100=1'b0;
wire speed_is_10_100=1'b0;
wire signal_detect=1'b1;
reg reset_r=0;
always @(posedge userclk or posedge reset) begin
	if (reset) begin
		reset_r<=1'b1;
	end
	else begin
		if (reset_r)
			reset_r<=1'b0;
	end
end
reg reset_rd=0;
always @(posedge userclk) begin
	reset_rd<=reset_r;
	resetsync<=reset_r&~reset_rd;
end
BUFG sgmiiclk_bufg_inst(.I(sgmiiclk),.O(sgmiiclk_bufg));
MMCME2_BASE #(.BANDWIDTH("OPTIMIZED"),.CLKIN1_PERIOD(16.0),.CLKFBOUT_MULT_F(16),.DIVCLK_DIVIDE(1),.CLKFBOUT_PHASE(0.0),.CLKOUT0_DIVIDE_F(8),.CLKOUT0_DUTY_CYCLE(0.5),.CLKOUT0_PHASE(0.0),.CLKOUT1_DIVIDE(16),.CLKOUT1_DUTY_CYCLE(0.5),.CLKOUT1_PHASE(0.0),.REF_JITTER1(0.0),.STARTUP_WAIT("FALSE")
) mmcme2_base_sysclk (.CLKIN1(mmcm_txoutclk)

,.CLKOUT0(mmcm_clk125)
,.CLKOUT1(mmcm_clk62_5)
,.LOCKED(mmcm_locked)
,.CLKFBOUT(mmcmclkfb)
,.CLKFBIN(mmcmclkfb)
,.PWRDWN(1'b0)
,.RST(mmcm_reset));
BUFG bufgtxoutclk(.I(txoutclk),.O(mmcm_txoutclk));
BUFG bufgclk125(.I(mmcm_clk125),.O(clk125));
BUFG bufgclk62_5(.I(mmcm_clk62_5),.O(clk62_5));
IOBUF mdiobuf(.O(mdio_i),.I(mdio_o),.T(mdio_t),.IO(hw.vc707.phy_mdio));

wire rxoutclk_buf;
BUFG bufgrxoutclk(.I(rxoutclk),.O(rxoutclk_buf));
assign rxuserclk2 = rxoutclk_buf;
assign rxuserclk  = rxoutclk_buf;

assign userclk=clk62_5;
assign userclk2=clk125;
assign gmii.tx_clk=clk125;
assign gmii.rx_clk=clk125;
assign hw.vc707.phy_reset=1'b0;
assign hw.vc707.phy_int=1'b0;

wire rxn=SIM ? hw.vc707.sgmii_tx_n : hw.vc707.sgmii_rx_n;
wire rxp=SIM ? hw.vc707.sgmii_tx_p : hw.vc707.sgmii_rx_p;
wire txn=SIM ? hw.vc707.sgmii_rx_n : hw.vc707.sgmii_tx_n;
wire txp=SIM ? hw.vc707.sgmii_rx_p : hw.vc707.sgmii_tx_p;
gig_ethernet_pcs_pma_0 #(.EXAMPLE_SIMULATION(EXAMPLE_SIMULATION))
gig_ethernet_pcs_pma_0(.configuration_valid(configuration_valid)
,.configuration_vector(configuration_vector)
,.cplllock(cplllock)
,.gmii_isolate(gmii.isolate)
,.gmii_rx_dv(gmii.rx_dv)
,.gmii_rx_er(gmii.rx_er)
,.gmii_rxd(gmii.rxd)
,.gmii_tx_en(gmii.tx_en)
,.gmii_tx_er(gmii.tx_er)
,.gmii_txd(gmii.txd)
,.gt0_qplloutclk_in(qplloutclk)
,.gt0_qplloutrefclk_in(qplloutrefclk)
,.gtrefclk(sgmiiclk)
,.gtrefclk_bufg(sgmiiclk_bufg)
,.independent_clock_bufg(independent_clock_bufg)
,.mdc(mdc)
,.mdio_i(mdio_i)
,.mdio_o(mdio_o)
,.mdio_t(mdio_t)
,.mmcm_locked(mmcm_locked)
,.mmcm_reset(mmcm_reset)
,.phyaddr(phyaddr)
,.pma_reset(pma_reset)
,.reset(pma_reset)
,.resetdone(resetdone)
,.rxn(rxn)
,.rxp(rxp)
,.txn(txn)
,.txp(txp)
,.rxoutclk(rxoutclk)
,.rxuserclk(rxuserclk)
,.rxuserclk2(rxuserclk2)
,.sgmii_clk_en(gmii.clk_en)
,.sgmii_clk_f(sgmii_clk_f)
,.sgmii_clk_r(sgmii_clk_r)
,.signal_detect(signal_detect)
,.speed_is_100(speed_is_100)
,.speed_is_10_100(speed_is_10_100)
,.status_vector(status_vector)
,.txoutclk(txoutclk)
,.userclk(userclk)
,.userclk2(userclk2)
);

reg   [3:0]  pma_reset_pipe;           // flip-flop pipeline for reset duration stretch
always@(posedge independent_clock_bufg or posedge reset) begin
	if (reset == 1'b1) begin
		pma_reset_pipe <= 4'b1111;
	end
	else begin
		pma_reset_pipe <= {pma_reset_pipe[2:0], reset};
	end
end
assign pma_reset = pma_reset_pipe[3] ;
endmodule

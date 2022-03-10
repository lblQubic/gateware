create_generated_clock -name phy_tx_clk -source [get_pins gbe_sgmii/sgmii_mac_0/gtx_wrap_i/gtwizard_i/inst/gtwizard_init_i/gtwizard_i/gt0_gtwizard_i/gtxe2_i/TXOUTCLK] -multiply_by 2 [get_nets gbe_sgmii/sgmii_mac_0/gtp_usrclk_i1/clkout1_int]
create_generated_clock -name phy_rx_clk -source [get_pins gbe_sgmii/sgmii_mac_0/gtx_wrap_i/gtwizard_i/inst/gtwizard_init_i/gtwizard_i/gt0_gtwizard_i/gtxe2_i/RXOUTCLK] -multiply_by 2 [get_nets gbe_sgmii/sgmii_mac_0/gtp_usrclk_i2/clkout1_int]
create_generated_clock -name clk100 -source [get_ports SYSCLK_P] -divide_by 2 [get_nets clk_inst/clk_out0_int]
###############################################################################
# Implementation stage Constraints
###############################################################################
set_clock_groups -asynchronous -group [get_clocks core_clk_0] -group [get_clocks core_clk_1] -group [get_clocks -include_generated_clocks phy_tx_clk] -group [get_clocks -include_generated_clocks phy_rx_clk] -group [get_clocks clk100]





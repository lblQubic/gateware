###############################################################################
# Timing Constraints
###############################################################################
# clock constraints
# 200 MHz system clock, moved to project top
create_clock -period 5.000 -name sysclk [get_ports SYSCLK_P]
create_clock -period 2.000 -name refclk_p_0 [get_ports refclk_p_0]
create_clock -period 4.000 -name core_clk_0 [get_ports {lmkclk_p_0[0]}]
create_clock -period 2.000 -name refclk_p_1 [get_ports refclk_p_1]
create_clock -period 4.000 -name core_clk_1 [get_ports {lmkclk_p_1[0]}]
# report_datasheet
# Source             |  Setup(ns) | Corner  |   Hold(ns)
# lmkclk_n_0[1]      |  0.870 (f) | SLOW    |  0.330 (f)
# lmkclk_n_1[1]      |  0.701 (f) | SLOW    |  0.225 (f)
set_input_delay -clock core_clk_0 -max 0.300 [get_ports {lmkclk_p_0[1]}]
set_input_delay -clock core_clk_0 -min -0.300 [get_ports {lmkclk_p_0[1]}]
set_input_delay -clock core_clk_1 -max 0.300 [get_ports {lmkclk_p_1[1]}]
set_input_delay -clock core_clk_1 -min -0.300 [get_ports {lmkclk_p_1[1]}]




create_clock -period 10.000 -name clk_100 -waveform {0.000 5.000} [get_ports fpga_g12]
create_clock -name dac2_clk_clk_p -period 1.666 [get_ports dac2_clk_clk_p]
create_clock -name dac3_clk_clk_p -period 1.666 [get_ports dac3_clk_clk_p]
create_clock -name adc2_clk_clk_p -period 3.333 [get_ports adc2_clk_clk_p]
create_clock -name clk104_pl_clk  -period 1.666 [get_ports fpga_e10]
set_max_delay -from [get_pins {plps_0/inst/plpsboard/plsv/pltop/boardcfg/gen_fcnt[*].freq_count3/*/C}] -to [get_pins {plps_0/inst/plpsboard/plsv/pltop/boardcfg/gen_fcnt[*].freq_count3/*/D}] 10.0
set_max_delay -from [get_pins {plps_0/inst/plpsboard/plsv/pltop/boardcfg/adc20data_xdomain/*/C}] -to [get_pins {plps_0/inst/plpsboard/plsv/pltop/boardcfg/adc20data_xdomain/*/D}] 1.666
set_max_delay -from [get_pins {plps_0/inst/plpsboard/plsv/pltop/*reset*/C}] -to [get_pins {axi_interconnect_1/m04_couplers/auto_ds/inst/gen_downsizer.gen_simple_downsizer.axi_downsizer_inst/USE_READ.read_data_inst/WORD_LANE[2].S_AXI_RDATA_II_reg[72]/R}] 10.0
																																													   
#set_max_delay -from [get_pins {proc_sys_reset_0/*/*/C}] -to [get_pins {*/*/*/*/*/*/*/R}] 10.0

#set_max_delay -from [get_pins {plps_0/inst/plpsboard/plsv/cfgresetn*/C}] -to [get_pins {axi_interconnect_1/m00_couplers/auto_cc/inst/gen_clock_conv.gen_async_lite_conv.clock_conv_lite_fwd_aw/m_areset_dly_reg[0]/D}] 10.0


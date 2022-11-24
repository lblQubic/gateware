create_clock -period 10.000 -name clk_100 -waveform {0.000 5.000} [get_ports fpga_g12]
create_clock -period 1.666 -name dac2_clk_clk_p [get_ports dac2_clk_clk_p]
create_clock -period 3.333 -name adc2_clk_clk_p [get_ports adc2_clk_clk_p]
create_clock -period 1.666 -name clk104_pl_clk [get_ports fpga_e10]
# set_max_delay -from [get_pins {plps_0/inst/plpsboard/plsv/pltop/boardcfg/gen_fcnt[*].freq_count3/*/C}] -to [get_pins {plps_0/inst/plpsboard/plsv/pltop/boardcfg/gen_fcnt[*].freq_count3/*/D}] 10.000
set_false_path -from [get_pins {plps_0/inst/plpsboard/plsv/pltop/boardcfg/gen_fcnt[*].freq_count3/*/C}] -to [get_pins {plps_0/inst/plpsboard/plsv/pltop/boardcfg/gen_fcnt[*].freq_count3/*/D}]
set_false_path -from [get_pins {plps_0/inst/plpsboard/plsv/pltop/boardcfg/adc20data_xdomain/*/C}] -to [get_pins {plps_0/inst/plpsboard/plsv/pltop/boardcfg/adc20data_xdomain/*/D}]

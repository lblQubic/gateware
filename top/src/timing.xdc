create_clock -period 10.000 -name clk_100 -waveform {0.000 5.000} [get_ports fpga_g12]
create_clock -period 2.000 -name dac2_clk_clk_p [get_ports dac2_clk_clk_p]
create_clock -period 2.000 -name adc2_clk_clk_p [get_ports adc2_clk_clk_p]
create_clock -period 2.000 -name clk104_pl_clk [get_ports fpga_e10]

#set_clock_uncertainty 0.01 [get_clocks dac2_clk_clk_p]
#set_clock_uncertainty 0.01 [get_clocks adc2_clk_clk_p]

# set_max_delay -from [get_pins {plps_0/inst/plpsboard/plsv/boardcfg/gen_fcnt[*].freq_count3/*/C}] -to [get_pins {plps_0/inst/plpsboard/plsv/boardcfg/gen_fcnt[*].freq_count3/*/D}] 10.000
set_false_path -from [get_pins {plps_0/inst/plpsboard/plsv/boardcfg/gen_fcnt[*].freq_count3/*/C}] -to [get_pins {plps_0/inst/plpsboard/plsv/boardcfg/gen_fcnt[*].freq_count3/*/D}]
set_false_path -from [get_pins {plps_0/inst/plpsboard/plsv/boardcfg/*xdomain/*/C}] -to [get_pins {plps_0/inst/plpsboard/plsv/boardcfg/*xdomain/*/D}]

#create_clock -period 3.333 -name {PL_CLK_clk_p[0]} -waveform {0.000 1.667} [get_ports {PL_CLK_clk_p[0]}]
#create_generated_clock -name design_1_i/pl_sysref_0/inst/user_sysref_adc_1 -source [get_pins design_1_i/clk_wiz_0/inst/mmcme4_adv_inst/CLKOUT0] -divide_by 1 [get_pins design_1_i/pl_sysref_0/inst/user_sysref_adc_reg/Q]
#
#set_property CLOCK_DEDICATED_ROUTE ANY_CMT_COLUMN [get_nets {design_1_i/util_ds_buf_0/U0/IBUF_OUT_BUFG[0]}]
#set_property PULLDOWN true [get_ports Ext_Capture]
#set_property PULLDOWN true [get_ports Ext_Play]
#set_property DRIVE 4 [get_ports {Send_Play[0]}]
#set_property DRIVE 4 [get_ports {Send_Cap[0]}]
#
#set_property CLOCK_DEDICATED_ROUTE ANY_CMT_COLUMN [get_nets design_1_i/util_ds_buf_0/U0/USE_IBUFDS.GEN_IBUFDS[0].IBUFDS_I/O]


#create_clock -name clk_freerun -period 8.0 [get_ports hb_gtwiz_reset_clk_freerun_in]
create_clock -name clk_mgtrefclk1_128_p -period 2.0 [get_ports fpga_y34]
#create_clock -name clk_mgtrefclk0_128_p -period 4.0 [get_ports fpga_aa36]
#create_generated_clock -name r8a34001_clk5 -source [get_pins {plps_0/inst/plpsboard/board/oddre1_r8a34001_clk5_in_c/C}] -divide_by 1 -multiply_by 1 [get_ports fpga_aa36]
#create_clock -name clk_rx_srcclk -period 4.0 [get_pins {plps_0/inst/plpsboard/plsv/boardcfg/wrapper_inst/gty_sfp_inst/inst/gen_gtwizard_gtye4_top.gty_sfp_gtwizard_gtye4_inst/gen_gtwizard_gtye4.gen_channel_container[1].gen_enabled_channel.gtye4_channel_wrapper_inst/gtwiz_userclk_rx_srcclk_out[0]}]
#create_clock -name clk_tx_srcclk -period 4.0 [get_pins {plps_0/inst/plpsboard/plsv/boardcfg/wrapper_inst/gty_sfp_inst/inst/gen_gtwizard_gtye4_top.gty_sfp_gtwizard_gtye4_inst/gtwiz_userclk_tx_usrclk_out[0]}]

set_false_path -to [get_cells -hierarchical -filter {NAME =~ *bit_synchronizer*inst/i_in_meta_reg}] -quiet
##set_false_path -to [get_cells -hierarchical -filter {NAME =~ *reset_synchronizer*inst/rst_in_*_reg}] -quiet
set_false_path -to [get_pins -filter {REF_PIN_NAME=~*D} -of_objects [get_cells -hierarchical -filter {NAME =~ *reset_synchronizer*inst/rst_in_meta*}]] -quiet
set_false_path -to [get_pins -filter {REF_PIN_NAME=~*PRE} -of_objects [get_cells -hierarchical -filter {NAME =~ *reset_synchronizer*inst/rst_in_meta*}]] -quiet
set_false_path -to [get_pins -filter {REF_PIN_NAME=~*PRE} -of_objects [get_cells -hierarchical -filter {NAME =~ *reset_synchronizer*inst/rst_in_sync1*}]] -quiet
set_false_path -to [get_pins -filter {REF_PIN_NAME=~*PRE} -of_objects [get_cells -hierarchical -filter {NAME =~ *reset_synchronizer*inst/rst_in_sync2*}]] -quiet
set_false_path -to [get_pins -filter {REF_PIN_NAME=~*PRE} -of_objects [get_cells -hierarchical -filter {NAME =~ *reset_synchronizer*inst/rst_in_sync3*}]] -quiet
set_false_path -to [get_pins -filter {REF_PIN_NAME=~*PRE} -of_objects [get_cells -hierarchical -filter {NAME =~ *reset_synchronizer*inst/rst_in_out*}]] -quiet


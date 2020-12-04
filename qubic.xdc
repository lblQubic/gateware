#set_property BITSTREAM.GENERAL.COMPRESS TRUE [current_design]
#set_property BITSTREAM.CONFIG.UNUSEDPIN Pullup [current_design]

#set_property BITSTREAM.CONFIG.BPI_SYNC_MODE Type1 [current_design]
#set_property CONFIG_MODE BPI16 [current_design]
#set_property BITSTREAM.CONFIG.EXTMASTERCCLK_EN div-1 [current_design]
#set_property BITSTREAM.CONFIG.CONFIGRATE 33 [current_design]
create_clock -period 8.000 -name ethclk -waveform {0.000 4.000} [get_ports {fpga\\.AH7}]
create_clock -period 5.000 -name sysclk -waveform {0.000 2.500} [get_nets {hw\\.vc707\\.sysclk}]
set_clock_groups -name qubic -asynchronous -group [get_clocks -include_generated_clocks ethclk] -group [get_clocks -include_generated_clocks sysclk]


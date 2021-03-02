#create_clock -period 8.000 -name sgmiiclk -waveform {0.000 4.000} [get_pins qubichw_config/hw\\.vc707\\.sgmiiclk_q0_p]
#create_clock -period 5.000 -name sysclk -waveform {0.000 2.500} [get_pins qubichw_config/hw\\.vc707\\.sysclk]
#create_clock -period 4.000 -name si5324clk -waveform {0.000 2.000} [get_pins qubichw_config/hw\\.vc707\\.si5324_out_c_p]
#create_clock -period 8.000 -name userclk -waveform {0.000 4.000} [get_pins qubichw_config/hw\\.vc707\\.user_clock_p]
#create_clock -period 16.000 -name ethclk -waveform {0.000 8.000} [get_pins qubichw_config/sgmii_ethernet_pcs_pma/bufgtxoutclk/I]

create_clock -period 8.000 -name sgmiiclk -waveform {0.000 4.000} [get_ports {fpga\\.AH7}]
create_clock -period 5.000 -name sysclk -waveform {0.000 2.500} [get_ports  {fpga\\.E19}]
create_clock -period 8.000 -name si5324clk -waveform {0.000 4.000} [get_ports  {fpga\\.AD8}]
create_clock -period 8.000 -name userclk -waveform {0.000 4.000} [get_ports  {fpga\\.AK34}]
create_clock -period 8.000 -name smamgtclk -waveform {0.000 4.000} [get_ports  {fpga\\.AK8}]
#create_clock -period 16.000 -name ethclk -waveform {0.000 8.000} [get_pins qubichw_config/sgmii_ethernet_pcs_pma/bufgtxoutclk/I]
create_clock -period 16.000 -name ethclk -waveform {0.000 8.000} [get_pins qubichw_config/sgmii_ethernet_pcs_pma/gig_ethernet_pcs_pma_0/txoutclk]
create_clock -period 4.000 -name fmc1dclk2 -waveform {0.000 2.000} [get_ports {fpga\\.L39}]
create_clock -period 2.000 -name fmc1refclk8 -waveform {0.000 1.000} [get_ports {fpga\\.A10}]
create_clock -period 8.000 -name fmc1refclk10 -waveform {0.000 4.000} [get_ports {fpga\\.E10}]
create_clock -period 4.000 -name fmc2dclk2 -waveform {0.000 2.000} [get_ports {fpga\\.AF39}]
create_clock -period 2.000 -name fmc2refclk8 -waveform {0.000 1.000} [get_ports {fpga\\.K8}]
create_clock -period 8.000 -name fmc2refclk10 -waveform {0.000 4.000} [get_ports {fpga\\.T8}]
create_clock -period 500.000 -name iicsclk -waveform {0.000 250.000} [get_ports {fpga\\.AT35}]

create_generated_clock -name clk100 -source [get_ports {fpga\\.E19}] -divide_by 10 -multiply_by 5 [get_pins qubichw_config/sysclkmmcm/bufgclk100/I]
create_generated_clock -name clk125 -source [get_ports {fpga\\.E19}] -divide_by 8 -multiply_by 5 [get_pins qubichw_config/sysclkmmcm/bufgclk125/I]
create_generated_clock -name clk200 -source [get_ports {fpga\\.E19}] -divide_by 5 -multiply_by 5 [get_pins qubichw_config/sysclkmmcm/bufgclk200/I]
create_generated_clock -name clk250 -source [get_ports {fpga\\.E19}] -divide_by 4 -multiply_by 5 [get_pins qubichw_config/sysclkmmcm/bufgclk250/I]
create_generated_clock -name eth125 -source [get_pins qubichw_config/sgmii_ethernet_pcs_pma/bufgtxoutclk/I] -divide_by 8 -multiply_by 16 [get_pins qubichw_config/sgmii_ethernet_pcs_pma/bufgclk125/I]
create_generated_clock -name eth62_5 -source [get_pins qubichw_config/sgmii_ethernet_pcs_pma/bufgtxoutclk/I] -divide_by 16 -multiply_by 16 [get_pins qubichw_config/sgmii_ethernet_pcs_pma/bufgclk62_5/I]
#create_generated_clock -name si5324clkdiv2 -source [get_pins {qubichw_config/si5324divbufgce/I}] -divide_by 2 [get_pins qubichw_config/si5324divbufgce/O]
#create_generated_clock -name smamgtclkdiv2 -source [get_pins {qubichw_config/smamgtdivbufgce/I}] -divide_by 2 [get_pins qubichw_config/smamgtdivbufgce/O]
#-edges {1,2,3} 
#-edges {1,2,3}

set_clock_groups -name qubic -asynchronous -group [get_clocks -include_generated_clocks sgmiiclk] -group [get_clocks -include_generated_clocks sysclk] -group [get_clocks -include_generated_clocks si5324clk] -group [get_clocks -include_generated_clocks smamgtclk] -group [get_clocks -include_generated_clocks userclk] -group [get_clocks -include_generated_clocks ethclk] -group [get_clocks -include_generated_clocks fmc1dclk2] -group [get_clocks -include_generated_clocks fmc1refclk8] -group [get_clocks -include_generated_clocks fmc1refclk10] -group [get_clocks -include_generated_clocks fmc2dclk2] -group [get_clocks -include_generated_clocks fmc2refclk8] -group [get_clocks -include_generated_clocks fmc2refclk10] -group [get_clocks -include_generated_clocks iicsclk]
#set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets qubichw_config/gticc_common_114/QPLLOUTCLK]
set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets qubichw_config/gticc_gt_smasfp/TXOUTCLK]

set_max_delay -from [get_clocks sgmiiclk] -to [get_clocks clk100] 8.0
set_max_delay -to [get_clocks sgmiiclk] -from [get_clocks clk100] 8.0

#set_max_delay -from [get_pins qubichw_config/uartlbresetxdomain/flagtoggle_clk1_reg/C] -to [get_pins {qubichw_config/uartlbresetxdomain/sync1_clk2_reg[0]/D}] 10.0
#set_max_delay -from [get_pins qubichw_config/uartresetxdomain/flagtoggle_clk1_reg/C] -to [get_pins {qubichw_config/uartresetxdomain/sync1_clk2_reg[0]/D}] 10.0
set_max_delay -from [get_pins -hierarchical -filter {NAME=~"*flagtoggle_clk1_reg/C"}] -to [get_pins -hierarchical -filter {NAME=~"*sync1_clk2_reg*/D"}] 10.0


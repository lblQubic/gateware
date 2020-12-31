#create_clock -period 8.000 -name sgmiiclk -waveform {0.000 4.000} [get_pins qubichw_config/hw\\.vc707\\.sgmiiclk_q0_p]
#create_clock -period 5.000 -name sysclk -waveform {0.000 2.500} [get_pins qubichw_config/hw\\.vc707\\.sysclk]
#create_clock -period 4.000 -name si5324clk -waveform {0.000 2.000} [get_pins qubichw_config/hw\\.vc707\\.si5324_out_c_p]
#create_clock -period 8.000 -name userclk -waveform {0.000 4.000} [get_pins qubichw_config/hw\\.vc707\\.user_clock_p]
#create_clock -period 16.000 -name ethclk -waveform {0.000 8.000} [get_pins qubichw_config/sgmii_ethernet_pcs_pma/bufgtxoutclk/I]

create_clock -period 8.000 -name sgmiiclk -waveform {0.000 4.000} [get_ports {fpga\\.AH7}]
create_clock -period 5.000 -name sysclk -waveform {0.000 2.500} [get_ports  {fpga\\.E19}]
create_clock -period 4.000 -name si5324clk -waveform {0.000 2.000} [get_ports  {fpga\\.AD8}]
create_clock -period 8.000 -name userclk -waveform {0.000 4.000} [get_ports  {fpga\\.AK34}]
create_clock -period 16.000 -name ethclk -waveform {0.000 8.000} [get_pins qubichw_config/sgmii_ethernet_pcs_pma/bufgtxoutclk/I]


create_generated_clock -name clk100 -source [get_ports {fpga\\.E19}] -divide_by 10 -multiply_by 5 [get_pins qubichw_config/sysclkmmcm/bufgclk100/I]
create_generated_clock -name clk125 -source [get_ports {fpga\\.E19}] -divide_by 8 -multiply_by 5 [get_pins qubichw_config/sysclkmmcm/bufgclk125/I]
create_generated_clock -name clk200 -source [get_ports {fpga\\.E19}] -divide_by 5 -multiply_by 5 [get_pins qubichw_config/sysclkmmcm/bufgclk200/I]
create_generated_clock -name clk250 -source [get_ports {fpga\\.E19}] -divide_by 4 -multiply_by 5 [get_pins qubichw_config/sysclkmmcm/bufgclk250/I]
create_generated_clock -name eth125 -source [get_pins qubichw_config/sgmii_ethernet_pcs_pma/bufgtxoutclk/I] -divide_by 8 -multiply_by 16 [get_pins qubichw_config/sgmii_ethernet_pcs_pma/bufgclk125/I]
create_generated_clock -name eth62_5 -source [get_pins qubichw_config/sgmii_ethernet_pcs_pma/bufgtxoutclk/I] -divide_by 16 -multiply_by 16 [get_pins qubichw_config/sgmii_ethernet_pcs_pma/bufgclk62_5/I]


set_clock_groups -name qubic -asynchronous -group [get_clocks -include_generated_clocks sgmiiclk] -group [get_clocks -include_generated_clocks sysclk] -group [get_clocks -include_generated_clocks si5324clk] -group [get_clocks -include_generated_clocks userclk]  -group [get_clocks -include_generated_clocks ethclk]

create_project tmpproj tmpproj -part xc7vx485tffg1157-1
create_ip -name gtwizard -vendor xilinx.com -library ip -version 3.6 -module_name gtwizard_0
set_property -dict {
CONFIG.gt0_val_align_comma_enable {0001111111}
CONFIG.gt0_val_align_comma_word {Two_Byte_Boundaries}
CONFIG.gt0_val_cc {false}
CONFIG.gt0_val_cc_seq_periodicity {200}
CONFIG.gt0_val_clk_cor_seq_2_use {true}
CONFIG.gt0_val_clk_cor_seq_1_1 {00000000}
CONFIG.gt0_val_clk_cor_seq_1_2 {00000000}
CONFIG.gt0_val_clk_cor_seq_1_3 {00000000}
CONFIG.gt0_val_clk_cor_seq_1_4 {00000000}
CONFIG.gt0_val_clk_cor_seq_2_1 {00000000}
CONFIG.gt0_val_clk_cor_seq_2_2 {00000000}
CONFIG.gt0_val_clk_cor_seq_2_3 {00000000}
CONFIG.gt0_val_clk_cor_seq_2_4 {00000000}
CONFIG.gt0_val_clk_cor_seq_2_use {false}
CONFIG.gt0_val_comma_preset {K28.5}
CONFIG.gt0_val_cpll_fbdiv {4}
CONFIG.gt0_val_cpll_fbdiv_45 {5}
CONFIG.gt0_val_cpll_rxout_div {4}
CONFIG.gt0_val_cpll_txout_div {4}
CONFIG.gt0_val_dec_valid_comma_only {true}
CONFIG.gt0_val_decoding {8B/10B}
CONFIG.gt0_val_dfe_mode {LPM-Auto}
CONFIG.gt0_val_encoding {8B/10B}
CONFIG.gt0_val_port_rxcharisk {true}
CONFIG.gt0_val_ppm_offset {200}
CONFIG.gt0_val_rx_data_width {16}
CONFIG.gt0_val_rx_int_datawidth {20}
CONFIG.gt0_val_rx_line_rate {1}
CONFIG.gt0_val_rx_reference_clock {125.000}
CONFIG.gt0_val_rx_termination_voltage {Programmable}
CONFIG.gt0_val_rx_cm_trim {100}
CONFIG.gt0_val_rx_cm_trim {100}
CONFIG.gt0_val_rx_termination_voltage {AVTT}
CONFIG.gt0_val_tx_data_width {16}
CONFIG.gt0_val_tx_int_datawidth {20}
CONFIG.gt0_val_tx_line_rate {1}
CONFIG.gt0_val_tx_reference_clock {125.000}
CONFIG.gt_val_rx_pll {CPLL}
CONFIG.gt_val_tx_pll {CPLL}
CONFIG.identical_val_rx_line_rate {1}
CONFIG.identical_val_rx_reference_clock {125.000}
CONFIG.identical_val_tx_line_rate {1}
CONFIG.identical_val_tx_reference_clock {125.000}
} [get_ips gtwizard_0]
set_property -dict [list CONFIG.gt0_val_port_rxpcommaalignen {true} CONFIG.gt0_val_port_rxslide {false} CONFIG.gt0_val_rxslide_mode {OFF}] [get_ips gtwizard_0]
generate_target {instantiation_template} [get_files gtwizard_0.xci]
generate_target all [get_files  gtwizard_0.xci]
#CONFIG.gt0_val_sata_e_idle_val {4}
#CONFIG.gt0_val_sata_rx_burst_val {4}
#CONFIG.gt0_val_pcs_pcie_en {false}

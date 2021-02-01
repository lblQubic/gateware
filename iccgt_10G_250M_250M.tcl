create_ip -name gtwizard -vendor xilinx.com -library ip -version 3.6 -module_name gtwizard_0
set_property -dict [list CONFIG.identical_val_tx_line_rate {10} CONFIG.identical_val_tx_reference_clock {250.000} CONFIG.gt0_val_encoding {8B/10B} CONFIG.gt0_val_decoding {8B/10B} CONFIG.gt0_val_drp_clock {125} CONFIG.gt0_val_align_comma_word {Four_Byte_Boundaries} CONFIG.gt0_val_port_rxpcommaalignen {true} CONFIG.gt0_val_port_rxmcommaalignen {false} CONFIG.gt0_val_port_rxslide {false} CONFIG.gt0_usesharedlogic {1} CONFIG.identical_val_rx_line_rate {10} CONFIG.gt_val_tx_pll {QPLL} CONFIG.gt0_val_tx_refclk {REFCLK1_Q0} CONFIG.gt_val_rx_pll {QPLL} CONFIG.gt0_val_rx_refclk {REFCLK1_Q0} CONFIG.gt1_val_tx_refclk {REFCLK1_Q0} CONFIG.gt1_val_rx_refclk {REFCLK1_Q0} CONFIG.gt2_val_tx_refclk {REFCLK1_Q0} CONFIG.gt2_val_rx_refclk {REFCLK1_Q0} CONFIG.gt3_val_tx_refclk {REFCLK1_Q0} CONFIG.gt3_val_rx_refclk {REFCLK1_Q0} CONFIG.gt4_val_tx_refclk {REFCLK1_Q1} CONFIG.gt4_val_rx_refclk {REFCLK1_Q1} CONFIG.gt5_val_tx_refclk {REFCLK1_Q1} CONFIG.gt5_val_rx_refclk {REFCLK1_Q1} CONFIG.gt6_val_tx_refclk {REFCLK1_Q1} CONFIG.gt6_val_rx_refclk {REFCLK1_Q1} CONFIG.gt7_val_tx_refclk {REFCLK1_Q1} CONFIG.gt7_val_rx_refclk {REFCLK1_Q1} CONFIG.gt8_val_tx_refclk {REFCLK1_Q2} CONFIG.gt8_val_rx_refclk {REFCLK1_Q2} CONFIG.gt9_val_tx_refclk {REFCLK1_Q2} CONFIG.gt9_val_rx_refclk {REFCLK1_Q2} CONFIG.gt10_val_tx_refclk {REFCLK1_Q2} CONFIG.gt10_val_rx_refclk {REFCLK1_Q2} CONFIG.gt11_val_tx_refclk {REFCLK1_Q2} CONFIG.gt11_val_rx_refclk {REFCLK1_Q2} CONFIG.gt12_val_tx_refclk {REFCLK1_Q3} CONFIG.gt12_val_rx_refclk {REFCLK1_Q3} CONFIG.gt13_val_tx_refclk {REFCLK1_Q3} CONFIG.gt13_val_rx_refclk {REFCLK1_Q3} CONFIG.gt14_val_tx_refclk {REFCLK1_Q3} CONFIG.gt14_val_rx_refclk {REFCLK1_Q3} CONFIG.gt15_val_tx_refclk {REFCLK1_Q3} CONFIG.gt15_val_rx_refclk {REFCLK1_Q3} CONFIG.gt16_val_tx_refclk {REFCLK1_Q4} CONFIG.gt16_val_rx_refclk {REFCLK1_Q4} CONFIG.gt17_val_tx_refclk {REFCLK1_Q4} CONFIG.gt17_val_rx_refclk {REFCLK1_Q4} CONFIG.gt18_val_tx_refclk {REFCLK1_Q4} CONFIG.gt18_val_rx_refclk {REFCLK1_Q4} CONFIG.gt19_val_tx_refclk {REFCLK1_Q4} CONFIG.gt19_val_rx_refclk {REFCLK1_Q4} CONFIG.gt20_val_tx_refclk {REFCLK1_Q5} CONFIG.gt20_val_rx_refclk {REFCLK1_Q5} CONFIG.gt21_val_tx_refclk {REFCLK1_Q5} CONFIG.gt21_val_rx_refclk {REFCLK1_Q5} CONFIG.gt22_val_tx_refclk {REFCLK1_Q5} CONFIG.gt22_val_rx_refclk {REFCLK1_Q5} CONFIG.gt23_val_tx_refclk {REFCLK1_Q5} CONFIG.gt23_val_rx_refclk {REFCLK1_Q5} CONFIG.gt24_val_tx_refclk {REFCLK1_Q6} CONFIG.gt24_val_rx_refclk {REFCLK1_Q6} CONFIG.gt25_val_tx_refclk {REFCLK1_Q6} CONFIG.gt25_val_rx_refclk {REFCLK1_Q6} CONFIG.gt26_val_tx_refclk {REFCLK1_Q6} CONFIG.gt26_val_rx_refclk {REFCLK1_Q6} CONFIG.gt27_val_tx_refclk {REFCLK1_Q6} CONFIG.gt27_val_rx_refclk {REFCLK1_Q6} CONFIG.identical_val_rx_reference_clock {250.000} CONFIG.gt0_val_tx_line_rate {10} CONFIG.gt0_val_tx_data_width {32} CONFIG.gt0_val_tx_int_datawidth {40} CONFIG.gt0_val_tx_reference_clock {250.000} CONFIG.gt0_val_rx_line_rate {10} CONFIG.gt0_val_rx_data_width {32} CONFIG.gt0_val_rx_int_datawidth {40} CONFIG.gt0_val_rx_reference_clock {250.000} CONFIG.gt0_val_qpll_fbdiv {40} CONFIG.gt0_val_cpll_rxout_div {1} CONFIG.gt0_val_cpll_txout_div {1} CONFIG.gt0_val_port_rxcharisk {true} CONFIG.gt0_val_comma_preset {K28.5} CONFIG.gt0_val_dfe_mode {LPM-Auto} CONFIG.gt0_val_rx_termination_voltage {Programmable} CONFIG.gt0_val_rx_cm_trim {800} CONFIG.gt0_val_clk_cor_seq_1_1 {00000000} CONFIG.gt0_val_clk_cor_seq_1_2 {00000000} CONFIG.gt0_val_clk_cor_seq_1_3 {00000000} CONFIG.gt0_val_clk_cor_seq_1_4 {00000000} CONFIG.gt0_val_clk_cor_seq_2_1 {00000000} CONFIG.gt0_val_clk_cor_seq_2_2 {00000000} CONFIG.gt0_val_clk_cor_seq_2_3 {00000000} CONFIG.gt0_val_clk_cor_seq_2_4 {00000000} CONFIG.gt0_val_rxslide_mode {OFF}] [get_ips gtwizard_0]
generate_target {instantiation_template} [get_files gtwizard_0.xci]
generate_target all [get_files  gtwizard_0.xci]

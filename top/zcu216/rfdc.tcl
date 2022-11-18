create_bd_cell -type ip -vlnv xilinx.com:ip:usp_rf_data_converter:2.6 rf_data_converter
set_property -dict {
CONFIG.ADC2_Clock_Source {2} 
CONFIG.ADC2_Enable {1} 
CONFIG.ADC2_Fabric_Freq {600.000} 
CONFIG.ADC2_Outclk_Freq {300.000} 
CONFIG.ADC2_PLL_Enable {true} 
CONFIG.ADC2_Refclk_Freq {600.000} 
CONFIG.ADC2_Sampling_Rate {2.4} 
CONFIG.ADC_Coarse_Mixer_Freq20 {3} 
CONFIG.ADC_Coarse_Mixer_Freq21 {3} 
CONFIG.ADC_Data_Width20 {4} 
CONFIG.ADC_Data_Width21 {4} 
CONFIG.ADC_Decimation_Mode20 {1} 
CONFIG.ADC_Decimation_Mode21 {1} 
CONFIG.ADC_Dither20 {false}
CONFIG.ADC_Dither21 {false}
CONFIG.ADC_Mixer_Type20 {1} 
CONFIG.ADC_Mixer_Type21 {1} 
CONFIG.ADC_OBS01 {0} 
CONFIG.ADC_OBS02 {0} 
CONFIG.ADC_OBS03 {0} 
CONFIG.ADC_OBS21 {0} 
CONFIG.ADC_OBS22 {0} 
CONFIG.ADC_OBS23 {0} 
CONFIG.ADC_Slice00_Enable {false} 
CONFIG.ADC_Slice01_Enable {false} 
CONFIG.ADC_Slice02_Enable {false} 
CONFIG.ADC_Slice03_Enable {false} 
CONFIG.ADC_Slice10_Enable {false} 
CONFIG.ADC_Slice11_Enable {false} 
CONFIG.ADC_Slice12_Enable {false} 
CONFIG.ADC_Slice13_Enable {false} 
CONFIG.ADC_Slice20_Enable {true} 
CONFIG.ADC_Slice21_Enable {true} 
CONFIG.ADC_Slice22_Enable {false} 
CONFIG.ADC_Slice23_Enable {false} 
CONFIG.ADC_Slice30_Enable {false} 
CONFIG.ADC_Slice31_Enable {false} 
CONFIG.ADC_Slice32_Enable {false} 
CONFIG.ADC_Slice33_Enable {false} 
CONFIG.Axiclk_Freq {100}
CONFIG.DAC0_Fabric_Freq {0.0} 
CONFIG.DAC2_Clock_Dist {1} 
CONFIG.DAC2_Fabric_Freq {600.000} 
CONFIG.DAC2_Outclk_Freq {600.000} 
CONFIG.DAC2_PLL_Enable {true} 
CONFIG.DAC2_Refclk_Freq {600.000} 
CONFIG.DAC2_Sampling_Rate {9.6} 
CONFIG.DAC3_Clock_Dist {0} 
CONFIG.DAC3_Clock_Source {6}
CONFIG.DAC3_Fabric_Freq {600.000} 
CONFIG.DAC3_Outclk_Freq {600.000} 
CONFIG.DAC3_PLL_Enable {true} 
CONFIG.DAC3_Refclk_Freq {600.000} 
CONFIG.DAC3_Sampling_Rate {9.6} 
CONFIG.DAC_Coarse_Mixer_Freq20 {3} 
CONFIG.DAC_Coarse_Mixer_Freq22 {3} 
CONFIG.DAC_Coarse_Mixer_Freq30 {3} 
CONFIG.DAC_Coarse_Mixer_Freq32 {3} 
CONFIG.DAC_Interpolation_Mode20 {1} 
CONFIG.DAC_Interpolation_Mode22 {1} 
CONFIG.DAC_Interpolation_Mode30 {1} 
CONFIG.DAC_Interpolation_Mode32 {1} 
CONFIG.DAC_Mixer_Type20 {1} 
CONFIG.DAC_Mixer_Type22 {1} 
CONFIG.DAC_Mixer_Type30 {1} 
CONFIG.DAC_Mixer_Type32 {1} 
CONFIG.DAC_Mode20 {3} 
CONFIG.DAC_Mode22 {3} 
CONFIG.DAC_Mode30 {3} 
CONFIG.DAC_Mode32 {3} 
CONFIG.DAC_Nyquist20 {0} 
CONFIG.DAC_Nyquist30 {0}
CONFIG.DAC_RESERVED_1_22 {0} 
CONFIG.DAC_RESERVED_1_23 {0} 
CONFIG.DAC_RESERVED_1_32 {0} 
CONFIG.DAC_RESERVED_1_33 {0}
CONFIG.DAC_Slice00_Enable {false} 
CONFIG.DAC_Slice01_Enable {false} 
CONFIG.DAC_Slice02_Enable {false} 
CONFIG.DAC_Slice03_Enable {false} 
CONFIG.DAC_Slice10_Enable {false} 
CONFIG.DAC_Slice11_Enable {false} 
CONFIG.DAC_Slice12_Enable {false} 
CONFIG.DAC_Slice13_Enable {false} 
CONFIG.DAC_Slice20_Enable {true} 
CONFIG.DAC_Slice21_Enable {false} 
CONFIG.DAC_Slice22_Enable {true} 
CONFIG.DAC_Slice23_Enable {false} 
CONFIG.DAC_Slice30_Enable {true} 
CONFIG.DAC_Slice31_Enable {false} 
CONFIG.DAC_Slice32_Enable {true} 
CONFIG.DAC_Slice33_Enable {false} 
} [get_bd_cells rf_data_converter]
#connect_bd_intf_net -boundary_type upper [get_bd_intf_pins axi_interconnect_1/M02_AXI] [get_bd_intf_pins usp_rf_data_converter_0/s_axi]
#connect_bd_net [get_bd_pins usp_rf_data_converter_0/s_axi_aclk] [get_bd_pins zynq_ultra_ps_e_0/pl_clk0]
#connect_bd_net [get_bd_pins usp_rf_data_converter_0/s_axi_aresetn] [get_bd_pins proc_sys_reset_0/peripheral_aresetn]
#set_property -dict [list 
#CONFIG.ADC0_Enable {0} 
#CONFIG.ADC0_Fabric_Freq {0.0} 
#CONFIG.ADC_RESERVED_1_00 {0} 
#CONFIG.ADC_Slice01_Enable {false} 
#CONFIG.ADC_Decimation_Mode01 {0} 
#CONFIG.ADC_Mixer_Type01 {3} 
#CONFIG.ADC_RESERVED_1_01 {0} 
#CONFIG.ADC_OBS01 {0} 
#CONFIG.ADC_RESERVED_1_02 {0} 
#CONFIG.ADC_OBS02 {0} 
#CONFIG.ADC_RESERVED_1_03 {0} 
#CONFIG.ADC_OBS03 {0} 
#CONFIG.ADC3_Enable {1} 
#CONFIG.ADC3_Fabric_Freq {250.000} 
#CONFIG.ADC_RESERVED_1_30 {0} 
#CONFIG.ADC_Slice31_Enable {true} 
#CONFIG.ADC_Decimation_Mode31 {1} 
#CONFIG.ADC_Mixer_Type31 {1} 
#CONFIG.ADC_Coarse_Mixer_Freq31 {3} 
#CONFIG.ADC_RESERVED_1_31 {0} 
#CONFIG.ADC_RESERVED_1_32 {0} 
#CONFIG.ADC_RESERVED_1_33 {0}] [get_bd_cells usp_rf_data_converter_0]
#set_property -dict [list 
#CONFIG.ADC_Coarse_Mixer_Freq30 {3} 
#CONFIG.ADC_Coarse_Mixer_Freq32 {3} 
#CONFIG.ADC_Coarse_Mixer_Freq33 {3} 
#CONFIG.ADC_Decimation_Mode30 {1} 
#CONFIG.ADC_Decimation_Mode32 {1} 
#CONFIG.ADC_Decimation_Mode33 {1} 
#CONFIG.ADC_Mixer_Type30 {1} 
#CONFIG.ADC_Mixer_Type32 {1} 
#CONFIG.ADC_Mixer_Type33 {1} 
#CONFIG.ADC_OBS01 {0} 
#CONFIG.ADC_OBS02 {0} 
#CONFIG.ADC_OBS03 {0} 
#CONFIG.ADC_OBS32 {0} 
#CONFIG.ADC_OBS33 {0}] [get_bd_cells usp_rf_data_converter_0]
#CONFIG.ADC_RESERVED_1_00 {0} 
#CONFIG.ADC_RESERVED_1_01 {0} 
#CONFIG.ADC_RESERVED_1_02 {0} 
#CONFIG.ADC_RESERVED_1_03 {0} 
#CONFIG.ADC_RESERVED_1_30 {0} 
#CONFIG.ADC_RESERVED_1_31 {0} 
#CONFIG.ADC_RESERVED_1_32 {0} 
#CONFIG.ADC_RESERVED_1_33 {0} 
#CONFIG.ADC_Slice30_Enable {true} 
#CONFIG.ADC_Slice32_Enable {true} 
#CONFIG.ADC_Slice33_Enable {true} 
#CONFIG.ADC0_Enable {0} 
#CONFIG.DAC0_Enable {0} 
#CONFIG.DAC2_Enable {1} 
#CONFIG.DAC2_Enable {1} 
#CONFIG.DAC3_Enable {1} 
#
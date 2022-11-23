create_bd_design "psbd"
open_bd_design {./vivado_project/psbd.srcs/sources_1/bd/psbd/psbd.bd}
source ps.tcl
source rfdc.tcl
set_property  ip_repo_paths  {./vivado_project/plip ./vivado_project/iflocalbus} [current_project]
update_ip_catalog -rebuild
create_bd_cell -type ip -vlnv user.org:user:plps:1.0 plps_0
create_bd_intf_port -mode Master -vlnv fpga:user:fpga_rtl:1.0 fpga
create_bd_cell -type ip -vlnv user.org:user:axi4_lb:1.0 ctrlregs
create_bd_cell -type ip -vlnv user.org:user:axi4_lb:1.0 dspregs
create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect:2.1 axi_interconnect_1
create_bd_cell -type ip -vlnv xilinx.com:ip:axi_clock_converter:2.1 axi_clock_converter_0
create_bd_intf_port -mode Master -vlnv xilinx.com:interface:diff_analog_io_rtl:1.0 vout20
create_bd_intf_port -mode Master -vlnv xilinx.com:interface:diff_analog_io_rtl:1.0 vout30
create_bd_intf_port -mode Slave -vlnv xilinx.com:display_usp_rf_data_converter:diff_pins_rtl:1.0 sysref_in
create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:diff_clock_rtl:1.0 dac2_clk
create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:diff_clock_rtl:1.0 adc2_clk
create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:diff_analog_io_rtl:1.0 vin20
create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:diff_analog_io_rtl:1.0 vin21
set_property -dict [list CONFIG.NUM_MI {9}] [get_bd_cells axi_interconnect_1]
connect_bd_net [get_bd_pins zynq_ultra_ps_e_0/maxihpm0_lpd_aclk] [get_bd_pins zynq_ultra_ps_e_0/pl_clk0]
connect_bd_net [get_bd_pins axi_interconnect_1/S00_ACLK] [get_bd_pins zynq_ultra_ps_e_0/pl_clk0]
connect_bd_net [get_bd_pins axi_interconnect_1/ACLK] [get_bd_pins zynq_ultra_ps_e_0/pl_clk0]
connect_bd_intf_net [get_bd_intf_pins zynq_ultra_ps_e_0/M_AXI_HPM0_LPD] [get_bd_intf_pins axi_interconnect_1/S00_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M00_AXI] [get_bd_intf_pins ctrlregs/axi]
set_property -dict [list CONFIG.FREQ_HZ {100000000}] [get_bd_pins plps_0/cfgclk]
set_property -dict [list CONFIG.FREQ_HZ {600000000}] [get_bd_pins plps_0/dspclk]
set_property -dict [list CONFIG.FREQ_HZ {600000000}] [get_bd_pins plps_0/clkadc2_600]
set_property -dict [list CONFIG.CLK_FREQ_HZ {100000000}] [get_bd_cells ctrlregs]
set_property -dict [list CONFIG.CLK_FREQ_HZ {600000000}] [get_bd_cells dspregs]
set_property -dict [list CONFIG.FREQ_HZ {600000000}] [get_bd_pins plps_0/DAC20_M_AXIS_ACLK]
set_property -dict [list CONFIG.FREQ_HZ {600000000}] [get_bd_pins plps_0/DAC30_M_AXIS_ACLK]
set_property -dict [list CONFIG.FREQ_HZ {600000000}] [get_bd_pins plps_0/DAC22_M_AXIS_ACLK]
set_property -dict [list CONFIG.FREQ_HZ {600000000}] [get_bd_pins plps_0/DAC32_M_AXIS_ACLK]
set_property -dict [list CONFIG.FREQ_HZ {600000000}] [get_bd_pins plps_0/ADC20_S_AXIS_ACLK]
set_property -dict [list CONFIG.FREQ_HZ {600000000}] [get_bd_pins plps_0/ADC21_S_AXIS_ACLK]
set_property -dict [list CONFIG.FREQ_HZ {600000000}] [get_bd_pins dspregs/axi_aclk]
set_property -dict [list CONFIG.FREQ_HZ {100000000}] [get_bd_pins ctrlregs/axi_aclk]
set_property -dict [list CONFIG.FREQ_HZ {300000000}] [get_bd_pins plps_0/clkadc2_300]
set_property -dict [list CONFIG.FREQ_HZ {600000000}] [get_bd_pins plps_0/clkadc2_600]


set_property -dict [list CONFIG.ADDR_WIDTH {16}] [get_bd_cells dspregs]
set_property -dict [list CONFIG.ADDR_WIDTH {16}] [get_bd_cells ctrlregs]
set_property -dict [list CONFIG.LB_DATAWIDTH {32} CONFIG.LB_ADDRWIDTH {14} CONFIG.DAC_AXIS_DATAWIDTH {256} CONFIG.ADC_AXIS_DATAWIDTH {64} CONFIG.BRAMTOHOST_ADDRWIDTH {32} CONFIG.BRAMTOHOST_DATAWIDTH {64} CONFIG.BRAMFROMHOST_ADDRWIDTH {32} CONFIG.BRAMFROMHOST_DATAWIDTH {256}] [get_bd_cells plps_0]

create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 bram_tohost0
create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_bram_tohost0
set_property -dict [list CONFIG.READ_LATENCY {2} CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells bram_tohost0]
set_property -dict [list CONFIG.DATA_WIDTH {64}] [get_bd_cells bram_tohost0]
#set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {64}  CONFIG.Write_Width_B {64}] [get_bd_cells blk_mem_bram_tohost0]
set_property -dict [list CONFIG.use_bram_block {Stand_Alone} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Write_Depth_A {32768} CONFIG.Write_Width_A {64} CONFIG.Read_Width_A {64} CONFIG.Write_Width_B {64} CONFIG.Read_Width_B {64} CONFIG.Enable_32bit_Address {true} CONFIG.Use_Byte_Write_Enable {true} CONFIG.Byte_Size {8} CONFIG.Use_RSTA_Pin {false} CONFIG.Use_RSTB_Pin {false} CONFIG.Enable_A {Always_Enabled} CONFIG.Enable_B {Always_Enabled} CONFIG.EN_SAFETY_CKT {false}] [get_bd_cells blk_mem_bram_tohost0]


create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 bram_tohost1
create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_bram_tohost1
set_property -dict [list CONFIG.READ_LATENCY {2} CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells bram_tohost1]
set_property -dict [list CONFIG.DATA_WIDTH {64}] [get_bd_cells bram_tohost1]
#set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {64}  CONFIG.Write_Width_B {64}] [get_bd_cells blk_mem_bram_tohost1]
set_property -dict [list CONFIG.use_bram_block {Stand_Alone} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Write_Depth_A {32768} CONFIG.Write_Width_A {64} CONFIG.Read_Width_A {64} CONFIG.Write_Width_B {64} CONFIG.Read_Width_B {64} CONFIG.Enable_32bit_Address {true} CONFIG.Use_Byte_Write_Enable {true} CONFIG.Byte_Size {8} CONFIG.Use_RSTA_Pin {false} CONFIG.Use_RSTB_Pin {false} CONFIG.Enable_A {Always_Enabled} CONFIG.Enable_B {Always_Enabled} CONFIG.EN_SAFETY_CKT {false}] [get_bd_cells blk_mem_bram_tohost1]


create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 bram_fromhost0
create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_bram_fromhost0
set_property -dict [list CONFIG.READ_LATENCY {2} CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells bram_fromhost0]
set_property -dict [list CONFIG.DATA_WIDTH {256}] [get_bd_cells bram_fromhost0]
#set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {128}  CONFIG.Write_Width_B {128}] [get_bd_cells blk_mem_bram_fromhost0]
set_property -dict [list CONFIG.use_bram_block {Stand_Alone} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Write_Depth_A {8192} CONFIG.Write_Width_A {256} CONFIG.Read_Width_A {256} CONFIG.Write_Width_B {256} CONFIG.Read_Width_B {256} CONFIG.Enable_32bit_Address {true} CONFIG.Use_Byte_Write_Enable {true} CONFIG.Byte_Size {8} CONFIG.Use_RSTA_Pin {false} CONFIG.Use_RSTB_Pin {false} CONFIG.Enable_A {Always_Enabled} CONFIG.Enable_B {Always_Enabled} CONFIG.EN_SAFETY_CKT {false}] [get_bd_cells blk_mem_bram_fromhost0]

create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 bram_fromhost1
create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_bram_fromhost1
set_property -dict [list CONFIG.READ_LATENCY {2} CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells bram_fromhost1]
set_property -dict [list CONFIG.DATA_WIDTH {256}] [get_bd_cells bram_fromhost1]
#set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {128}  CONFIG.Write_Width_B {128}] [get_bd_cells blk_mem_bram_fromhost1]
set_property -dict [list CONFIG.use_bram_block {Stand_Alone} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Write_Depth_A {8192} CONFIG.Write_Width_A {256} CONFIG.Read_Width_A {256} CONFIG.Write_Width_B {256} CONFIG.Read_Width_B {256} CONFIG.Enable_32bit_Address {true} CONFIG.Use_Byte_Write_Enable {true} CONFIG.Byte_Size {8} CONFIG.Use_RSTA_Pin {false} CONFIG.Use_RSTB_Pin {false} CONFIG.Enable_A {Always_Enabled} CONFIG.Enable_B {Always_Enabled} CONFIG.EN_SAFETY_CKT {false}] [get_bd_cells blk_mem_bram_fromhost1]

create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 bram_fromhost2
create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_bram_fromhost2
set_property -dict [list CONFIG.READ_LATENCY {2} CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells bram_fromhost2]
set_property -dict [list CONFIG.DATA_WIDTH {256}] [get_bd_cells bram_fromhost2]
#set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {128}  CONFIG.Write_Width_B {128} ] [get_bd_cells blk_mem_bram_fromhost2]
set_property -dict [list CONFIG.use_bram_block {Stand_Alone} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Write_Depth_A {8192} CONFIG.Write_Width_A {256} CONFIG.Read_Width_A {256} CONFIG.Write_Width_B {256} CONFIG.Read_Width_B {256} CONFIG.Enable_32bit_Address {true} CONFIG.Use_Byte_Write_Enable {true} CONFIG.Byte_Size {8} CONFIG.Use_RSTA_Pin {false} CONFIG.Use_RSTB_Pin {false} CONFIG.Enable_A {Always_Enabled} CONFIG.Enable_B {Always_Enabled} CONFIG.EN_SAFETY_CKT {false}] [get_bd_cells blk_mem_bram_fromhost2]


create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 bram_fromhost3
create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_bram_fromhost3
set_property -dict [list CONFIG.READ_LATENCY {2} CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells bram_fromhost3]
set_property -dict [list CONFIG.DATA_WIDTH {256}] [get_bd_cells bram_fromhost3]
#set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {128}  CONFIG.Write_Width_B {128} ] [get_bd_cells blk_mem_bram_fromhost3]
set_property -dict [list CONFIG.use_bram_block {Stand_Alone} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Write_Depth_A {8192} CONFIG.Write_Width_A {256} CONFIG.Read_Width_A {256} CONFIG.Write_Width_B {256} CONFIG.Read_Width_B {256} CONFIG.Enable_32bit_Address {true} CONFIG.Use_Byte_Write_Enable {true} CONFIG.Byte_Size {8} CONFIG.Use_RSTA_Pin {false} CONFIG.Use_RSTB_Pin {false} CONFIG.Enable_A {Always_Enabled} CONFIG.Enable_B {Always_Enabled} CONFIG.EN_SAFETY_CKT {false}] [get_bd_cells blk_mem_bram_fromhost3]

connect_bd_intf_net [get_bd_intf_pins bram_tohost0/BRAM_PORTA] [get_bd_intf_pins blk_mem_bram_tohost0/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins bram_tohost1/BRAM_PORTA] [get_bd_intf_pins blk_mem_bram_tohost1/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins bram_fromhost0/BRAM_PORTA] [get_bd_intf_pins blk_mem_bram_fromhost0/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins bram_fromhost1/BRAM_PORTA] [get_bd_intf_pins blk_mem_bram_fromhost1/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins bram_fromhost2/BRAM_PORTA] [get_bd_intf_pins blk_mem_bram_fromhost2/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins bram_fromhost3/BRAM_PORTA] [get_bd_intf_pins blk_mem_bram_fromhost3/BRAM_PORTA]

connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M01_AXI] [get_bd_intf_pins axi_clock_converter_0/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M02_AXI] [get_bd_intf_pins bram_tohost0/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M03_AXI] [get_bd_intf_pins bram_tohost1/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M04_AXI] [get_bd_intf_pins bram_fromhost0/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M05_AXI] [get_bd_intf_pins bram_fromhost1/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M06_AXI] [get_bd_intf_pins bram_fromhost2/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M07_AXI] [get_bd_intf_pins bram_fromhost3/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M08_AXI] [get_bd_intf_pins rf_data_converter/s_axi]


connect_bd_intf_net [get_bd_intf_pins axi_clock_converter_0/M_AXI] [get_bd_intf_pins dspregs/axi]
connect_bd_intf_net [get_bd_intf_pins rf_data_converter/adc2_clk] [get_bd_intf_ports adc2_clk]
connect_bd_intf_net [get_bd_intf_pins rf_data_converter/dac2_clk] [get_bd_intf_ports dac2_clk]
connect_bd_intf_net [get_bd_intf_pins rf_data_converter/sysref_in] [get_bd_intf_ports sysref_in]
connect_bd_intf_net [get_bd_intf_pins rf_data_converter/vin20] [get_bd_intf_ports vin20]
connect_bd_intf_net [get_bd_intf_pins rf_data_converter/vin21] [get_bd_intf_ports vin21]
connect_bd_intf_net [get_bd_intf_pins rf_data_converter/vout20] [get_bd_intf_ports vout20]
connect_bd_intf_net [get_bd_intf_pins rf_data_converter/vout30] [get_bd_intf_ports vout30]


connect_bd_intf_net [get_bd_intf_pins plps_0/ADC20_S_AXIS] [get_bd_intf_pins rf_data_converter/m20_axis]
connect_bd_intf_net [get_bd_intf_pins plps_0/ADC21_S_AXIS] [get_bd_intf_pins rf_data_converter/m21_axis]
connect_bd_intf_net [get_bd_intf_pins plps_0/DAC20_M_AXIS] [get_bd_intf_pins rf_data_converter/s20_axis]
connect_bd_intf_net [get_bd_intf_pins plps_0/DAC30_M_AXIS] [get_bd_intf_pins rf_data_converter/s30_axis]
connect_bd_intf_net [get_bd_intf_pins plps_0/DAC22_M_AXIS] [get_bd_intf_pins rf_data_converter/s22_axis]
connect_bd_intf_net [get_bd_intf_pins plps_0/DAC32_M_AXIS] [get_bd_intf_pins rf_data_converter/s32_axis]
connect_bd_intf_net [get_bd_intf_pins plps_0/bram_tohost0] [get_bd_intf_pins blk_mem_bram_tohost0/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/bram_tohost1] [get_bd_intf_pins blk_mem_bram_tohost1/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/bram_fromhost0] [get_bd_intf_pins blk_mem_bram_fromhost0/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/bram_fromhost1] [get_bd_intf_pins blk_mem_bram_fromhost1/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/bram_fromhost2] [get_bd_intf_pins blk_mem_bram_fromhost2/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/bram_fromhost3] [get_bd_intf_pins blk_mem_bram_fromhost3/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/fpga] [get_bd_intf_ports fpga]
connect_bd_intf_net [get_bd_intf_pins plps_0/lb1] [get_bd_intf_pins ctrlregs/lb]
connect_bd_intf_net [get_bd_intf_pins plps_0/lb2] [get_bd_intf_pins dspregs/lb]
connect_bd_net [get_bd_pins plps_0/adc2resetn00] [get_bd_pins plps_0/ADC20_S_AXIS_ARESETN]
connect_bd_net [get_bd_pins plps_0/adc2resetn01] [get_bd_pins plps_0/ADC21_S_AXIS_ARESETN]
connect_bd_net [get_bd_pins plps_0/adc2resetn02] [get_bd_pins rf_data_converter/m2_axis_aresetn]
connect_bd_net [get_bd_pins plps_0/aresetn] [get_bd_pins zynq_ultra_ps_e_0/pl_resetn0]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_clock_converter_0/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M00_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M01_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M02_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M03_ACLK] 
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M04_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M05_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M06_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M07_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M08_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins bram_tohost0/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins bram_tohost1/s_axi_aclk] 
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins bram_fromhost0/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins bram_fromhost1/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins bram_fromhost2/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins bram_fromhost3/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins ctrlregs/axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins rf_data_converter/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgresetn00] [get_bd_pins axi_interconnect_1/M00_ARESETN] 
connect_bd_net [get_bd_pins plps_0/cfgresetn01] [get_bd_pins axi_interconnect_1/M01_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn02] [get_bd_pins axi_interconnect_1/M02_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn03] [get_bd_pins axi_interconnect_1/M03_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn04] [get_bd_pins axi_interconnect_1/M04_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn05] [get_bd_pins axi_interconnect_1/M05_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn06] [get_bd_pins axi_interconnect_1/M06_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn07] [get_bd_pins axi_interconnect_1/M07_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn08] [get_bd_pins axi_interconnect_1/M08_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn09] [get_bd_pins ctrlregs/axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn10] [get_bd_pins bram_tohost0/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn11] [get_bd_pins bram_tohost1/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn12] [get_bd_pins bram_fromhost0/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn13] [get_bd_pins bram_fromhost1/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn14] [get_bd_pins bram_fromhost2/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn15] [get_bd_pins bram_fromhost3/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn16] [get_bd_pins axi_clock_converter_0/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn17] [get_bd_pins rf_data_converter/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/clk_adc2] [get_bd_pins rf_data_converter/clk_adc2]
connect_bd_net [get_bd_pins plps_0/clk_dac2] [get_bd_pins rf_data_converter/clk_dac2]
connect_bd_net [get_bd_pins plps_0/clk_dac3] [get_bd_pins rf_data_converter/clk_dac3]
connect_bd_net [get_bd_pins plps_0/clkadc2_600] [get_bd_pins plps_0/ADC20_S_AXIS_ACLK]
connect_bd_net [get_bd_pins plps_0/clkadc2_600] [get_bd_pins plps_0/ADC21_S_AXIS_ACLK]
connect_bd_net [get_bd_pins plps_0/clkadc2_600] [get_bd_pins rf_data_converter/m2_axis_aclk]
connect_bd_net [get_bd_pins plps_0/dspclk] [get_bd_pins axi_clock_converter_0/m_axi_aclk]
connect_bd_net [get_bd_pins plps_0/dspclk] [get_bd_pins dspregs/axi_aclk]
connect_bd_net [get_bd_pins plps_0/dspclk] [get_bd_pins plps_0/DAC20_M_AXIS_ACLK]
connect_bd_net [get_bd_pins plps_0/dspclk] [get_bd_pins plps_0/DAC30_M_AXIS_ACLK]
connect_bd_net [get_bd_pins plps_0/dspclk] [get_bd_pins plps_0/DAC22_M_AXIS_ACLK]
connect_bd_net [get_bd_pins plps_0/dspclk] [get_bd_pins plps_0/DAC32_M_AXIS_ACLK]
connect_bd_net [get_bd_pins plps_0/dspclk] [get_bd_pins rf_data_converter/s2_axis_aclk]
connect_bd_net [get_bd_pins plps_0/dspclk] [get_bd_pins rf_data_converter/s3_axis_aclk]
connect_bd_net [get_bd_pins plps_0/dspresetn00] [get_bd_pins dspregs/axi_aresetn] 
connect_bd_net [get_bd_pins plps_0/dspresetn01] [get_bd_pins axi_clock_converter_0/m_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/dspresetn02] [get_bd_pins plps_0/DAC20_M_AXIS_ARESETN]
connect_bd_net [get_bd_pins plps_0/dspresetn03] [get_bd_pins plps_0/DAC30_M_AXIS_ARESETN]
connect_bd_net [get_bd_pins plps_0/dspresetn04] [get_bd_pins plps_0/DAC22_M_AXIS_ARESETN]
connect_bd_net [get_bd_pins plps_0/dspresetn05] [get_bd_pins plps_0/DAC32_M_AXIS_ARESETN]
connect_bd_net [get_bd_pins plps_0/dspresetn06] [get_bd_pins rf_data_converter/s2_axis_aresetn]
connect_bd_net [get_bd_pins plps_0/dspresetn07] [get_bd_pins rf_data_converter/s3_axis_aresetn]
connect_bd_net [get_bd_pins plps_0/pl_clk0] [get_bd_pins zynq_ultra_ps_e_0/pl_clk0]
connect_bd_net [get_bd_pins plps_0/psresetn00] [get_bd_pins axi_interconnect_1/ARESETN]
connect_bd_net [get_bd_pins plps_0/psresetn01] [get_bd_pins axi_interconnect_1/S00_ARESETN]



if {0} {
create_bd_cell -type ip -vlnv xilinx.com:ip:c_counter_binary:12.0 c_counter_binary_0
connect_bd_net [get_bd_pins c_counter_binary_0/CLK] [get_bd_pins plps_0/dspclk]
connect_bd_net -net Q [get_bd_pins c_counter_binary_0/Q]
set_property HDL_ATTRIBUTE.DEBUG true [get_bd_intf_nets {axi_clock_converter_0_M_AXI dspregs_lb}]
set_property HDL_ATTRIBUTE.DEBUG true [get_bd_nets {Q }]
connect_bd_net -net dspawstate_dbg [get_bd_pins dspregs/awstate_dbg]
connect_bd_net -net dsparstate_dbg [get_bd_pins dspregs/arstate_dbg]
connect_bd_net -net dspwstate_dbg [get_bd_pins dspregs/wstate_dbg]
connect_bd_net -net dsprstate_dbg [get_bd_pins dspregs/rstate_dbg]
connect_bd_net -net dspbstate_dbg [get_bd_pins dspregs/bstate_dbg]
set_property HDL_ATTRIBUTE.DEBUG true [get_bd_nets {dspawstate_dbg dsparstate_dbg dspwstate_dbg dsprstate_dbg dspbstate_dbg }]
													 
apply_bd_automation -rule xilinx.com:bd_rule:debug -dict [list \
                                                          [get_bd_nets dsparstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/dspclk" SYSTEM_ILA "Auto" } \
                                                          [get_bd_nets dspawstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/dspclk" SYSTEM_ILA "Auto" } \
                                                          [get_bd_intf_nets axi_clock_converter_0_M_AXI] {AXI_R_ADDRESS "Data and Trigger" AXI_R_DATA "Data and Trigger" AXI_W_ADDRESS "Data and Trigger" AXI_W_DATA "Data and Trigger" AXI_W_RESPONSE "Data and Trigger" CLK_SRC "/plps_0/dspclk" SYSTEM_ILA "Auto" APC_EN "0" } \
                                                          [get_bd_nets dspbstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/dspclk" SYSTEM_ILA "Auto" } \
                                                          [get_bd_intf_nets dspregs_lb] {NON_AXI_SIGNALS "Data and Trigger" CLK_SRC "/plps_0/dspclk" SYSTEM_ILA "Auto" } \
                                                          [get_bd_nets dsprstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/dspclk" SYSTEM_ILA "Auto" } \
                                                          [get_bd_nets dspwstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/dspclk" SYSTEM_ILA "Auto" } \
                                                          [get_bd_nets Q] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/dspclk" SYSTEM_ILA "Auto" } \
                                                         ]
connect_bd_net [get_bd_pins rst_psbd_600M/ext_reset_in] [get_bd_pins zynq_ultra_ps_e_0/pl_resetn0]
}
if {0} {


connect_bd_net -net ctrlrstate_dbg [get_bd_pins ctrlregs/rstate_dbg]
connect_bd_net -net ctrlbstate_dbg [get_bd_pins ctrlregs/bstate_dbg]
connect_bd_net -net ctrlawstate_dbg [get_bd_pins ctrlregs/awstate_dbg]
connect_bd_net -net ctrlarstate_dbg [get_bd_pins ctrlregs/arstate_dbg]
connect_bd_net -net ctrlwstate_dbg [get_bd_pins ctrlregs/wstate_dbg]
set_property HDL_ATTRIBUTE.DEBUG true [get_bd_nets {ctrlrstate_dbg ctrlbstate_dbg ctrlawstate_dbg ctrlarstate_dbg ctrlwstate_dbg }]
set_property HDL_ATTRIBUTE.DEBUG true [get_bd_intf_nets {ctrlregs_lb axi_interconnect_1_M00_AXI}]
apply_bd_automation -rule xilinx.com:bd_rule:debug -dict [list \
                                                          [get_bd_nets ctrlarstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" } \
                                                          [get_bd_nets ctrlawstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" } \
                                                          [get_bd_intf_nets axi_interconnect_1_M00_AXI] {AXI_R_ADDRESS "Data and Trigger" AXI_R_DATA "Data and Trigger" AXI_W_ADDRESS "Data and Trigger" AXI_W_DATA "Data and Trigger" AXI_W_RESPONSE "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" APC_EN "0" } \
                                                          [get_bd_nets ctrlbstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" } \
                                                          [get_bd_intf_nets ctrlregs_lb] {NON_AXI_SIGNALS "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" } \
                                                          [get_bd_nets ctrlrstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" } \
                                                          [get_bd_nets ctrlwstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" } \
                                                         ]
connect_bd_net [get_bd_pins zynq_ultra_ps_e_0/pl_resetn0] [get_bd_pins rst_psbd_100M/ext_reset_in]
}
if {1} {
set_property HDL_ATTRIBUTE.DEBUG true [get_bd_intf_nets {axi_interconnect_1_M05_AXI bram_fromhost1_BRAM_PORTA}]
apply_bd_automation -rule xilinx.com:bd_rule:debug -dict [list \
                                                          [get_bd_intf_nets axi_interconnect_1_M05_AXI] {AXI_R_ADDRESS "Data and Trigger" AXI_R_DATA "Data and Trigger" AXI_W_ADDRESS "Data and Trigger" AXI_W_DATA "Data and Trigger" AXI_W_RESPONSE "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" APC_EN "0" } \
                                                          [get_bd_intf_nets bram_fromhost1_BRAM_PORTA] {NON_AXI_SIGNALS "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" } \
                                                         ]
}

assign_bd_address
set_property range 1M [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_bram_tohost0_Mem0}]
set_property range 1M [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_bram_tohost1_Mem0}]
set_property range 1M [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_bram_fromhost0_Mem0}]
set_property range 1M [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_bram_fromhost1_Mem0}]
set_property range 1M [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_bram_fromhost2_Mem0}]
set_property range 1M [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_bram_fromhost3_Mem0}]
validate_bd_design
save_bd_design
make_wrapper -files [get_files ./vivado_project/psbd/psbd.srcs/sources_1/bd/psbd/psbd.bd] -top
add_files -norecurse ./vivado_project/psbd/psbd.gen/sources_1/bd/psbd/hdl/psbd_wrapper.v

 

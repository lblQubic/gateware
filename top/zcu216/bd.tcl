#proc bramwithctrl {bramname Awidth Adepth Bwidth latency} {
#	incr $Awidth 0
#	incr $Adepth 0
#	incr $Bwidth 0
#	incr $latency 0
#	create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 ${bramname}_ctrl
#	create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 ${bramname}_mem
#	set_property -dict [list CONFIG.READ_LATENCY ${latency} CONFIG.SINGLE_PORT_BRAM {1} CONFIG.DATA_WIDTH ${Awidth}] [get_bd_cells ${bramname}_ctrl]
#	set_property -dict [list CONFIG.use_bram_block {Stand_Alone} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Write_Depth_A ${Adepth} CONFIG.Write_Width_A ${Awidth} CONFIG.Read_Width_A ${Awidth} CONFIG.Write_Width_B ${Bwidth} CONFIG.Read_Width_B ${Bwidth} CONFIG.Enable_32bit_Address {true} CONFIG.Use_Byte_Write_Enable {true} CONFIG.Byte_Size {8} CONFIG.Use_RSTA_Pin {false} CONFIG.Use_RSTB_Pin {false} CONFIG.Enable_A {Always_Enabled} CONFIG.Enable_B {Always_Enabled} CONFIG.EN_SAFETY_CKT {false}] [get_bd_cells ${bramname}_mem]
#}


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
set_property -dict [list CONFIG.NUM_MI {46}] [get_bd_cells axi_interconnect_1]
connect_bd_net [get_bd_pins zynq_ultra_ps_e_0/maxihpm0_lpd_aclk] [get_bd_pins zynq_ultra_ps_e_0/pl_clk0]
connect_bd_net [get_bd_pins axi_interconnect_1/S00_ACLK] [get_bd_pins zynq_ultra_ps_e_0/pl_clk0]
connect_bd_net [get_bd_pins axi_interconnect_1/ACLK] [get_bd_pins zynq_ultra_ps_e_0/pl_clk0]
connect_bd_intf_net [get_bd_intf_pins zynq_ultra_ps_e_0/M_AXI_HPM0_LPD] [get_bd_intf_pins axi_interconnect_1/S00_AXI]
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
#set_property -dict [list CONFIG.LB_DATAWIDTH {32} CONFIG.LB_ADDRWIDTH {14} CONFIG.DAC_AXIS_DATAWIDTH {256} CONFIG.ADC_AXIS_DATAWIDTH {64} CONFIG.BRAMTOHOST_ADDRWIDTH {17} CONFIG.BRAMTOHOST_DATAWIDTH {64} CONFIG.BRAMFROMHOST_ADDRWIDTH {15} CONFIG.BRAMFROMHOST_DATAWIDTH {256}] [get_bd_cells plps_0]
set_property -dict [list CONFIG.LB_DATAWIDTH {32} CONFIG.LB_ADDRWIDTH {16} CONFIG.DAC_AXIS_DATAWIDTH {256} CONFIG.ADC_AXIS_DATAWIDTH {64} CONFIG.BRAMTOHOST_ADDRWIDTH {32} CONFIG.BRAMTOHOST_DATAWIDTH {64} CONFIG.BRAMFROMHOST_ADDRWIDTH {32} CONFIG.BRAMFROMHOST_DATAWIDTH {512}] [get_bd_cells plps_0]

source bramwithctrl.tcl

#bramwithctrl qdrvenv0 512 1024 512 2
#bramwithctrl qdrvenv1 512 1024 512 2
#bramwithctrl qdrvenv2 512 1024 512 2
#bramwithctrl qdrvenv3 512 1024 512 2
#bramwithctrl qdrvenv4 512 1024 512 2
#bramwithctrl qdrvenv5 512 1024 512 2
#bramwithctrl qdrvenv6 512 1024 512 2
#bramwithctrl qdrvenv7 512 1024 512 2
#bramwithctrl qdrvenv8 512 1024 512 2
#bramwithctrl qdrvenv9 512 1024 512 2
#bramwithctrl qdrvenva 512 1024 512 2
#bramwithctrl qdrvenvb 512 1024 512 2
#bramwithctrl qdrvenvc 512 1024 512 2
#bramwithctrl qdrvenvd 512 1024 512 2
#bramwithctrl qdrvenve 512 1024 512 2
#bramwithctrl qdrvenvf 512 1024 512 2
#bramwithctrl rdrvenv0 512 4096 512 2
#bramwithctrl rdrvenv1 512 4096 512 2
#bramwithctrl rdrvenv2 512 4096 512 2
#bramwithctrl rdrvenv3 512 4096 512 2
#bramwithctrl rdrvenv4 512 4096 512 2
#bramwithctrl rdrvenv5 512 4096 512 2
#bramwithctrl rdrvenv6 512 4096 512 2
#bramwithctrl rdrvenv7 512 4096 512 2
#bramwithctrl rdloenv0 128 4096 128 2
#bramwithctrl rdloenv1 128 4096 128 2
#bramwithctrl rdloenv2 128 4096 128 2
#bramwithctrl rdloenv3 128 4096 128 2
#bramwithctrl rdloenv4 128 4096 128 2
#bramwithctrl rdloenv5 128 4096 128 2
#bramwithctrl rdloenv6 128 4096 128 2
#bramwithctrl rdloenv7 128 4096 128 2
#bramwithctrl command 128 8192 128 2
#bramwithctrl accbuf0 64 2048 64 2
#bramwithctrl accbuf1 64 2048 64 2
#bramwithctrl accbuf2 64 2048 64 2
#bramwithctrl accbuf3 64 2048 64 2
#bramwithctrl accbuf4 64 2048 64 2
#bramwithctrl accbuf5 64 2048 64 2
#bramwithctrl accbuf6 64 2048 64 2
#bramwithctrl accbuf7 64 2048 64 2
#bramwithctrl acqbuf0 128 4096 128 2
#bramwithctrl acqbuf1 128 4096 128 2

#create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 acqbuf0
#create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_acqbuf0
#set_property -dict [list CONFIG.READ_LATENCY {2} CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells acqbuf0]
#set_property -dict [list CONFIG.DATA_WIDTH {64}] [get_bd_cells acqbuf0]
##set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {64}  CONFIG.Write_Width_B {64}] [get_bd_cells blk_mem_acqbuf0]
#set_property -dict [list CONFIG.use_bram_block {Stand_Alone} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Write_Depth_A {32768} CONFIG.Write_Width_A {64} CONFIG.Read_Width_A {64} CONFIG.Write_Width_B {64} CONFIG.Read_Width_B {64} CONFIG.Enable_32bit_Address {true} CONFIG.Use_Byte_Write_Enable {true} CONFIG.Byte_Size {8} CONFIG.Use_RSTA_Pin {false} CONFIG.Use_RSTB_Pin {false} CONFIG.Enable_A {Always_Enabled} CONFIG.Enable_B {Always_Enabled} CONFIG.EN_SAFETY_CKT {false}] [get_bd_cells blk_mem_acqbuf0]
#
#
#create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 acqbuf1
#create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_acqbuf1
#set_property -dict [list CONFIG.READ_LATENCY {2} CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells acqbuf1]
#set_property -dict [list CONFIG.DATA_WIDTH {64}] [get_bd_cells acqbuf1]
##set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {64}  CONFIG.Write_Width_B {64}] [get_bd_cells blk_mem_acqbuf1]
#set_property -dict [list CONFIG.use_bram_block {Stand_Alone} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Write_Depth_A {32768} CONFIG.Write_Width_A {64} CONFIG.Read_Width_A {64} CONFIG.Write_Width_B {64} CONFIG.Read_Width_B {64} CONFIG.Enable_32bit_Address {true} CONFIG.Use_Byte_Write_Enable {true} CONFIG.Byte_Size {8} CONFIG.Use_RSTA_Pin {false} CONFIG.Use_RSTB_Pin {false} CONFIG.Enable_A {Always_Enabled} CONFIG.Enable_B {Always_Enabled} CONFIG.EN_SAFETY_CKT {false}] [get_bd_cells blk_mem_acqbuf1]
#
#
#create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 rdrvenv0
#create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_rdrvenv0
#set_property -dict [list CONFIG.READ_LATENCY {2} CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells rdrvenv0]
#set_property -dict [list CONFIG.DATA_WIDTH {256}] [get_bd_cells rdrvenv0]
##set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {128}  CONFIG.Write_Width_B {128}] [get_bd_cells blk_mem_rdrvenv0]
#set_property -dict [list CONFIG.use_bram_block {Stand_Alone} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Write_Depth_A {8192} CONFIG.Write_Width_A {256} CONFIG.Read_Width_A {256} CONFIG.Write_Width_B {256} CONFIG.Read_Width_B {256} CONFIG.Enable_32bit_Address {true} CONFIG.Use_Byte_Write_Enable {true} CONFIG.Byte_Size {8} CONFIG.Use_RSTA_Pin {false} CONFIG.Use_RSTB_Pin {false} CONFIG.Enable_A {Always_Enabled} CONFIG.Enable_B {Always_Enabled} CONFIG.EN_SAFETY_CKT {false}] [get_bd_cells blk_mem_rdrvenv0]
#
#create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 rdrvenv1
#create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_rdrvenv1
#set_property -dict [list CONFIG.READ_LATENCY {2} CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells rdrvenv1]
#set_property -dict [list CONFIG.DATA_WIDTH {256}] [get_bd_cells rdrvenv1]
##set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {128}  CONFIG.Write_Width_B {128}] [get_bd_cells blk_mem_rdrvenv1]
#set_property -dict [list CONFIG.use_bram_block {Stand_Alone} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Write_Depth_A {8192} CONFIG.Write_Width_A {256} CONFIG.Read_Width_A {256} CONFIG.Write_Width_B {256} CONFIG.Read_Width_B {256} CONFIG.Enable_32bit_Address {true} CONFIG.Use_Byte_Write_Enable {true} CONFIG.Byte_Size {8} CONFIG.Use_RSTA_Pin {false} CONFIG.Use_RSTB_Pin {false} CONFIG.Enable_A {Always_Enabled} CONFIG.Enable_B {Always_Enabled} CONFIG.EN_SAFETY_CKT {false}] [get_bd_cells blk_mem_rdrvenv1]
#
#create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 rdrvenv2
#create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_rdrvenv2
#set_property -dict [list CONFIG.READ_LATENCY {2} CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells rdrvenv2]
#set_property -dict [list CONFIG.DATA_WIDTH {256}] [get_bd_cells rdrvenv2]
##set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {128}  CONFIG.Write_Width_B {128} ] [get_bd_cells blk_mem_rdrvenv2]
#set_property -dict [list CONFIG.use_bram_block {Stand_Alone} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Write_Depth_A {8192} CONFIG.Write_Width_A {256} CONFIG.Read_Width_A {256} CONFIG.Write_Width_B {256} CONFIG.Read_Width_B {256} CONFIG.Enable_32bit_Address {true} CONFIG.Use_Byte_Write_Enable {true} CONFIG.Byte_Size {8} CONFIG.Use_RSTA_Pin {false} CONFIG.Use_RSTB_Pin {false} CONFIG.Enable_A {Always_Enabled} CONFIG.Enable_B {Always_Enabled} CONFIG.EN_SAFETY_CKT {false}] [get_bd_cells blk_mem_rdrvenv2]
#
#
#create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 rdrvenv3
#create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_rdrvenv3
#set_property -dict [list CONFIG.READ_LATENCY {2} CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells rdrvenv3]
#set_property -dict [list CONFIG.DATA_WIDTH {256}] [get_bd_cells rdrvenv3]
##set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {128}  CONFIG.Write_Width_B {128} ] [get_bd_cells blk_mem_rdrvenv3]
#set_property -dict [list CONFIG.use_bram_block {Stand_Alone} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Write_Depth_A {8192} CONFIG.Write_Width_A {256} CONFIG.Read_Width_A {256} CONFIG.Write_Width_B {256} CONFIG.Read_Width_B {256} CONFIG.Enable_32bit_Address {true} CONFIG.Use_Byte_Write_Enable {true} CONFIG.Byte_Size {8} CONFIG.Use_RSTA_Pin {false} CONFIG.Use_RSTB_Pin {false} CONFIG.Enable_A {Always_Enabled} CONFIG.Enable_B {Always_Enabled} CONFIG.EN_SAFETY_CKT {false}] [get_bd_cells blk_mem_rdrvenv3]

connect_bd_intf_net [get_bd_intf_pins command_ctrl/BRAM_PORTA] [get_bd_intf_pins command_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins acqbuf0_ctrl/BRAM_PORTA] [get_bd_intf_pins acqbuf0_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins acqbuf1_ctrl/BRAM_PORTA] [get_bd_intf_pins acqbuf1_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins rdrvenv0_ctrl/BRAM_PORTA] [get_bd_intf_pins rdrvenv0_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins rdrvenv1_ctrl/BRAM_PORTA] [get_bd_intf_pins rdrvenv1_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins rdrvenv2_ctrl/BRAM_PORTA] [get_bd_intf_pins rdrvenv2_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins rdrvenv3_ctrl/BRAM_PORTA] [get_bd_intf_pins rdrvenv3_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins rdrvenv4_ctrl/BRAM_PORTA] [get_bd_intf_pins rdrvenv4_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins rdrvenv5_ctrl/BRAM_PORTA] [get_bd_intf_pins rdrvenv5_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins rdrvenv6_ctrl/BRAM_PORTA] [get_bd_intf_pins rdrvenv6_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins rdrvenv7_ctrl/BRAM_PORTA] [get_bd_intf_pins rdrvenv7_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins rdloenv0_ctrl/BRAM_PORTA] [get_bd_intf_pins rdloenv0_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins rdloenv1_ctrl/BRAM_PORTA] [get_bd_intf_pins rdloenv1_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins rdloenv2_ctrl/BRAM_PORTA] [get_bd_intf_pins rdloenv2_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins rdloenv3_ctrl/BRAM_PORTA] [get_bd_intf_pins rdloenv3_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins rdloenv4_ctrl/BRAM_PORTA] [get_bd_intf_pins rdloenv4_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins rdloenv5_ctrl/BRAM_PORTA] [get_bd_intf_pins rdloenv5_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins rdloenv6_ctrl/BRAM_PORTA] [get_bd_intf_pins rdloenv6_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins rdloenv7_ctrl/BRAM_PORTA] [get_bd_intf_pins rdloenv7_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins accbuf0_ctrl/BRAM_PORTA] [get_bd_intf_pins accbuf0_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins accbuf1_ctrl/BRAM_PORTA] [get_bd_intf_pins accbuf1_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins accbuf2_ctrl/BRAM_PORTA] [get_bd_intf_pins accbuf2_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins accbuf3_ctrl/BRAM_PORTA] [get_bd_intf_pins accbuf3_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins accbuf4_ctrl/BRAM_PORTA] [get_bd_intf_pins accbuf4_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins accbuf5_ctrl/BRAM_PORTA] [get_bd_intf_pins accbuf5_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins accbuf6_ctrl/BRAM_PORTA] [get_bd_intf_pins accbuf6_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins accbuf7_ctrl/BRAM_PORTA] [get_bd_intf_pins accbuf7_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins qdrvenv0_ctrl/BRAM_PORTA] [get_bd_intf_pins qdrvenv0_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins qdrvenv1_ctrl/BRAM_PORTA] [get_bd_intf_pins qdrvenv1_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins qdrvenv2_ctrl/BRAM_PORTA] [get_bd_intf_pins qdrvenv2_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins qdrvenv3_ctrl/BRAM_PORTA] [get_bd_intf_pins qdrvenv3_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins qdrvenv4_ctrl/BRAM_PORTA] [get_bd_intf_pins qdrvenv4_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins qdrvenv5_ctrl/BRAM_PORTA] [get_bd_intf_pins qdrvenv5_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins qdrvenv6_ctrl/BRAM_PORTA] [get_bd_intf_pins qdrvenv6_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins qdrvenv7_ctrl/BRAM_PORTA] [get_bd_intf_pins qdrvenv7_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins qdrvenv8_ctrl/BRAM_PORTA] [get_bd_intf_pins qdrvenv8_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins qdrvenv9_ctrl/BRAM_PORTA] [get_bd_intf_pins qdrvenv9_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins qdrvenva_ctrl/BRAM_PORTA] [get_bd_intf_pins qdrvenva_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins qdrvenvb_ctrl/BRAM_PORTA] [get_bd_intf_pins qdrvenvb_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins qdrvenvc_ctrl/BRAM_PORTA] [get_bd_intf_pins qdrvenvc_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins qdrvenvd_ctrl/BRAM_PORTA] [get_bd_intf_pins qdrvenvd_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins qdrvenve_ctrl/BRAM_PORTA] [get_bd_intf_pins qdrvenve_mem/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins qdrvenvf_ctrl/BRAM_PORTA] [get_bd_intf_pins qdrvenvf_mem/BRAM_PORTA]

connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M00_AXI] [get_bd_intf_pins ctrlregs/axi]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M01_AXI] [get_bd_intf_pins axi_clock_converter_0/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M02_AXI] [get_bd_intf_pins rf_data_converter/s_axi]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M03_AXI] [get_bd_intf_pins command_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M04_AXI] [get_bd_intf_pins acqbuf0_ctrl/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M05_AXI] [get_bd_intf_pins acqbuf1_ctrl/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M06_AXI] [get_bd_intf_pins rdrvenv0_ctrl/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M07_AXI] [get_bd_intf_pins rdrvenv1_ctrl/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M08_AXI] [get_bd_intf_pins rdrvenv2_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M09_AXI] [get_bd_intf_pins rdrvenv3_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M10_AXI] [get_bd_intf_pins rdrvenv4_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M11_AXI] [get_bd_intf_pins rdrvenv5_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M12_AXI] [get_bd_intf_pins rdrvenv6_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M13_AXI] [get_bd_intf_pins rdrvenv7_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M14_AXI] [get_bd_intf_pins rdloenv0_ctrl/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M15_AXI] [get_bd_intf_pins rdloenv1_ctrl/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M16_AXI] [get_bd_intf_pins rdloenv2_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M17_AXI] [get_bd_intf_pins rdloenv3_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M18_AXI] [get_bd_intf_pins rdloenv4_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M19_AXI] [get_bd_intf_pins rdloenv5_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M20_AXI] [get_bd_intf_pins rdloenv6_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M21_AXI] [get_bd_intf_pins rdloenv7_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M22_AXI] [get_bd_intf_pins accbuf0_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M23_AXI] [get_bd_intf_pins accbuf1_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M24_AXI] [get_bd_intf_pins accbuf2_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M25_AXI] [get_bd_intf_pins accbuf3_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M26_AXI] [get_bd_intf_pins accbuf4_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M27_AXI] [get_bd_intf_pins accbuf5_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M28_AXI] [get_bd_intf_pins accbuf6_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M29_AXI] [get_bd_intf_pins accbuf7_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M30_AXI] [get_bd_intf_pins qdrvenv0_ctrl/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M31_AXI] [get_bd_intf_pins qdrvenv1_ctrl/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M32_AXI] [get_bd_intf_pins qdrvenv2_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M33_AXI] [get_bd_intf_pins qdrvenv3_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M34_AXI] [get_bd_intf_pins qdrvenv4_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M35_AXI] [get_bd_intf_pins qdrvenv5_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M36_AXI] [get_bd_intf_pins qdrvenv6_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M37_AXI] [get_bd_intf_pins qdrvenv7_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M38_AXI] [get_bd_intf_pins qdrvenv8_ctrl/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M39_AXI] [get_bd_intf_pins qdrvenv9_ctrl/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M40_AXI] [get_bd_intf_pins qdrvenva_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M41_AXI] [get_bd_intf_pins qdrvenvb_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M42_AXI] [get_bd_intf_pins qdrvenvc_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M43_AXI] [get_bd_intf_pins qdrvenvd_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M44_AXI] [get_bd_intf_pins qdrvenve_ctrl/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_interconnect_1/M45_AXI] [get_bd_intf_pins qdrvenvf_ctrl/S_AXI] 


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
connect_bd_intf_net [get_bd_intf_pins plps_0/acqbuf0] [get_bd_intf_pins acqbuf0_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/acqbuf1] [get_bd_intf_pins acqbuf1_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/rdloenv0] [get_bd_intf_pins rdloenv0_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/rdloenv1] [get_bd_intf_pins rdloenv1_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/rdloenv2] [get_bd_intf_pins rdloenv2_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/rdloenv3] [get_bd_intf_pins rdloenv3_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/rdloenv4] [get_bd_intf_pins rdloenv4_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/rdloenv5] [get_bd_intf_pins rdloenv5_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/rdloenv6] [get_bd_intf_pins rdloenv6_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/rdloenv7] [get_bd_intf_pins rdloenv7_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/accbuf0] [get_bd_intf_pins accbuf0_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/accbuf1] [get_bd_intf_pins accbuf1_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/accbuf2] [get_bd_intf_pins accbuf2_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/accbuf3] [get_bd_intf_pins accbuf3_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/accbuf4] [get_bd_intf_pins accbuf4_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/accbuf5] [get_bd_intf_pins accbuf5_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/accbuf6] [get_bd_intf_pins accbuf6_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/accbuf7] [get_bd_intf_pins accbuf7_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/rdrvenv0] [get_bd_intf_pins rdrvenv0_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/rdrvenv1] [get_bd_intf_pins rdrvenv1_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/rdrvenv2] [get_bd_intf_pins rdrvenv2_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/rdrvenv3] [get_bd_intf_pins rdrvenv3_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/rdrvenv4] [get_bd_intf_pins rdrvenv4_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/rdrvenv5] [get_bd_intf_pins rdrvenv5_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/rdrvenv6] [get_bd_intf_pins rdrvenv6_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/rdrvenv7] [get_bd_intf_pins rdrvenv7_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/qdrvenv0] [get_bd_intf_pins qdrvenv0_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/qdrvenv1] [get_bd_intf_pins qdrvenv1_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/qdrvenv2] [get_bd_intf_pins qdrvenv2_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/qdrvenv3] [get_bd_intf_pins qdrvenv3_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/qdrvenv4] [get_bd_intf_pins qdrvenv4_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/qdrvenv5] [get_bd_intf_pins qdrvenv5_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/qdrvenv6] [get_bd_intf_pins qdrvenv6_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/qdrvenv7] [get_bd_intf_pins qdrvenv7_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/qdrvenv8] [get_bd_intf_pins qdrvenv8_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/qdrvenv9] [get_bd_intf_pins qdrvenv9_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/qdrvenva] [get_bd_intf_pins qdrvenva_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/qdrvenvb] [get_bd_intf_pins qdrvenvb_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/qdrvenvc] [get_bd_intf_pins qdrvenvc_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/qdrvenvd] [get_bd_intf_pins qdrvenvd_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/qdrvenve] [get_bd_intf_pins qdrvenve_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/qdrvenvf] [get_bd_intf_pins qdrvenvf_mem/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/command] [get_bd_intf_pins command_mem/BRAM_PORTB]
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
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M09_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M10_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M11_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M12_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M13_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M14_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M15_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M16_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M17_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M18_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M19_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M20_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M21_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M22_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M23_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M24_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M25_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M26_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M27_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M28_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M29_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M30_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M31_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M32_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M33_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M34_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M35_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M36_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M37_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M38_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M39_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M40_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M41_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M42_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M43_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M44_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M45_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins acqbuf0_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins acqbuf1_ctrl/s_axi_aclk] 
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins rdloenv0_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins rdloenv1_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins rdloenv2_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins rdloenv3_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins rdloenv4_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins rdloenv5_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins rdloenv6_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins rdloenv7_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins rdrvenv0_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins rdrvenv1_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins rdrvenv2_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins rdrvenv3_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins rdrvenv4_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins rdrvenv5_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins rdrvenv6_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins rdrvenv7_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins accbuf0_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins accbuf1_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins accbuf2_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins accbuf3_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins accbuf4_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins accbuf5_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins accbuf6_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins accbuf7_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins qdrvenv0_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins qdrvenv1_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins qdrvenv2_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins qdrvenv3_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins qdrvenv4_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins qdrvenv5_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins qdrvenv6_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins qdrvenv7_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins qdrvenv8_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins qdrvenv9_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins qdrvenva_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins qdrvenvb_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins qdrvenvc_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins qdrvenvd_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins qdrvenve_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins qdrvenvf_ctrl/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins command_ctrl/s_axi_aclk]
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
connect_bd_net [get_bd_pins plps_0/cfgresetn09] [get_bd_pins axi_interconnect_1/M09_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn10] [get_bd_pins axi_interconnect_1/M10_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn11] [get_bd_pins axi_interconnect_1/M11_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn12] [get_bd_pins axi_interconnect_1/M12_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn13] [get_bd_pins axi_interconnect_1/M13_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn14] [get_bd_pins axi_interconnect_1/M14_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn15] [get_bd_pins axi_interconnect_1/M15_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn16] [get_bd_pins axi_interconnect_1/M16_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn17] [get_bd_pins axi_interconnect_1/M17_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn18] [get_bd_pins axi_interconnect_1/M18_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn19] [get_bd_pins axi_interconnect_1/M19_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn20] [get_bd_pins axi_interconnect_1/M20_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn21] [get_bd_pins axi_interconnect_1/M21_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn22] [get_bd_pins axi_interconnect_1/M22_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn23] [get_bd_pins axi_interconnect_1/M23_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn24] [get_bd_pins axi_interconnect_1/M24_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn25] [get_bd_pins axi_interconnect_1/M25_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn26] [get_bd_pins axi_interconnect_1/M26_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn27] [get_bd_pins axi_interconnect_1/M27_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn28] [get_bd_pins axi_interconnect_1/M28_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn29] [get_bd_pins axi_interconnect_1/M29_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn30] [get_bd_pins axi_interconnect_1/M30_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn31] [get_bd_pins axi_interconnect_1/M31_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn32] [get_bd_pins axi_interconnect_1/M32_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn33] [get_bd_pins axi_interconnect_1/M33_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn34] [get_bd_pins axi_interconnect_1/M34_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn35] [get_bd_pins axi_interconnect_1/M35_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn36] [get_bd_pins axi_interconnect_1/M36_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn37] [get_bd_pins axi_interconnect_1/M37_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn38] [get_bd_pins axi_interconnect_1/M38_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn39] [get_bd_pins axi_interconnect_1/M39_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn40] [get_bd_pins axi_interconnect_1/M40_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn41] [get_bd_pins axi_interconnect_1/M41_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn42] [get_bd_pins axi_interconnect_1/M42_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn43] [get_bd_pins axi_interconnect_1/M43_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn44] [get_bd_pins axi_interconnect_1/M44_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn44] [get_bd_pins axi_interconnect_1/M45_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn45] [get_bd_pins ctrlregs/axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn46] [get_bd_pins acqbuf0_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn47] [get_bd_pins acqbuf1_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn48] [get_bd_pins accbuf0_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn49] [get_bd_pins accbuf1_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn50] [get_bd_pins accbuf2_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn51] [get_bd_pins accbuf3_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn52] [get_bd_pins accbuf4_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn53] [get_bd_pins accbuf5_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn54] [get_bd_pins accbuf6_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn55] [get_bd_pins accbuf7_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn56] [get_bd_pins qdrvenv0_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn57] [get_bd_pins qdrvenv1_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn58] [get_bd_pins qdrvenv2_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn59] [get_bd_pins qdrvenv3_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn60] [get_bd_pins qdrvenv4_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn61] [get_bd_pins qdrvenv5_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn62] [get_bd_pins qdrvenv6_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn63] [get_bd_pins qdrvenv7_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn64] [get_bd_pins qdrvenv8_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn65] [get_bd_pins qdrvenv9_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn66] [get_bd_pins qdrvenva_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn67] [get_bd_pins qdrvenvb_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn68] [get_bd_pins qdrvenvc_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn69] [get_bd_pins qdrvenvd_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn70] [get_bd_pins qdrvenve_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn71] [get_bd_pins qdrvenvf_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn72] [get_bd_pins rdloenv0_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn73] [get_bd_pins rdloenv1_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn74] [get_bd_pins rdloenv2_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn75] [get_bd_pins rdloenv3_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn76] [get_bd_pins rdloenv4_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn77] [get_bd_pins rdloenv5_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn78] [get_bd_pins rdloenv6_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn79] [get_bd_pins rdloenv7_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn80] [get_bd_pins rdrvenv0_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn81] [get_bd_pins rdrvenv1_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn82] [get_bd_pins rdrvenv2_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn83] [get_bd_pins rdrvenv3_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn84] [get_bd_pins rdrvenv4_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn85] [get_bd_pins rdrvenv5_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn86] [get_bd_pins rdrvenv6_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn87] [get_bd_pins rdrvenv7_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn88] [get_bd_pins command_ctrl/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn89] [get_bd_pins axi_clock_converter_0/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn90] [get_bd_pins rf_data_converter/s_axi_aresetn]
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



#if {0} {
#create_bd_cell -type ip -vlnv xilinx.com:ip:c_counter_binary:12.0 c_counter_binary_0
#connect_bd_net [get_bd_pins c_counter_binary_0/CLK] [get_bd_pins plps_0/dspclk]
#connect_bd_net -net Q [get_bd_pins c_counter_binary_0/Q]
#set_property HDL_ATTRIBUTE.DEBUG true [get_bd_intf_nets {axi_clock_converter_0_M_AXI dspregs_lb}]
#set_property HDL_ATTRIBUTE.DEBUG true [get_bd_nets {Q }]
#connect_bd_net -net dspawstate_dbg [get_bd_pins dspregs/awstate_dbg]
#connect_bd_net -net dsparstate_dbg [get_bd_pins dspregs/arstate_dbg]
#connect_bd_net -net dspwstate_dbg [get_bd_pins dspregs/wstate_dbg]
#connect_bd_net -net dsprstate_dbg [get_bd_pins dspregs/rstate_dbg]
#connect_bd_net -net dspbstate_dbg [get_bd_pins dspregs/bstate_dbg]
#set_property HDL_ATTRIBUTE.DEBUG true [get_bd_nets {dspawstate_dbg dsparstate_dbg dspwstate_dbg dsprstate_dbg dspbstate_dbg }]
#													 
#apply_bd_automation -rule xilinx.com:bd_rule:debug -dict [list \
#                                                          [get_bd_nets dsparstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/dspclk" SYSTEM_ILA "Auto" } \
#                                                          [get_bd_nets dspawstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/dspclk" SYSTEM_ILA "Auto" } \
#                                                          [get_bd_intf_nets axi_clock_converter_0_M_AXI] {AXI_R_ADDRESS "Data and Trigger" AXI_R_DATA "Data and Trigger" AXI_W_ADDRESS "Data and Trigger" AXI_W_DATA "Data and Trigger" AXI_W_RESPONSE "Data and Trigger" CLK_SRC "/plps_0/dspclk" SYSTEM_ILA "Auto" APC_EN "0" } \
#                                                          [get_bd_nets dspbstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/dspclk" SYSTEM_ILA "Auto" } \
#                                                          [get_bd_intf_nets dspregs_lb] {NON_AXI_SIGNALS "Data and Trigger" CLK_SRC "/plps_0/dspclk" SYSTEM_ILA "Auto" } \
#                                                          [get_bd_nets dsprstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/dspclk" SYSTEM_ILA "Auto" } \
#                                                          [get_bd_nets dspwstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/dspclk" SYSTEM_ILA "Auto" } \
#                                                          [get_bd_nets Q] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/dspclk" SYSTEM_ILA "Auto" } \
#                                                         ]
#connect_bd_net [get_bd_pins rst_psbd_600M/ext_reset_in] [get_bd_pins zynq_ultra_ps_e_0/pl_resetn0]
#}
#if {0} {
#
#
#connect_bd_net -net ctrlrstate_dbg [get_bd_pins ctrlregs/rstate_dbg]
#connect_bd_net -net ctrlbstate_dbg [get_bd_pins ctrlregs/bstate_dbg]
#connect_bd_net -net ctrlawstate_dbg [get_bd_pins ctrlregs/awstate_dbg]
#connect_bd_net -net ctrlarstate_dbg [get_bd_pins ctrlregs/arstate_dbg]
#connect_bd_net -net ctrlwstate_dbg [get_bd_pins ctrlregs/wstate_dbg]
#set_property HDL_ATTRIBUTE.DEBUG true [get_bd_nets {ctrlrstate_dbg ctrlbstate_dbg ctrlawstate_dbg ctrlarstate_dbg ctrlwstate_dbg }]
#set_property HDL_ATTRIBUTE.DEBUG true [get_bd_intf_nets {ctrlregs_lb axi_interconnect_1_M00_AXI}]
#apply_bd_automation -rule xilinx.com:bd_rule:debug -dict [list \
#                                                          [get_bd_nets ctrlarstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" } \
#                                                          [get_bd_nets ctrlawstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" } \
#                                                          [get_bd_intf_nets axi_interconnect_1_M00_AXI] {AXI_R_ADDRESS "Data and Trigger" AXI_R_DATA "Data and Trigger" AXI_W_ADDRESS "Data and Trigger" AXI_W_DATA "Data and Trigger" AXI_W_RESPONSE "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" APC_EN "0" } \
#                                                          [get_bd_nets ctrlbstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" } \
#                                                          [get_bd_intf_nets ctrlregs_lb] {NON_AXI_SIGNALS "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" } \
#                                                          [get_bd_nets ctrlrstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" } \
#                                                          [get_bd_nets ctrlwstate_dbg] {PROBE_TYPE "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" } \
#                                                         ]
#connect_bd_net [get_bd_pins zynq_ultra_ps_e_0/pl_resetn0] [get_bd_pins rst_psbd_100M/ext_reset_in]
#}
#if {0} {
#set_property HDL_ATTRIBUTE.DEBUG true [get_bd_intf_nets {axi_interconnect_1_M05_AXI rdrvenv1_ctrl_BRAM_PORTA}]
#apply_bd_automation -rule xilinx.com:bd_rule:debug -dict [list \
#                                                          [get_bd_intf_nets axi_interconnect_1_M05_AXI] {AXI_R_ADDRESS "Data and Trigger" AXI_R_DATA "Data and Trigger" AXI_W_ADDRESS "Data and Trigger" AXI_W_DATA "Data and Trigger" AXI_W_RESPONSE "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" APC_EN "0" } \
#                                                          [get_bd_intf_nets rdrvenv1_ctrl_BRAM_PORTA] {NON_AXI_SIGNALS "Data and Trigger" CLK_SRC "/plps_0/cfgclk" SYSTEM_ILA "Auto" } \
#                                                         ]
#}
#if {0} {
#set_property HDL_ATTRIBUTE.DEBUG true [get_bd_intf_nets {plps_0_rdrvenv0_ctrl}]
#apply_bd_automation -rule xilinx.com:bd_rule:debug -dict [list \
#                                                          [get_bd_intf_nets plps_0_rdrvenv0_ctrl] {NON_AXI_SIGNALS "Data and Trigger" CLK_SRC "None (Connect manually)" SYSTEM_ILA "Auto" } \
#                                                         ]
#connect_bd_net [get_bd_pins plps_0/dspclk] [get_bd_pins system_ila_0/clk]
##apply_bd_automation -rule xilinx.com:bd_rule:board -config { Manual_Source {Auto}}  [get_bd_pins rst_psbd_100M/ext_reset_in]
#}
#
source bdila.tcl
#assign_bd_address
assign_bd_address -import_from_file /home/ghuang/work/LBNL/qubic/gitlab/qubic/gateware/top/zcu216/address_map.csv
#source bram_range.tcl

#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_qdrvenv0_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_qdrvenv1_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_qdrvenv2_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_qdrvenv3_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_qdrvenv4_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_qdrvenv5_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_qdrvenv6_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_qdrvenv7_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_qdrvenv8_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_qdrvenv9_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_qdrvenva_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_qdrvenvb_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_qdrvenvc_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_qdrvenvd_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_qdrvenve_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_qdrvenvf_ctrl_Mem0}]
#set_property range 2M [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_rdrvenv0_ctrl_Mem0}]
#set_property range 2M [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_rdrvenv1_ctrl_Mem0}]
#set_property range 2M [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_rdrvenv2_ctrl_Mem0}]
#set_property range 2M [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_rdrvenv3_ctrl_Mem0}]
#set_property range 2M [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_rdrvenv4_ctrl_Mem0}]
#set_property range 2M [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_rdrvenv5_ctrl_Mem0}]
#set_property range 2M [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_rdrvenv6_ctrl_Mem0}]
#set_property range 2M [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_rdrvenv7_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_rdloenv0_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_rdloenv1_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_rdloenv2_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_rdloenv3_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_rdloenv4_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_rdloenv5_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_rdloenv6_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_rdloenv7_ctrl_Mem0}]
#set_property range 1M [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_command_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_acqbuf0_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_acqbuf1_ctrl_Mem0}]
#set_property range 512k [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_accbuf_ctrl_Mem0}]
validate_bd_design
save_bd_design
make_wrapper -files [get_files ./vivado_project/psbd/psbd.srcs/sources_1/bd/psbd/psbd.bd] -top
add_files -norecurse ./vivado_project/psbd/psbd.gen/sources_1/bd/psbd/hdl/psbd_wrapper.v

 

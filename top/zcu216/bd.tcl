create_bd_design "psbd"
open_bd_design {./vivado_project/psbd.srcs/sources_1/bd/psbd/psbd.bd}
source ps.tcl
set_property  ip_repo_paths  {./vivado_project/plip ./vivado_project/iflocalbus} [current_project]
update_ip_catalog -rebuild
create_bd_cell -type ip -vlnv user.org:user:plps:1.0 plps_0
create_bd_intf_port -mode Master -vlnv fpga:user:fpga_rtl:1.0 fpga
create_bd_cell -type ip -vlnv user.org:user:axi4lite_lb:1.0 ctrlregs
create_bd_cell -type ip -vlnv user.org:user:axi4lite_lb:1.0 dspregs
create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect:2.1 axi_interconnect_1
create_bd_cell -type ip -vlnv xilinx.com:ip:axi_clock_converter:2.1 axi_clock_converter_0
set_property -dict [list CONFIG.NUM_MI {8}] [get_bd_cells axi_interconnect_1]
connect_bd_intf_net [get_bd_intf_ports fpga] [get_bd_intf_pins plps_0/fpga]
connect_bd_net [get_bd_pins zynq_ultra_ps_e_0/maxihpm0_lpd_aclk] [get_bd_pins zynq_ultra_ps_e_0/pl_clk0]
connect_bd_net [get_bd_pins axi_interconnect_1/ACLK] [get_bd_pins axi_interconnect_1/S00_ACLK] -boundary_type upper
connect_bd_net [get_bd_pins axi_interconnect_1/ACLK] [get_bd_pins zynq_ultra_ps_e_0/pl_clk0]
connect_bd_intf_net [get_bd_intf_pins zynq_ultra_ps_e_0/M_AXI_HPM0_LPD] -boundary_type upper [get_bd_intf_pins axi_interconnect_1/S00_AXI]
connect_bd_intf_net -boundary_type upper [get_bd_intf_pins axi_interconnect_1/M00_AXI] [get_bd_intf_pins ctrlregs/s_axi]
connect_bd_intf_net [get_bd_intf_pins ctrlregs/lb] [get_bd_intf_pins plps_0/lb1]
connect_bd_intf_net [get_bd_intf_pins dspregs/lb] [get_bd_intf_pins plps_0/lb2]

connect_bd_net [get_bd_pins plps_0/psresetn00] [get_bd_pins axi_interconnect_1/ARESETN]
connect_bd_net [get_bd_pins plps_0/psresetn01] [get_bd_pins axi_interconnect_1/S00_ARESETN]
connect_bd_net [get_bd_pins zynq_ultra_ps_e_0/pl_resetn0] [get_bd_pins plps_0/aresetn]
connect_bd_net [get_bd_pins plps_0/pl_clk0] [get_bd_pins zynq_ultra_ps_e_0/pl_clk0]
set_property -dict [list CONFIG.FREQ_HZ {100000000}] [get_bd_pins plps_0/cfgclk]
set_property -dict [list CONFIG.FREQ_HZ {600000000}] [get_bd_pins plps_0/dspclk]

set_property -dict [list CONFIG.ADDR_WIDTH {10}] [get_bd_cells dspregs]
set_property -dict [list CONFIG.ADDR_WIDTH {10}] [get_bd_cells ctrlregs]
set_property -dict [list CONFIG.ADDR_WIDTH {10}] [get_bd_cells plps_0]

create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 bram_read0
create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_bram_read0
set_property -dict [list CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells bram_read0]
set_property -dict [list CONFIG.DATA_WIDTH {64}] [get_bd_cells bram_read0]
set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {64}  CONFIG.Write_Width_B {64}] [get_bd_cells blk_mem_bram_read0]

create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 bram_read1
create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_bram_read1
set_property -dict [list CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells bram_read1]
set_property -dict [list CONFIG.DATA_WIDTH {64}] [get_bd_cells bram_read1]
set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {64}  CONFIG.Write_Width_B {64}] [get_bd_cells blk_mem_bram_read1]


create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 bram_write0
create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_bram_write0
set_property -dict [list CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells bram_write0]
set_property -dict [list CONFIG.DATA_WIDTH {256}] [get_bd_cells bram_write0]
set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {128}  CONFIG.Write_Width_B {128}] [get_bd_cells blk_mem_bram_write0]

create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 bram_write1
create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_bram_write1
set_property -dict [list CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells bram_write1]
set_property -dict [list CONFIG.DATA_WIDTH {256}] [get_bd_cells bram_write1]
set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {128}  CONFIG.Write_Width_B {128}] [get_bd_cells blk_mem_bram_write1]

create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 bram_write2
create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_bram_write2
set_property -dict [list CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells bram_write2]
set_property -dict [list CONFIG.DATA_WIDTH {256}] [get_bd_cells bram_write2]
set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {128}  CONFIG.Write_Width_B {128} ] [get_bd_cells blk_mem_bram_write2]


create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 bram_write3
create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 blk_mem_bram_write3
set_property -dict [list CONFIG.SINGLE_PORT_BRAM {1}] [get_bd_cells bram_write3]
set_property -dict [list CONFIG.DATA_WIDTH {256}] [get_bd_cells bram_write3]
set_property -dict [list CONFIG.use_bram_block {BRAM_Controller} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Enable_32bit_Address {true} CONFIG.Read_Width_B {128}  CONFIG.Write_Width_B {128} ] [get_bd_cells blk_mem_bram_write3]

connect_bd_intf_net [get_bd_intf_pins bram_read0/BRAM_PORTA] [get_bd_intf_pins blk_mem_bram_read0/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins bram_read0/S_AXI] -boundary_type upper [get_bd_intf_pins axi_interconnect_1/M02_AXI]
connect_bd_intf_net -boundary_type upper [get_bd_intf_pins axi_interconnect_1/M03_AXI] [get_bd_intf_pins bram_read1/S_AXI]
connect_bd_intf_net [get_bd_intf_pins bram_read1/BRAM_PORTA] [get_bd_intf_pins blk_mem_bram_read1/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins blk_mem_bram_read0/BRAM_PORTB] [get_bd_intf_pins plps_0/bram_read0]
connect_bd_intf_net [get_bd_intf_pins blk_mem_bram_read1/BRAM_PORTB] [get_bd_intf_pins plps_0/bram_read1]
connect_bd_intf_net [get_bd_intf_pins bram_write0/BRAM_PORTA] [get_bd_intf_pins blk_mem_bram_write0/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins bram_write1/BRAM_PORTA] [get_bd_intf_pins blk_mem_bram_write1/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins bram_write2/BRAM_PORTA] [get_bd_intf_pins blk_mem_bram_write2/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins bram_write3/BRAM_PORTA] [get_bd_intf_pins blk_mem_bram_write3/BRAM_PORTA]
connect_bd_intf_net [get_bd_intf_pins plps_0/bram_write0] [get_bd_intf_pins blk_mem_bram_write0/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/bram_write1] [get_bd_intf_pins blk_mem_bram_write1/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/bram_write2] [get_bd_intf_pins blk_mem_bram_write2/BRAM_PORTB]
connect_bd_intf_net [get_bd_intf_pins plps_0/bram_write3] [get_bd_intf_pins blk_mem_bram_write3/BRAM_PORTB]

connect_bd_intf_net -boundary_type upper [get_bd_intf_pins axi_interconnect_1/M04_AXI] [get_bd_intf_pins bram_write0/S_AXI]
connect_bd_intf_net -boundary_type upper [get_bd_intf_pins axi_interconnect_1/M05_AXI] [get_bd_intf_pins bram_write1/S_AXI]
connect_bd_intf_net -boundary_type upper [get_bd_intf_pins axi_interconnect_1/M06_AXI] [get_bd_intf_pins bram_write2/S_AXI] 
connect_bd_intf_net -boundary_type upper [get_bd_intf_pins axi_interconnect_1/M07_AXI] [get_bd_intf_pins bram_write3/S_AXI] 
connect_bd_intf_net [get_bd_intf_pins axi_clock_converter_0/M_AXI] [get_bd_intf_pins dspregs/s_axi]
connect_bd_intf_net [get_bd_intf_pins axi_clock_converter_0/S_AXI] [get_bd_intf_pins axi_interconnect_1/M01_AXI]

connect_bd_net [get_bd_pins plps_0/dspclk] [get_bd_pins dspregs/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/dspclk] [get_bd_pins axi_clock_converter_0/m_axi_aclk]
connect_bd_net [get_bd_pins plps_0/dspresetn00] [get_bd_pins dspregs/s_axi_aresetn] 
connect_bd_net [get_bd_pins plps_0/dspresetn01] [get_bd_pins axi_clock_converter_0/m_axi_aresetn]

connect_bd_net [get_bd_pins axi_interconnect_1/M01_ACLK] [get_bd_pins plps_0/cfgclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M00_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M02_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M03_ACLK] 
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M04_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M05_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M06_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M07_ACLK]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins ctrlregs/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins bram_read0/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins bram_read1/s_axi_aclk] 
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins bram_write0/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins bram_write1/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins bram_write2/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins bram_write3/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_clock_converter_0/s_axi_aclk]
connect_bd_net [get_bd_pins plps_0/cfgresetn00] [get_bd_pins axi_interconnect_1/M00_ARESETN] 
connect_bd_net [get_bd_pins plps_0/cfgresetn01] [get_bd_pins ctrlregs/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn02] [get_bd_pins bram_read0/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn03] [get_bd_pins bram_read1/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn04] [get_bd_pins axi_interconnect_1/M02_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn05] [get_bd_pins axi_interconnect_1/M03_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn06] [get_bd_pins bram_write0/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn07] [get_bd_pins bram_write1/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn08] [get_bd_pins bram_write2/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn09] [get_bd_pins bram_write3/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn10] [get_bd_pins axi_interconnect_1/M04_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn11] [get_bd_pins axi_interconnect_1/M05_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn12] [get_bd_pins axi_interconnect_1/M06_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn13] [get_bd_pins axi_interconnect_1/M07_ARESETN]
connect_bd_net [get_bd_pins plps_0/cfgresetn14] [get_bd_pins axi_clock_converter_0/s_axi_aresetn]
connect_bd_net [get_bd_pins plps_0/cfgresetn15] [get_bd_pins axi_interconnect_1/M01_ARESETN]


assign_bd_address
validate_bd_design
save_bd_design
make_wrapper -files [get_files ./vivado_project/psbd/psbd.srcs/sources_1/bd/psbd/psbd.bd] -top
add_files -norecurse ./vivado_project/psbd/psbd.gen/sources_1/bd/psbd/hdl/psbd_wrapper.v
#add_files -fileset constrs_1 -norecurse fpga.xdc
#add_files -fileset constrs_1 -norecurse timing.xdc
#
#source ../../submodules/tools/synimpbit.tcl
#synimpbit psbd 11
#set_property top psbd_wrapper [current_fileset]
#write_hw_platform -fixed -include_bit -force -file psbd.xsa
#open_run impl_1
#report_timing_summary -delay_type min_max -report_unconstrained -check_timing_verbose -max_paths 10 -input_pins -routable_nets -name timing_1
#close_project



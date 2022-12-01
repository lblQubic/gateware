set target "psbd"
set part "xczu49dr-ffvf1760-2-e"
set outputdir ./vivado_project/$target/
set depd ${target}.d
source ../../submodules/tools/proj.tcl
source ../../submodules/tools/depsrc.tcl
source ../../submodules/tools/synimpbit.tcl
proj ${target} ${part} ${outputdir} ${depd}
set_param general.maxThreads 11
if {1} {
synimpbit $target 11
set_property top psbd_wrapper [current_fileset]
write_hw_platform -fixed -include_bit -force -file psbd.xsa
open_run impl_1
report_timing_summary -delay_type min_max -report_unconstrained -check_timing_verbose -max_paths 10 -input_pins -routable_nets -name timing_1
close_project
}

#create_project psbd ./vivado_project/psbd -part xczu49dr-ffvf1760-2-e -force
#create_bd_design "psbd"
#open_bd_design {./vivado_project/psbd.srcs/sources_1/bd/psbd/psbd.bd}
#source ps.tcl
#set_property  ip_repo_paths  {./vivado_project/plip ./vivado_project/iflocalbus} [current_project]
#update_ip_catalog -rebuild
#create_bd_cell -type ip -vlnv user.org:user:plps:1.0 plps_0
#create_bd_intf_port -mode Master -vlnv fpga:user:fpga_rtl:1.0 fpga
#create_bd_cell -type ip -vlnv user.org:user:axi4lite_lb:1.0 ctrlregs
#create_bd_cell -type ip -vlnv user.org:user:axi4lite_lb:1.0 dspregs
#create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect:2.1 axi_interconnect_1
#set_property -dict [list CONFIG.NUM_MI {2}] [get_bd_cells axi_interconnect_1]
#connect_bd_intf_net [get_bd_intf_ports fpga] [get_bd_intf_pins plps_0/fpga]
#connect_bd_net [get_bd_pins zynq_ultra_ps_e_0/maxihpm0_lpd_aclk] [get_bd_pins zynq_ultra_ps_e_0/pl_clk0]
#connect_bd_net [get_bd_pins axi_interconnect_1/ACLK] [get_bd_pins axi_interconnect_1/S00_ACLK] -boundary_type upper
#connect_bd_net [get_bd_pins axi_interconnect_1/ACLK] [get_bd_pins zynq_ultra_ps_e_0/pl_clk0]
#connect_bd_intf_net [get_bd_intf_pins zynq_ultra_ps_e_0/M_AXI_HPM0_LPD] -boundary_type upper [get_bd_intf_pins axi_interconnect_1/S00_AXI]
#connect_bd_intf_net -boundary_type upper [get_bd_intf_pins axi_interconnect_1/M00_AXI] [get_bd_intf_pins ctrlregs/s_axi]
#connect_bd_intf_net -boundary_type upper [get_bd_intf_pins axi_interconnect_1/M01_AXI] [get_bd_intf_pins dspregs/s_axi]
#connect_bd_intf_net [get_bd_intf_pins ctrlregs/lb] [get_bd_intf_pins plps_0/lb1]
#connect_bd_intf_net [get_bd_intf_pins dspregs/lb] [get_bd_intf_pins plps_0/lb2]
#connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins axi_interconnect_1/M00_ACLK]
#connect_bd_net [get_bd_pins plps_0/cfgclk] [get_bd_pins ctrlregs/s_axi_aclk]
#connect_bd_net [get_bd_pins plps_0/dspclk] [get_bd_pins dspregs/s_axi_aclk]
#connect_bd_net [get_bd_pins plps_0/dspclk] [get_bd_pins axi_interconnect_1/M01_ACLK]
#
#open_bd_design {/home/ghuang/pynqtop/zcu216/rfsoctest/boards/zcu216/vivado_project/psbd/psbd.srcs/sources_1/bd/psbd/psbd.bd}
#connect_bd_net [get_bd_pins plps_0/psresetn00] [get_bd_pins axi_interconnect_1/ARESETN]
#connect_bd_net [get_bd_pins plps_0/psresetn01] [get_bd_pins axi_interconnect_1/S00_ARESETN]
#connect_bd_net [get_bd_pins axi_interconnect_1/M00_ARESETN] [get_bd_pins plps_0/cfgresetn00]
#connect_bd_net [get_bd_pins axi_interconnect_1/M01_ARESETN] [get_bd_pins plps_0/dspresetn00]
#connect_bd_net [get_bd_pins ctrlregs/s_axi_aresetn] [get_bd_pins plps_0/cfgresetn01]
#connect_bd_net [get_bd_pins dspregs/s_axi_aresetn] [get_bd_pins plps_0/dspresetn01]
#connect_bd_net [get_bd_pins zynq_ultra_ps_e_0/pl_resetn0] [get_bd_pins plps_0/aresetn]
#connect_bd_net [get_bd_pins plps_0/pl_clk0] [get_bd_pins zynq_ultra_ps_e_0/pl_clk0]
#validate_bd_design
#set_property -dict [list CONFIG.FREQ_HZ {100000000}] [get_bd_pins plps_0/cfgclk]
#set_property -dict [list CONFIG.FREQ_HZ {600000000}] [get_bd_pins plps_0/dspclk]
#
#set_property -dict [list CONFIG.ADDR_WIDTH {10}] [get_bd_cells dspregs]
#set_property -dict [list CONFIG.ADDR_WIDTH {10}] [get_bd_cells ctrlregs]
#set_property -dict [list CONFIG.ADDR_WIDTH {10}] [get_bd_cells plps_0]
#
#
#assign_bd_address
#validate_bd_design
#save_bd_design
#make_wrapper -files [get_files /home/ghuang/pynqtop/zcu216/rfsoctest/boards/zcu216/vivado_project/psbd/psbd.srcs/sources_1/bd/psbd/psbd.bd] -top
#add_files -norecurse /home/ghuang/pynqtop/zcu216/rfsoctest/boards/zcu216/vivado_project/psbd/psbd.gen/sources_1/bd/psbd/hdl/psbd_wrapper.v
#add_files -fileset constrs_1 -norecurse fpga.xdc
#add_files -fileset constrs_1 -norecurse timing.xdc
#
#source ../../submodules/tools/synimpbit.tcl
##synimpbit psbd 11
##set_property top psbd_wrapper [current_fileset]
##write_hw_platform -fixed -include_bit -force -file psbd.xsa
##open_run impl_1
##report_timing_summary -delay_type min_max -report_unconstrained -check_timing_verbose -max_paths 10 -input_pins -routable_nets -name timing_1
##close_project

proc clkbus {clkname} {
	ipx::add_bus_interface ${clkname} [ipx::current_core]
	set_property abstraction_type_vlnv xilinx.com:signal:clock_rtl:1.0 [ipx::get_bus_interfaces ${clkname} -of_objects [ipx::current_core]]
	set_property bus_type_vlnv xilinx.com:signal:clock:1.0 [ipx::get_bus_interfaces ${clkname} -of_objects [ipx::current_core]]
	set_property interface_mode master [ipx::get_bus_interfaces ${clkname} -of_objects [ipx::current_core]]
	ipx::add_bus_parameter FREQ_HZ [ipx::get_bus_interfaces ${clkname} -of_objects [ipx::current_core]]
	ipx::add_port_map CLK [ipx::get_bus_interfaces ${clkname} -of_objects [ipx::current_core]]
	set_property physical_name ${clkname} [ipx::get_port_maps CLK -of_objects [ipx::get_bus_interfaces ${clkname} -of_objects [ipx::current_core]]]
	ipx::remove_bus_parameter FREQ_HZ [ipx::get_bus_interfaces ${clkname} -of_objects [ipx::current_core]]
}

proc iopin {pin masterdir} {
	ipx::add_bus_abstraction_port ${pin} [ipx::current_busabs]
	if [string equal $masterdir "in"] {
		set_property -dict {default_value {0} master_presence {required} master_direction {in} slave_presence {required} slave_direction {out}} [ipx::get_bus_abstraction_ports ${pin} -of_objects [ipx::current_busabs]]
	} elseif [string equal $masterdir "out"] {
		set slavedir "in"
		set_property -dict {default_value {0} master_presence {required} master_direction {out} slave_presence {required} slave_direction {in}} [ipx::get_bus_abstraction_ports ${pin} -of_objects [ipx::current_busabs]]

	} elseif [string equal $masterdir "inout"] {
		set slavedir "inout"
		set_property -dict {default_value {0} master_presence {required} master_direction {inout} slave_presence {required} slave_direction {inout}} [ipx::get_bus_abstraction_ports ${pin} -of_objects [ipx::current_busabs]]

	} else {
		puts "direction wrong"
	}
}

proc fpgapinmap {pin} {
	ipx::add_port_map ${pin} [ipx::get_bus_interfaces fpga -of_objects [ipx::current_core]]
	set_property physical_name FPGA_${pin} [ipx::get_port_maps ${pin} -of_objects [ipx::get_bus_interfaces fpga -of_objects [ipx::current_core]]]
}
proc fpgamap {pindirfile} {
	set fp [open $pindirfile r]
	set str [read $fp]
	foreach pin [split $str "\n"] {
		fpgapinmap [lindex $pin 0]
	}
}

proc fpgaif {pindirfile} {

	ipx::create_abstraction_definition fpga user fpga_rtl 1.0
	ipx::create_bus_definition fpga user fpga 1.0
	set_property xml_file_name ./vivado_project/plip/fpga_rtl.xml [ipx::current_busabs]
	set_property xml_file_name ./vivado_project/plip/fpga.xml [ipx::current_busdef]
	set_property bus_type_vlnv fpga:user:fpga:1.0 [ipx::current_busabs]

	set fp [open $pindirfile r]
	set str [read $fp]
	foreach pin [split $str "\n"] {
		iopin [lindex $pin 0] [lindex $pin 1]
	}

	ipx::save_bus_definition [ipx::current_busdef]
	set_property bus_type_vlnv fpga:user:fpga:1.0 [ipx::current_busabs]
	ipx::save_abstraction_definition [ipx::current_busabs]
}
proc bram_map {busname inst} {
	set brampins {RST CLK DIN EN DOUT WE ADDR}
	foreach pin $brampins {
		ipx::add_port_map $pin [ipx::get_bus_interfaces $busname -of_objects [ipx::current_core]]
		set_property physical_name ${inst}_[string tolower $pin] [ipx::get_port_maps $pin -of_objects [ipx::get_bus_interfaces $busname -of_objects [ipx::current_core]]]
	}
}


#open_project ./vivado_project/plframe/plframe.xpr
ipx::package_project -root_dir ./vivado_project/plip -vendor user.org -library user -taxonomy /UserIP -import_files -set_current false -force -quiet
ipx::package_project -root_dir ./vivado_project/plip -vendor user.org -library user -taxonomy /UserIP -import_files -set_current false -force
ipx::unload_core ./vivado_project/plip/component.xml
ipx::open_ipxact_file ./vivado_project/plip/component.xml
#ipx::edit_ip_in_project -upgrade true -name plip -directory ./vivado_project/plip ./vivado_project/plip/component.xml

ipx::add_bus_interface bram_read0 [ipx::current_core]
set_property abstraction_type_vlnv xilinx.com:interface:bram_rtl:1.0 [ipx::get_bus_interfaces bram_read0 -of_objects [ipx::current_core]]
set_property bus_type_vlnv xilinx.com:interface:bram:1.0 [ipx::get_bus_interfaces bram_read0 -of_objects [ipx::current_core]]
set_property interface_mode master [ipx::get_bus_interfaces bram_read0 -of_objects [ipx::current_core]]
bram_map bram_read0 BRAM_READ0
#
ipx::add_bus_interface bram_read1 [ipx::current_core]
set_property abstraction_type_vlnv xilinx.com:interface:bram_rtl:1.0 [ipx::get_bus_interfaces bram_read1 -of_objects [ipx::current_core]]
set_property bus_type_vlnv xilinx.com:interface:bram:1.0 [ipx::get_bus_interfaces bram_read1 -of_objects [ipx::current_core]]
set_property interface_mode master [ipx::get_bus_interfaces bram_read1 -of_objects [ipx::current_core]]
bram_map bram_read1 BRAM_READ1

ipx::add_bus_interface bram_write0 [ipx::current_core]
set_property abstraction_type_vlnv xilinx.com:interface:bram_rtl:1.0 [ipx::get_bus_interfaces bram_write0 -of_objects [ipx::current_core]]
set_property bus_type_vlnv xilinx.com:interface:bram:1.0 [ipx::get_bus_interfaces bram_write0 -of_objects [ipx::current_core]]
set_property interface_mode master [ipx::get_bus_interfaces bram_write0 -of_objects [ipx::current_core]]
bram_map bram_write0 BRAM_WRITE0

ipx::add_bus_interface bram_write1 [ipx::current_core]
set_property abstraction_type_vlnv xilinx.com:interface:bram_rtl:1.0 [ipx::get_bus_interfaces bram_write1 -of_objects [ipx::current_core]]
set_property bus_type_vlnv xilinx.com:interface:bram:1.0 [ipx::get_bus_interfaces bram_write1 -of_objects [ipx::current_core]]
set_property interface_mode master [ipx::get_bus_interfaces bram_write1 -of_objects [ipx::current_core]]
bram_map bram_write1 BRAM_WRITE1

ipx::add_bus_interface bram_write2 [ipx::current_core]
set_property abstraction_type_vlnv xilinx.com:interface:bram_rtl:1.0 [ipx::get_bus_interfaces bram_write2 -of_objects [ipx::current_core]]
set_property bus_type_vlnv xilinx.com:interface:bram:1.0 [ipx::get_bus_interfaces bram_write2 -of_objects [ipx::current_core]]
set_property interface_mode master [ipx::get_bus_interfaces bram_write2 -of_objects [ipx::current_core]]
bram_map bram_write2 BRAM_WRITE2

ipx::add_bus_interface bram_write3 [ipx::current_core]
set_property abstraction_type_vlnv xilinx.com:interface:bram_rtl:1.0 [ipx::get_bus_interfaces bram_write3 -of_objects [ipx::current_core]]
set_property bus_type_vlnv xilinx.com:interface:bram:1.0 [ipx::get_bus_interfaces bram_write3 -of_objects [ipx::current_core]]
set_property interface_mode master [ipx::get_bus_interfaces bram_write3 -of_objects [ipx::current_core]]
bram_map bram_write3 BRAM_WRITE3

#source fpga.tcl
#set fp [open "fpga_pins" r]
#set pins [read $fp]
#close $fp
#set pins {G12 G11 B26 E24 G26 J23 L24 P21 AV21 AR21 C13 D14 D12 D13 AW18 AV18 BA19 AP21 AN14 AP16 AP14 AU16 AW12 AY16 BB12 E25 J14 J13 H13 G13 H15 H14 G16 N16 M16 N15 M15 N14 M14 M17 L17}
fpgaif "fpga_master_dir"
#$pins
set_property master_direction in [ipx::get_bus_abstraction_ports G12 -of_objects [ipx::current_busabs]]
set_property master_direction in [ipx::get_bus_abstraction_ports G11 -of_objects [ipx::current_busabs]]
set_property slave_direction in [ipx::get_bus_abstraction_ports G12 -of_objects [ipx::current_busabs]]
set_property slave_direction in [ipx::get_bus_abstraction_ports G11 -of_objects [ipx::current_busabs]]
ipx::save_bus_definition [ipx::current_busdef]
set_property bus_type_vlnv fpga:user:fpga:1.0 [ipx::current_busabs]
ipx::save_abstraction_definition [ipx::current_busabs]
set_property  ip_repo_paths  ./vivado_project/plip [current_project]
update_ip_catalog
ipx::add_bus_interface fpga [ipx::current_core]
set_property abstraction_type_vlnv fpga:user:fpga_rtl:1.0 [ipx::get_bus_interfaces fpga -of_objects [ipx::current_core]]
set_property bus_type_vlnv fpga:user:fpga:1.0 [ipx::get_bus_interfaces fpga -of_objects [ipx::current_core]]
set_property interface_mode master [ipx::get_bus_interfaces fpga -of_objects [ipx::current_core]]
ipx::add_bus_parameter NUM_READ_OUTSTANDING [ipx::get_bus_interfaces fpga -of_objects [ipx::current_core]]
ipx::add_bus_parameter NUM_WRITE_OUTSTANDING [ipx::get_bus_interfaces fpga -of_objects [ipx::current_core]]
set_property abstraction_type_vlnv fpga:user:fpga_rtl:1.0 [ipx::get_bus_interfaces fpga -of_objects [ipx::current_core]]
set_property bus_type_vlnv fpga:user:fpga:1.0 [ipx::get_bus_interfaces fpga -of_objects [ipx::current_core]]
fpgamap "fpga_master_dir"

set_property ip_repo_paths {vivado_project/iflocalbus} [current_project]
update_ip_catalog
ipx::add_bus_interface lb1 [ipx::current_core]
set_property abstraction_type_vlnv user:user:iflocalbus_rtl:1.0 [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]
set_property bus_type_vlnv user:user:iflocalbus:1.0 [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]
ipx::add_port_map waddr [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]
set_property physical_name lb1_waddr [ipx::get_port_maps waddr -of_objects [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]]
ipx::add_port_map wren [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]
set_property physical_name lb1_wvalid [ipx::get_port_maps wren -of_objects [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]]
ipx::add_port_map clk [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]
set_property physical_name lb1_clk [ipx::get_port_maps clk -of_objects [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]]
ipx::add_port_map raddr [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]
set_property physical_name lb1_raddr [ipx::get_port_maps raddr -of_objects [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]]
ipx::add_port_map rdata [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]
set_property physical_name lb1_rdata [ipx::get_port_maps rdata -of_objects [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]]
ipx::add_port_map wstrb [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]
set_property physical_name lb1_wstrb [ipx::get_port_maps wstrb -of_objects [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]]
ipx::add_port_map wdata [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]
set_property physical_name lb1_wdata [ipx::get_port_maps wdata -of_objects [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]]
ipx::add_port_map aresetn [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]
set_property physical_name lb1_aresetn [ipx::get_port_maps aresetn -of_objects [ipx::get_bus_interfaces lb1 -of_objects [ipx::current_core]]]
ipx::add_bus_interface lb2 [ipx::current_core]
set_property abstraction_type_vlnv user:user:iflocalbus_rtl:1.0 [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]
set_property bus_type_vlnv user:user:iflocalbus:1.0 [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]
ipx::add_port_map waddr [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]
set_property physical_name lb2_waddr [ipx::get_port_maps waddr -of_objects [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]]
ipx::add_port_map wren [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]
set_property physical_name lb2_wvalid [ipx::get_port_maps wren -of_objects [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]]
ipx::add_port_map clk [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]
set_property physical_name lb2_clk [ipx::get_port_maps clk -of_objects [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]]
ipx::add_port_map raddr [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]
set_property physical_name lb2_raddr [ipx::get_port_maps raddr -of_objects [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]]
ipx::add_port_map rdata [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]
set_property physical_name lb2_rdata [ipx::get_port_maps rdata -of_objects [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]]
ipx::add_port_map wstrb [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]
set_property physical_name lb2_wstrb [ipx::get_port_maps wstrb -of_objects [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]]
ipx::add_port_map wdata [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]
set_property physical_name lb2_wdata [ipx::get_port_maps wdata -of_objects [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]]
ipx::add_port_map aresetn [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]
set_property physical_name lb2_aresetn [ipx::get_port_maps aresetn -of_objects [ipx::get_bus_interfaces lb2 -of_objects [ipx::current_core]]]
set_property core_revision 2 [ipx::current_core]
ipx::create_xgui_files [ipx::current_core]
ipx::update_checksums [ipx::current_core]
ipx::check_integrity [ipx::current_core]
ipx::save_core [ipx::current_core]
update_ip_catalog

clkbus cfgclk
clkbus dspclk

#ipx::add_bus_interface cfgclk [ipx::current_core]
#set_property abstraction_type_vlnv xilinx.com:signal:clock_rtl:1.0 [ipx::get_bus_interfaces cfgclk -of_objects [ipx::current_core]]
#set_property bus_type_vlnv xilinx.com:signal:clock:1.0 [ipx::get_bus_interfaces cfgclk -of_objects [ipx::current_core]]
#set_property interface_mode master [ipx::get_bus_interfaces cfgclk -of_objects [ipx::current_core]]
#ipx::add_bus_parameter FREQ_HZ [ipx::get_bus_interfaces cfgclk -of_objects [ipx::current_core]]
#ipx::add_port_map CLK [ipx::get_bus_interfaces cfgclk -of_objects [ipx::current_core]]
#set_property physical_name cfgclk [ipx::get_port_maps CLK -of_objects [ipx::get_bus_interfaces cfgclk -of_objects [ipx::current_core]]]
#ipx::remove_bus_parameter FREQ_HZ [ipx::get_bus_interfaces cfgclk -of_objects [ipx::current_core]]
#
#ipx::add_bus_interface dspclk [ipx::current_core]
#set_property abstraction_type_vlnv xilinx.com:signal:clock_rtl:1.0 [ipx::get_bus_interfaces dspclk -of_objects [ipx::current_core]]
#set_property bus_type_vlnv xilinx.com:signal:clock:1.0 [ipx::get_bus_interfaces dspclk -of_objects [ipx::current_core]]
#set_property interface_mode master [ipx::get_bus_interfaces dspclk -of_objects [ipx::current_core]]
#ipx::add_bus_parameter FREQ_HZ [ipx::get_bus_interfaces dspclk -of_objects [ipx::current_core]]
#ipx::add_port_map CLK [ipx::get_bus_interfaces dspclk -of_objects [ipx::current_core]]
#set_property physical_name dspclk [ipx::get_port_maps CLK -of_objects [ipx::get_bus_interfaces dspclk -of_objects [ipx::current_core]]]
#ipx::remove_bus_parameter FREQ_HZ [ipx::get_bus_interfaces dspclk -of_objects [ipx::current_core]]


ipx::remove_bus_interface BRAM_PORTA_rst [ipx::current_core]
ipx::remove_bus_interface BRAM_PORTA_clk [ipx::current_core]
ipx::remove_bus_interface DAC20_M_AXIS_ACLK [ipx::current_core]
ipx::remove_bus_interface DAC31_M_AXIS_ACLK [ipx::current_core]
ipx::remove_bus_interface s00_axi_aclk [ipx::current_core]


ipx::add_bus_interface clkadc2_300 [ipx::current_core]
set_property abstraction_type_vlnv xilinx.com:signal:clock_rtl:1.0 [ipx::get_bus_interfaces clkadc2_300 -of_objects [ipx::current_core]]
set_property bus_type_vlnv xilinx.com:signal:clock:1.0 [ipx::get_bus_interfaces clkadc2_300 -of_objects [ipx::current_core]]
set_property interface_mode master [ipx::get_bus_interfaces clkadc2_300 -of_objects [ipx::current_core]]
#ipx::add_bus_parameter FREQ_HZ [ipx::get_bus_interfaces clkadc2_300 -of_objects [ipx::current_core]]
ipx::remove_bus_parameter FREQ_HZ [ipx::get_bus_interfaces clkadc2_300 -of_objects [ipx::current_core]]
ipx::add_port_map CLK [ipx::get_bus_interfaces clkadc2_300 -of_objects [ipx::current_core]]
set_property physical_name clkadc2_300 [ipx::get_port_maps CLK -of_objects [ipx::get_bus_interfaces clkadc2_300 -of_objects [ipx::current_core]]]
ipx::add_bus_interface clkadc2_600 [ipx::current_core]
set_property abstraction_type_vlnv xilinx.com:signal:clock_rtl:1.0 [ipx::get_bus_interfaces clkadc2_600 -of_objects [ipx::current_core]]
set_property bus_type_vlnv xilinx.com:signal:clock:1.0 [ipx::get_bus_interfaces clkadc2_600 -of_objects [ipx::current_core]]
set_property interface_mode master [ipx::get_bus_interfaces clkadc2_600 -of_objects [ipx::current_core]]
#ipx::add_bus_parameter FREQ_HZ [ipx::get_bus_interfaces clkadc2_600 -of_objects [ipx::current_core]]
ipx::remove_bus_parameter FREQ_HZ [ipx::get_bus_interfaces clkadc2_600 -of_objects [ipx::current_core]]
ipx::add_port_map CLK [ipx::get_bus_interfaces clkadc2_600 -of_objects [ipx::current_core]]
set_property physical_name clkadc2_600 [ipx::get_port_maps CLK -of_objects [ipx::get_bus_interfaces clkadc2_600 -of_objects [ipx::current_core]]]

#ipx::add_bus_parameter FREQ_HZ [ipx::get_bus_interfaces lb1_aclk -of_objects [ipx::current_core]]
#ipx::add_bus_parameter FREQ_HZ [ipx::get_bus_interfaces lb2_aclk -of_objects [ipx::current_core]]

#ipx::add_bus_parameter FREQ_HZ [ipx::get_bus_interfaces s00_axi_aclk -of_objects [ipx::current_core]]
#ipx::remove_bus_interface s00_axi_aresetn [ipx::current_core]
#ipx::remove_bus_interface s00_axi_aclk [ipx::current_core]
##set_property core_revision 2 [ipx::current_core]
ipx::merge_project_changes ports [ipx::current_core]
ipx::update_source_project_archive -component [ipx::current_core]
#ipx::create_xgui_files [ipx::current_core]
ipx::update_checksums [ipx::current_core]
ipx::check_integrity [ipx::current_core]
ipx::save_core [ipx::current_core]
#ipx::move_temp_component_back -component [ipx::current_core]
#close_project


#WARNING: [Common 17-576] 'generated_files' is deprecated. This option will be removed in an upcoming release.
#WARNING: [IP_Flow 19-4656] Synthesis file group is packaged with a Dependency property value '/tmp/pynqtop/zcu216/rfsoctest/boards/zcu216' although it may not be recognized as a synthesis -include_dir property after IP delivery.
#WARNING: [IP_Flow 19-3833] Unreferenced file from the top module is not packaged: '/tmp/pynqtop/zcu216/rfsoctest/axi4lite.sv'.:q


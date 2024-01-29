proc bram_map {busname inst} {
	set brampins {RST CLK DIN EN DOUT WE ADDR}
	foreach pin $brampins {
		ipx::add_port_map $pin [ipx::get_bus_interfaces $busname -of_objects [ipx::current_core]]
		set_property physical_name ${inst}_[string tolower $pin] [ipx::get_port_maps $pin -of_objects [ipx::get_bus_interfaces $busname -of_objects [ipx::current_core]]]
	}
}
proc brambus {bramname} {
	ipx::add_bus_interface ${bramname} [ipx::current_core]
	set_property abstraction_type_vlnv xilinx.com:interface:bram_rtl:1.0 [ipx::get_bus_interfaces ${bramname} -of_objects [ipx::current_core]]
	set_property bus_type_vlnv xilinx.com:interface:bram:1.0 [ipx::get_bus_interfaces ${bramname} -of_objects [ipx::current_core]]
	set_property interface_mode master [ipx::get_bus_interfaces ${bramname} -of_objects [ipx::current_core]]
	bram_map ${bramname} [string toupper $bramname]
}
brambus acqbuf0
brambus acqbuf1
brambus command0
brambus command1
brambus command2
brambus qdrvfreq0
brambus qdrvfreq1
brambus qdrvfreq2
brambus rdrvfreq0
brambus rdrvfreq1
brambus rdrvfreq2
brambus dacmon0
brambus dacmon1
brambus dacmon2
brambus dacmon3
brambus qdrvenv0
brambus qdrvenv1
brambus qdrvenv2
brambus rdloenv0
brambus rdloenv1
brambus rdloenv2
brambus rdrvenv0
brambus rdrvenv1
brambus rdrvenv2
brambus accbuf0
brambus accbuf1
brambus accbuf2
brambus rdlofreq0
brambus rdlofreq1
brambus rdlofreq2
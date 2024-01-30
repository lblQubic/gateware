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
brambus command3
brambus command4
brambus command5
brambus command6
brambus command7
brambus qdrvfreq0
brambus qdrvfreq1
brambus qdrvfreq2
brambus qdrvfreq3
brambus qdrvfreq4
brambus qdrvfreq5
brambus qdrvfreq6
brambus qdrvfreq7
brambus rdrvfreq0
brambus rdrvfreq1
brambus rdrvfreq2
brambus rdrvfreq3
brambus rdrvfreq4
brambus rdrvfreq5
brambus rdrvfreq6
brambus rdrvfreq7
brambus dacmon0
brambus dacmon1
brambus dacmon2
brambus dacmon3
brambus qdrvenv0
brambus qdrvenv1
brambus qdrvenv2
brambus qdrvenv3
brambus qdrvenv4
brambus qdrvenv5
brambus qdrvenv6
brambus qdrvenv7
brambus rdloenv0
brambus rdloenv1
brambus rdloenv2
brambus rdloenv3
brambus rdloenv4
brambus rdloenv5
brambus rdloenv6
brambus rdloenv7
brambus rdrvenv0
brambus rdrvenv1
brambus rdrvenv2
brambus rdrvenv3
brambus rdrvenv4
brambus rdrvenv5
brambus rdrvenv6
brambus rdrvenv7
brambus accbuf0
brambus accbuf1
brambus accbuf2
brambus accbuf3
brambus accbuf4
brambus accbuf5
brambus accbuf6
brambus accbuf7
brambus rdlofreq0
brambus rdlofreq1
brambus rdlofreq2
brambus rdlofreq3
brambus rdlofreq4
brambus rdlofreq5
brambus rdlofreq6
brambus rdlofreq7
brambus sdbuf0
brambus sdbuf1
brambus sdbuf2
brambus sdbuf3
brambus sdbuf4
brambus sdbuf5
brambus sdbuf6
brambus sdbuf7
brambus sdpara0
brambus sdpara1
brambus sdpara2
brambus sdpara3
brambus sdpara4
brambus sdpara5
brambus sdpara6
brambus sdpara7
set target "vc707_fmc120x2"
set outputDir ./vivado_project1
file mkdir $outputDir
create_project ${target} $outputDir -part "xc7vx485tffg1761-2" -force
set fp [open ${target}.d r]
set file_data [read $fp]
close $fp
set src []
set constrain []
set tcl []
set vh []
foreach line $file_data {
	if [regexp {\.v\s*$} $line] {
		lappend src $line
} elseif [regexp {\.vhd\s*$} $line] {
		lappend src $line
} elseif [regexp {\.hex\s*$} $line] {
		lappend src $line
} elseif [regexp {\.xdc\s*$} $line] {
		lappend constrain $line
} elseif [regexp {\.tcl\s*$} $line] {
		lappend tcl $line
} elseif [regexp {\.vh\s*$} $line] {
		lappend vh [file dirname $line]
}
}
foreach ip $tcl {
	source $ip
}
#regsub -all "\n" $file_data " " file_data
puts $src
puts $constrain
add_files $src
add_files $constrain
set_property  top ${target} [current_fileset]

set_property include_dirs $vh [current_fileset]
puts $vh
#{/tmp/app-ether/top/vc707/ /tmp/lcls2_llrf/firmware/resonance_control/ /tmp/lcls2_llrf/firmware/submodules/ethernet-core/core/} 

set_property STEPS.SYNTH_DESIGN.ARGS.DIRECTIVE RuntimeOptimized [get_runs synth_1]
set_property STEPS.OPT_DESIGN.ARGS.DIRECTIVE RuntimeOptimized [get_runs impl_1]
set_property verilog_define {MEM_SIZE=24576} [current_fileset]
#add_files -scan_for_includes crc8e_guts.vh
#add_files -scan_for_includes endpoint.vh
launch_runs synth_1 -job 6
#set_property CFGBVS VCCO [current_design]
#set_property CONFIG_VOLTAGE 1.5 [current_design]
wait_on_run synth_1
launch_runs impl_1 -to_step write_bitstream -job 4
wait_on_run impl_1
puts "Implementation done!"


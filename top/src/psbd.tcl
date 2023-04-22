set target "psbd"
set part "xczu49dr-ffvf1760-2-e"
set outputdir ./vivado_project/$target/
set depd ${target}.d
source ../../submodules/tools/proj.tcl
source ../../submodules/tools/depsrc.tcl
source ../../submodules/tools/synimpbit_nonpj.tcl
#source ../../submodules/tools/synimpbit.tcl
proj ${target} ${part} ${outputdir} ${depd}
set_param general.maxThreads 11
#set_property strategy Flow_PerfOptimized_high [get_runs synth_1]
set_property STEPS.SYNTH_DESIGN.ARGS.RETIMING true [get_runs synth_1]
set_property STEPS.PLACE_DESIGN.ARGS.DIRECTIVE Explore [get_runs impl_1]
set_property STEPS.ROUTE_DESIGN.ARGS.DIRECTIVE AggressiveExplore [get_runs impl_1]
if {1} {
synimpbit ${outputdir} ${target} 11 
}

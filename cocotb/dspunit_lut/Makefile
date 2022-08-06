SIM ?= verilator
TOPLEVEL_LANG ?= verilog

export PYTHONPATH := ..:$(PYTHONPATH)

VERILOG_SOURCES += $(PWD)/../../sim_modules/dsp_fproc_lut_sim.sv
VERILOG_SOURCES += $(PWD)/../../dsp_unit.sv
VERILOG_SOURCES += $(PWD)/../../otherrepo/wave-elements/*.v
VERILOG_SOURCES += $(PWD)/../../submodules/distributed_processor/hdl/*.sv
VERILOG_SOURCES += $(PWD)/../../submodules/distributed_processor/hdl/*.v
VERILOG_SOURCES += $(PWD)/../../submodules/distributed_processor/hdl/*.vh
VERILOG_SOURCES += $(PWD)/../../submodules/common-hdl/cordicg1.v
VERILOG_SOURCES += $(PWD)/../../submodules/common-hdl/dpram.v
VERILOG_SOURCES += $(PWD)/../../submodules/common-hdl/reg_delay1.v
VERILOG_SOURCES += $(PWD)/../../submodules/common-hdl/reg_delay.v
VERILOG_SOURCES += $(PWD)/../../submodules/common-hdl/localbus.sv
VERILOG_SOURCES += $(PWD)/../../submodules/common-hdl/areset.v
VERILOG_SOURCES += $(PWD)/../../submodules/common-hdl/minmax2.v
VERILOG_SOURCES += $(PWD)/../../submodules/common-hdl/data_xdomain.v
VERILOG_SOURCES += $(PWD)/../../submodules/common-hdl/flag_xdomain.v
#VERILOG_SOURCES += $(PWD)/../submodules/common-hdl/cmultiplier.v
EXTRA_ARGS += --trace --trace-structs -Wno-fatal
TOPLEVEL = dsp_fproc_lut_sim
#COMPILE_ARGS += -Wno

MODULE = test_dsp_lut

include $(shell cocotb-config --makefiles)/Makefile.sim

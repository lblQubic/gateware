TGT=plsv_tb

SIM ?= verilator
TOPLEVEL_LANG ?= verilog
VERILOG_SOURCES= $(shell python ../../../src/preinclude.py plsv_tb.d)
#VERILOG_SOURCES= $(shell python preinclude.py plsv_tb.d -oneline)

EXTRA_ARGS += --trace --trace-structs --trace-fst
COMPILE_ARGS += -Wno-fatal 

TOPLEVEL = $(TGT)
MODULE = $(TGT)

all: fst
fst: sim
	mv dump.fst $(TGT).fst
	printf "\a\a\a"

include $(shell cocotb-config --makefiles)/Makefile.sim


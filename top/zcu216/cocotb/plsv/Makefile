TGT=plsv_tb

SIM ?= verilator
TOPLEVEL_LANG ?= verilog
VERILOG_SOURCES= $(shell python preinclude.py plsv_tb.d)

EXTRA_ARGS += --trace --trace-structs #--trace-fst
COMPILE_ARGS += -Wno-fatal

TOPLEVEL = $(TGT)
MODULE = $(TGT)

all: sim
include $(shell cocotb-config --makefiles)/Makefile.sim


# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtop \
	Vtop__1 \
	Vtop__2 \
	Vtop_ifdsp \
	Vtop_panzoomtrigif__N4_A9_D100 \
	Vtop_panzoomtrigif__Na_Ac_D40 \
	Vtop_elementconn__pi3 \
	Vtop_elementconn__pi3__1 \
	Vtop_ifxma__N4_D100 \
	Vtop_ammod__N10 \
	Vtop_ammod__N10__1 \
	Vtop_ifelement__Ec_EB20_F9_FB80 \
	Vtop_ifelement__Ec_EB20_F9_FB200 \
	Vtop_ifelement__E8_EB200_F9_FB200 \
	Vtop_cmd_mem_iface__C10_M80_MB1 \
	Vtop_fproc_iface \
	Vtop_sync_iface \
	Vtop_pulse_iface \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop__Slow \
	Vtop__1__Slow \
	Vtop_ifdsp__Slow \
	Vtop_panzoomtrigif__N4_A9_D100__Slow \
	Vtop_panzoomtrigif__Na_Ac_D40__Slow \
	Vtop_elementconn__pi3__Slow \
	Vtop_ifxma__N4_D100__Slow \
	Vtop_ammod__N10__Slow \
	Vtop_ifelement__Ec_EB20_F9_FB80__Slow \
	Vtop_ifelement__Ec_EB20_F9_FB200__Slow \
	Vtop_ifelement__E8_EB200_F9_FB200__Slow \
	Vtop_cmd_mem_iface__C10_M80_MB1__Slow \
	Vtop_fproc_iface__Slow \
	Vtop_sync_iface__Slow \
	Vtop_pulse_iface__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtop__Dpi \
	Vtop__Trace \
	Vtop__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop__Syms \
	Vtop__Trace__Slow \
	Vtop__Trace__1__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vpi \
	verilated_fst_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-

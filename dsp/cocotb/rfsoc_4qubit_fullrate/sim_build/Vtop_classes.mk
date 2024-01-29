# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtop \
	Vtop___024root__DepSet_h84412442__0 \
	Vtop___024root__DepSet_h84412442__1 \
	Vtop___024root__DepSet_h84412442__2 \
	Vtop___024root__DepSet_h84412442__3 \
	Vtop___024root__DepSet_h84412442__4 \
	Vtop___024root__DepSet_h84412442__5 \
	Vtop___024root__DepSet_heccd7ead__0 \
	Vtop_ifdsp__DepSet_hba6f2a94__0 \
	Vtop_state_disc__DepSet_h87cc6a85__0 \
	Vtop_state_disc__DepSet_heb423868__0 \
	Vtop_ifxma__N10__DepSet_h3b6f4d5d__0 \
	Vtop_panzoomtrigif__Na_Ac__DepSet_hf2e5b9f0__0 \
	Vtop_panzoomtrigif__N4_D100__DepSet_hec0235ad__0 \
	Vtop_proc_core__Qz1_Rz2_RBz3__DepSet_he373ba48__0 \
	Vtop_proc_core__Qz1_Rz2_RBz3__DepSet_he373ba48__1 \
	Vtop_proc_core__Qz1_Rz2_RBz3__DepSet_h47bf08b3__0 \
	Vtop_elementconn__pi3__DepSet_h0d076585__0 \
	Vtop_elementconn__pi3__DepSet_h0d076585__1 \
	Vtop_elementconn__pi3__DepSet_h0d076585__2 \
	Vtop_elementmixacc__Ec_F9_FB80_ECz3__DepSet_h30b443fd__0 \
	Vtop_ifelement__E8_EB200_F9_FB200__DepSet_h4e4d1cd4__0 \
	Vtop_ifelement__Ec_F9_FB200__DepSet_hdf672525__0 \
	Vtop_ifelement__Ec_F9_FB80__DepSet_h4de125c5__0 \
	Vtop_ammod__N10__DepSet_h54fc5191__0 \
	Vtop_fproc_iface__DepSet_hdfad2ebe__0 \
	Vtop_sync_iface__DepSet_h92b6a5ca__0 \
	Vtop_ifsd__DepSet_h128df1eb__0 \
	Vtop_cmd_mem_iface__C10_M80_MB1__DepSet_hc4e1cb4f__0 \
	Vtop_pulse_iface__DepSet_h76cf5a6b__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop__ConstPool_0 \
	Vtop___024root__Slow \
	Vtop___024root__DepSet_h84412442__0__Slow \
	Vtop___024root__DepSet_h84412442__1__Slow \
	Vtop___024root__DepSet_heccd7ead__0__Slow \
	Vtop_ifdsp__Slow \
	Vtop_ifdsp__DepSet_hba6f2a94__0__Slow \
	Vtop_state_disc__Slow \
	Vtop_state_disc__DepSet_h87cc6a85__0__Slow \
	Vtop_state_disc__DepSet_heb423868__0__Slow \
	Vtop_ifxma__N10__Slow \
	Vtop_ifxma__N10__DepSet_h3b6f4d5d__0__Slow \
	Vtop_panzoomtrigif__Na_Ac__Slow \
	Vtop_panzoomtrigif__Na_Ac__DepSet_hf2e5b9f0__0__Slow \
	Vtop_panzoomtrigif__N4_D100__Slow \
	Vtop_panzoomtrigif__N4_D100__DepSet_hec0235ad__0__Slow \
	Vtop_proc_core__Qz1_Rz2_RBz3__Slow \
	Vtop_proc_core__Qz1_Rz2_RBz3__DepSet_h47bf08b3__0__Slow \
	Vtop_elementconn__pi3__Slow \
	Vtop_elementconn__pi3__DepSet_h658b3d68__0__Slow \
	Vtop_elementmixacc__Ec_F9_FB80_ECz3__Slow \
	Vtop_elementmixacc__Ec_F9_FB80_ECz3__DepSet_h77fa1f20__0__Slow \
	Vtop_ifelement__E8_EB200_F9_FB200__Slow \
	Vtop_ifelement__E8_EB200_F9_FB200__DepSet_h4e4d1cd4__0__Slow \
	Vtop_ifelement__Ec_F9_FB200__Slow \
	Vtop_ifelement__Ec_F9_FB200__DepSet_hdf672525__0__Slow \
	Vtop_ifelement__Ec_F9_FB80__Slow \
	Vtop_ifelement__Ec_F9_FB80__DepSet_h4de125c5__0__Slow \
	Vtop_ammod__N10__Slow \
	Vtop_ammod__N10__DepSet_h54fc5191__0__Slow \
	Vtop_fproc_iface__Slow \
	Vtop_fproc_iface__DepSet_hdfad2ebe__0__Slow \
	Vtop_sync_iface__Slow \
	Vtop_sync_iface__DepSet_h92b6a5ca__0__Slow \
	Vtop_ifsd__Slow \
	Vtop_ifsd__DepSet_h128df1eb__0__Slow \
	Vtop_cmd_mem_iface__C10_M80_MB1__Slow \
	Vtop_cmd_mem_iface__C10_M80_MB1__DepSet_hc4e1cb4f__0__Slow \
	Vtop_pulse_iface__Slow \
	Vtop_pulse_iface__DepSet_h76cf5a6b__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtop__Dpi \
	Vtop__Trace__0 \
	Vtop__Trace__1 \
	Vtop__Trace__2 \
	Vtop__Trace__3 \
	Vtop__Trace__4 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop__Syms \
	Vtop__Syms__1 \
	Vtop__Syms__2 \
	Vtop__Trace__0__Slow \
	Vtop__Trace__1__Slow \
	Vtop__Trace__2__Slow \
	Vtop__Trace__3__Slow \
	Vtop__Trace__4__Slow \
	Vtop__Trace__5__Slow \
	Vtop__Trace__6__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vpi \
	verilated_fst_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-

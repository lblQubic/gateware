// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("gensrc/dsp_sim_toplevel.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("gensrc/dsp_sim_toplevel.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_combo__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dsp_sim_toplevel__DOT__reset = vlTOPp->reset;
    vlTOPp->dsp_sim_toplevel__DOT__stb_start = vlTOPp->stb_start;
    vlTOPp->dsp_sim_toplevel__DOT__nshot = vlTOPp->nshot;
    vlTOPp->dsp_sim_toplevel__DOT__mem_write_addr = vlTOPp->mem_write_addr;
    vlTOPp->dsp_sim_toplevel__DOT__proc_write_sel = vlTOPp->proc_write_sel;
    vlTOPp->dsp_sim_toplevel__DOT__mem_write_sel = vlTOPp->mem_write_sel;
    vlTOPp->dsp_sim_toplevel__DOT__mem_write_en = vlTOPp->mem_write_en;
    vlTOPp->dsp_sim_toplevel__DOT__buf_read_addr = vlTOPp->buf_read_addr;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__write_addr 
        = (0x1fffU & ((IData)(vlTOPp->mem_write_addr) 
                      >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__write_addr 
        = (0xfffU & ((IData)(vlTOPp->mem_write_addr) 
                     >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__write_addr 
        = (0x1fffU & ((IData)(vlTOPp->mem_write_addr) 
                      >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__write_addr 
        = (0xfffU & ((IData)(vlTOPp->mem_write_addr) 
                     >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__write_addr 
        = (0x1fffU & ((IData)(vlTOPp->mem_write_addr) 
                      >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__write_addr 
        = (0xfffU & ((IData)(vlTOPp->mem_write_addr) 
                     >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__write_addr 
        = (0x7ffU & ((IData)(vlTOPp->mem_write_addr) 
                     >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__read_addr 
        = (0x3ffU & ((IData)(vlTOPp->buf_read_addr) 
                     >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__write_addr 
        = (0x1fffU & ((IData)(vlTOPp->mem_write_addr) 
                      >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__write_addr 
        = (0xfffU & ((IData)(vlTOPp->mem_write_addr) 
                     >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__write_addr 
        = (0x1fffU & ((IData)(vlTOPp->mem_write_addr) 
                      >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__write_addr 
        = (0xfffU & ((IData)(vlTOPp->mem_write_addr) 
                     >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__write_addr 
        = (0x1fffU & ((IData)(vlTOPp->mem_write_addr) 
                      >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__write_addr 
        = (0xfffU & ((IData)(vlTOPp->mem_write_addr) 
                     >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__write_addr 
        = (0x7ffU & ((IData)(vlTOPp->mem_write_addr) 
                     >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__read_addr 
        = (0x3ffU & ((IData)(vlTOPp->buf_read_addr) 
                     >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__write_addr 
        = (0x1fffU & ((IData)(vlTOPp->mem_write_addr) 
                      >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__write_addr 
        = (0xfffU & ((IData)(vlTOPp->mem_write_addr) 
                     >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__write_addr 
        = (0x1fffU & ((IData)(vlTOPp->mem_write_addr) 
                      >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__write_addr 
        = (0xfffU & ((IData)(vlTOPp->mem_write_addr) 
                     >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__write_addr 
        = (0x1fffU & ((IData)(vlTOPp->mem_write_addr) 
                      >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__write_addr 
        = (0xfffU & ((IData)(vlTOPp->mem_write_addr) 
                     >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__write_addr 
        = (0x7ffU & ((IData)(vlTOPp->mem_write_addr) 
                     >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__read_addr 
        = (0x3ffU & ((IData)(vlTOPp->buf_read_addr) 
                     >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__read_addr 
        = (0xfffU & ((IData)(vlTOPp->buf_read_addr) 
                     >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__read_addr 
        = (0xfffU & ((IData)(vlTOPp->buf_read_addr) 
                     >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__mem_write_data = vlTOPp->mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__clk = vlTOPp->clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk 
        = vlTOPp->clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__mem_write_data;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__clk;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__clk 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__clk;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__5\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0;
    CData/*7:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0;
    CData/*7:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0;
    CData/*7:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0;
    CData/*7:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0;
    CData/*7:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0;
    CData/*7:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0;
    SData/*10:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr__v0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0;
    SData/*10:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr__v1;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0;
    SData/*10:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1;
    SData/*9:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__cur_read_addr__v0;
    SData/*9:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0;
    SData/*10:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr__v0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0;
    SData/*10:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr__v1;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0;
    SData/*10:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1;
    SData/*9:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__cur_read_addr__v0;
    SData/*9:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0;
    SData/*10:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr__v0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0;
    SData/*10:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr__v1;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0;
    SData/*10:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1;
    SData/*9:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__cur_read_addr__v0;
    SData/*9:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__cur_read_addr__v0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__cur_read_addr__v0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    QData/*63:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0;
    QData/*63:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0;
    QData/*63:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0;
    QData/*63:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0;
    QData/*63:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0;
    // Body
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0 = 0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__cur_read_addr__v0 
        = (0xfffU & (IData)(vlTOPp->buf_read_addr));
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__cur_read_addr__v0 
        = (0xfffU & (IData)(vlTOPp->buf_read_addr));
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_rdlo_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0 
            = (0xfffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_rdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0 
            = (0xfffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_rdlo_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0 
            = (0xfffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_rdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0 
            = (0xfffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_rdlo_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0 
            = (0xfffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_rdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0 
            = (0xfffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_acqbuf
        [1U]) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_acqbuf
            [1U];
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_acqbuf
            [1U];
    }
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_acqbuf
        [0U]) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_acqbuf
            [0U];
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_acqbuf
            [0U];
    }
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__cur_read_addr__v0 
        = (0x3ffU & (IData)(vlTOPp->buf_read_addr));
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__cur_read_addr__v0 
        = (0x3ffU & (IData)(vlTOPp->buf_read_addr));
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__cur_read_addr__v0 
        = (0x3ffU & (IData)(vlTOPp->buf_read_addr));
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdloenv
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvenv
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdloenv
        [1U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvenv
        [1U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdloenv
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvenv
        [0U];
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf
        [2U]) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_accbuf
            [2U];
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf
            [2U];
    }
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf
        [1U]) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_accbuf
            [1U];
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf
            [1U];
    }
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf
        [0U]) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_accbuf
            [0U];
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf
            [0U];
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_rdlo_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0 
            = (0x7ffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_rdlo_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0 
            = (0x7ffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_rdlo_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0 
            = (0x7ffU & (IData)(vlTOPp->mem_write_addr));
    }
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq
        [1U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
        [0U];
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_rdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0 
            = (0x1fffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_qdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0 
            = (0x1fffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_qdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0 
            = (0xfffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_rdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0 
            = (0x1fffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_qdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0 
            = (0x1fffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_qdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0 
            = (0xfffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_rdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0 
            = (0x1fffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_qdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0 
            = (0x1fffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_qdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0 
            = (0xfffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0 
            = (0x1fffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0 
            = (0x1fffU & (IData)(vlTOPp->mem_write_addr));
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0 
            = vlTOPp->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0 
            = (0x1fffU & (IData)(vlTOPp->mem_write_addr));
    }
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvfreq
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvfreq
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvenv
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvfreq
        [1U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvfreq
        [1U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvenv
        [1U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvfreq
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvfreq
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvenv
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command
        [1U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__cur_read_addr__v0;
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0;
    }
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1;
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    }
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1;
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0;
    }
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr__v0;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr__v1;
    vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__read_data 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data
        [vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__cur_read_addr
        [0U]];
    vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__read_data 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data
        [vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__cur_read_addr
        [0U]];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__read_data 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data
        [vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr
        [1U]];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__read_data 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data
        [vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr
        [1U]];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__read_data 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data
        [vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr
        [1U]];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__read_data 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data
        [vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr
        [1U]];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__read_data 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data
        [vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr
        [1U]];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__read_data 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data
        [vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr
        [1U]];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__read_data 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data
        [vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__cur_read_addr
        [0U]];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__read_data 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data
        [vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__cur_read_addr
        [0U]];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__read_data 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data
        [vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__cur_read_addr
        [0U]];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_data[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                    [1U] << 2U))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_data[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & ((IData)(1U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                   [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_data[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & ((IData)(2U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                   [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_data[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & ((IData)(3U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                   [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_data[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                    [1U] << 2U))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_data[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & ((IData)(1U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                   [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_data[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & ((IData)(2U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                   [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_data[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & ((IData)(3U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                   [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_data[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                    [1U] << 2U))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_data[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & ((IData)(1U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                   [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_data[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & ((IData)(2U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                   [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_data[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & ((IData)(3U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                   [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                     [1U] << 4U))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(2U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(3U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(4U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(5U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(6U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(7U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[8U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(8U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[9U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(9U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[0xaU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xaU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[0xbU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xbU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[0xcU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xcU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[0xdU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xdU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[0xeU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xeU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[0xfU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xfU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                     [1U] << 4U))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(2U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(3U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(4U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(5U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(6U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(7U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[8U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(8U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[9U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(9U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[0xaU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xaU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[0xbU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xbU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[0xcU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xcU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[0xdU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xdU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[0xeU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xeU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[0xfU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xfU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                    [1U] << 4U))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(1U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(2U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(3U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(4U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(5U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(6U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(7U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[8U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(8U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[9U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(9U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[0xaU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xaU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[0xbU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xbU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[0xcU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xcU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[0xdU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xdU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[0xeU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xeU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[0xfU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xfU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                     [1U] << 4U))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(2U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(3U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(4U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(5U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(6U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(7U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[8U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(8U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[9U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(9U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[0xaU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xaU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[0xbU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xbU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[0xcU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xcU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[0xdU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xdU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[0xeU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xeU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[0xfU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xfU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                     [1U] << 4U))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(2U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(3U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(4U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(5U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(6U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(7U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[8U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(8U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[9U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(9U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[0xaU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xaU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[0xbU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xbU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[0xcU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xcU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[0xdU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xdU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[0xeU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xeU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[0xfU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xfU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                    [1U] << 4U))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(1U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(2U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(3U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(4U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(5U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(6U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(7U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[8U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(8U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[9U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(9U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[0xaU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xaU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[0xbU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xbU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[0xcU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xcU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[0xdU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xdU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[0xeU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xeU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[0xfU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xfU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                     [1U] << 4U))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(2U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(3U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(4U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(5U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(6U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(7U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[8U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(8U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[9U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(9U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[0xaU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xaU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[0xbU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xbU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[0xcU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xcU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[0xdU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xdU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[0xeU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xeU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[0xfU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xfU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                     [1U] << 4U))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(2U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(3U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(4U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(5U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(6U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(7U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[8U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(8U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[9U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(9U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[0xaU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xaU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[0xbU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xbU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[0xcU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xcU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[0xdU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xdU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[0xeU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xeU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[0xfU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xfU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                    [1U] << 4U))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(1U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(2U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(3U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(4U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(5U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(6U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(7U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[8U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(8U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[9U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(9U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[0xaU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xaU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[0xbU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xbU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[0xcU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xcU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[0xdU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xdU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[0xeU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xeU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[0xfU] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xfU) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__read_data[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr
                     [1U] << 2U))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__read_data[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr
                                    [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__read_data[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & ((IData)(2U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr
                                    [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__read_data[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & ((IData)(3U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr
                                    [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__read_data[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr
                     [1U] << 2U))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__read_data[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr
                                    [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__read_data[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & ((IData)(2U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr
                                    [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__read_data[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & ((IData)(3U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr
                                    [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__read_data[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr
                     [1U] << 2U))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__read_data[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr
                                    [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__read_data[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & ((IData)(2U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr
                                    [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__read_data[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & ((IData)(3U) + (vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr
                                    [1U] << 2U)))];
    vlTOPp->dsp_sim_toplevel__DOT__acq_read_data[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__read_data;
    vlTOPp->dsp_sim_toplevel__DOT__acq_read_data[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__read_data;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdloenv[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__read_data;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdloenv[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__read_data;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdloenv[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__read_data;
    vlTOPp->dsp_sim_toplevel__DOT__acc_read_data[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__read_data;
    vlTOPp->dsp_sim_toplevel__DOT__acc_read_data[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__read_data;
    vlTOPp->dsp_sim_toplevel__DOT__acc_read_data[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__read_data;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[2U][0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[2U][1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[2U][2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[2U][3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[1U][0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[1U][1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[1U][2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[1U][3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[0U][0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[0U][1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[0U][2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[0U][3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_data[3U];
    vlTOPp->acq_read_data[0U] = vlTOPp->dsp_sim_toplevel__DOT__acq_read_data
        [0U];
    vlTOPp->acq_read_data[1U] = vlTOPp->dsp_sim_toplevel__DOT__acq_read_data
        [1U];
    vlTOPp->acc_read_data[0U] = vlTOPp->dsp_sim_toplevel__DOT__acc_read_data
        [0U];
    vlTOPp->acc_read_data[1U] = vlTOPp->dsp_sim_toplevel__DOT__acc_read_data
        [1U];
    vlTOPp->acc_read_data[2U] = vlTOPp->dsp_sim_toplevel__DOT__acc_read_data
        [2U];
}

VL_INLINE_OPT void Vtop::_sequent__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__6\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v0;
    CData/*0:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v1;
    CData/*0:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v2;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v0;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v1;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v2;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v3;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v4;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v5;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v6;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v7;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v8;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v9;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v10;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v11;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v12;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v13;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v14;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v15;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v16;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v17;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v18;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v19;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v20;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v21;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v22;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v23;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v24;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v25;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v26;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v27;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v28;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v29;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v30;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v31;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v32;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v33;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v34;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v35;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v36;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v37;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v38;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v39;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v40;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v41;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v42;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v43;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v44;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v45;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v46;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v47;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v48;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v49;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v50;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v51;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v52;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v53;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v54;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v55;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v56;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v57;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v58;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v59;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v60;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v61;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v62;
    CData/*7:0*/ __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v63;
    CData/*3:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0;
    CData/*3:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0;
    CData/*3:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0;
    SData/*9:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v0;
    SData/*9:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v1;
    SData/*9:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v3;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v4;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v5;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v6;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v7;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v8;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v9;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v10;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v11;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v12;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v13;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v14;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v15;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v16;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v17;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v18;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v19;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v20;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v21;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v22;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v23;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v24;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v25;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v26;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v27;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v28;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v29;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v30;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v31;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v32;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v33;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v34;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v35;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v36;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v37;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v38;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v39;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v40;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v41;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v42;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v43;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v44;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v45;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v46;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v47;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v48;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v49;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v50;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v51;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v52;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v53;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v54;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v55;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v56;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v57;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v58;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v59;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v60;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v61;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v62;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v63;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp__v2;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp__v0;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp__v1;
    SData/*15:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp__v2;
    IData/*31:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__nextshotcnt;
    IData/*31:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0;
    // Body
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__nextshotcnt 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextshotcnt;
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0 = 0U;
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procreset) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_state[0U] = 0U;
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_state[1U] = 0U;
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_state[2U] = 0U;
    } else {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_state[0U] 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state
            [0U];
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_state[1U] 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state
            [1U];
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_state[2U] 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state
            [2U];
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.ampy = 0U;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.ampy = 0U;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.ampy = 0U;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.ampy = 0U;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.ampy = 0U;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.ampy = 0U;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.ampy = 0U;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.ampy = 0U;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.ampy = 0U;
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gsr) 
                       << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout_r 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gsr) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gsr 
        = (1U | (6U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gsr) 
                       << 1U)));
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_write_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_in;
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_write_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_in;
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_write_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_in;
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_in;
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_in;
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_word 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_in;
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_in;
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_in;
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_in;
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_word 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_in;
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_in;
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_in;
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_in;
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_word 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_in;
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_in;
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.procdone 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procdone;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gsr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout_r 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gsr;
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.reset) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__done = 0U;
    } else {
        if ((0U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__done = 0U;
        } else {
            if ((1U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__done = 0U;
            } else {
                if ((3U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__done = 0U;
                } else {
                    if ((2U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__done = 0U;
                    } else {
                        if ((6U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__done = 0U;
                        } else {
                            if ((7U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__done = 0U;
                            } else {
                                if ((5U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__done = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztifwire__BRA__3__KET____DOT__stb_start_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.stb_start;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztifwire__BRA__2__KET____DOT__stb_start_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.stb_start;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztifwire__BRA__1__KET____DOT__stb_start_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.stb_start;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztifwire__BRA__0__KET____DOT__stb_start_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.stb_start;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__acqpztifwire__BRA__1__KET____DOT__stb_start_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.stb_start;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__acqpztifwire__BRA__0__KET____DOT__stb_start_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.stb_start;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nobusy_r 
        = (7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nobusy));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__state 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.reset)
            ? 0U : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procdone_r 
        = (7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procdone));
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cfg) 
                     >> 2U));
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cfg) 
                     >> 2U));
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cfg) 
                     >> 2U));
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cfg) 
                     >> 2U));
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cfg) 
                     >> 2U));
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cfg) 
                     >> 2U));
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cfg) 
                     >> 2U));
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cfg) 
                     >> 2U));
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cfg) 
                     >> 2U));
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procreset_d 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procreset;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__nobusy 
        = (1U & (~ ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.busy) 
                    | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.busy) 
                       | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.busy)))));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__nobusy 
        = (1U & (~ ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.busy) 
                    | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.busy) 
                       | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.busy)))));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__nobusy 
        = (1U & (~ ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.busy) 
                    | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.busy) 
                       | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.busy)))));
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.amp;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.amp;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.phase;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__pulseout.phase;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.amp;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.amp;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.phase;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__pulseout.phase;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.amp;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.amp;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.phase;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__pulseout.phase;
    }
    if ((0U == (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.mixbb2sel))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__mixbb2 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__adc
            [1U];
    } else {
        if ((1U == (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.mixbb2sel))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__mixbb2 
                = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample
                [2U];
        } else {
            if ((2U == (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.mixbb2sel))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__mixbb2 
                    = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample
                    [3U];
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cstrobe 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cstrobe 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cstrobe 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__nextshotcnt 
        = ((IData)(1U) + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__shotadd 
        = (1U & ((0U != (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextshotcnt 
                         ^ vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nshot)) 
                 | (~ (IData)((0U != vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nshot)))));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.reset) {
        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt = 0U;
    } else {
        if ((0U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt = 0U;
        } else {
            if ((1U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt 
                    = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt;
            } else {
                if ((3U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt 
                        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt;
                } else {
                    if ((2U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt 
                            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt;
                    } else {
                        if ((6U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt 
                                = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt;
                        } else {
                            if ((7U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__currentshotcnt 
                                    = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt;
                                __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt 
                                    = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextshotcnt;
                            } else {
                                if ((5U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                                    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__addr_command 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__memif.instr_ptr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__addr_command 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__memif.instr_ptr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__addr_command 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__memif.instr_ptr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__value 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset)
            ? 0U : ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_load_en)
                     ? ((IData)(3U) + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_in)
                     : ((IData)(1U) + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__value)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__value 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset)
            ? 0U : ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_load_en)
                     ? ((IData)(3U) + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_in)
                     : ((IData)(1U) + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__value)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__value 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset)
            ? 0U : ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_load_en)
                     ? ((IData)(3U) + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_in)
                     : ((IData)(1U) + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__value)));
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__adc__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.adc
        [0U];
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__adc__v0 = 1U;
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__adc__v1 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.adc
        [1U];
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__adc__v1 = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__dummy_resetsr 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reset_sr) 
                 >> 4U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reset_sr 
        = ((0x1eU & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reset_sr) 
                     << 1U)) | (1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__dummy_resetsr 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reset_sr) 
                 >> 4U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reset_sr 
        = ((0x1eU & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reset_sr) 
                     << 1U)) | (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset) 
                                      >> 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__dummy_resetsr 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reset_sr) 
                 >> 4U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reset_sr 
        = ((0x1eU & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reset_sr) 
                     << 1U)) | (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset) 
                                      >> 2U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__noop 
        = (1U & (~ (IData)((0U != (((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
                                     [0U][0U] | vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
                                     [0U][1U]) | vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
                                    [0U][2U]) | vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
                                   [0U][3U])))));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__noop 
        = (1U & (~ (IData)((0U != (((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
                                     [1U][0U] | vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
                                     [1U][1U]) | vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
                                    [1U][2U]) | vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
                                   [1U][3U])))));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__noop 
        = (1U & (~ (IData)((0U != (((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
                                     [2U][0U] | vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
                                     [2U][1U]) | vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
                                    [2U][2U]) | vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
                                   [2U][3U])))));
    if ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val = 0U;
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val_inc = 1U;
    } else {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__cur_val;
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val_inc 
            = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__cur_val)));
    }
    if ((2U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val = 0U;
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val_inc = 1U;
    } else {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__cur_val;
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val_inc 
            = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__cur_val)));
    }
    if ((4U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val = 0U;
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val_inc = 1U;
    } else {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__cur_val;
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val_inc 
            = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__cur_val)));
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__command_d2[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__command_d[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__command_d2[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__command_d[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__command_d2[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__command_d[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__command_d2[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__command_d[3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__command_d2[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__command_d[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__command_d2[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__command_d[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__command_d2[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__command_d[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__command_d2[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__command_d[3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__command_d2[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__command_d[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__command_d2[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__command_d[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__command_d2[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__command_d[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__command_d2[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__command_d[3U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v0 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__accvalid;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v1 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__accvalid;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__accvalid;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles 
        = ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset))
            ? 0U : ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst)
                     ? 0U : (0xfU & ((IData)(1U) + (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles)))));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles 
        = ((2U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset))
            ? 0U : ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst)
                     ? 0U : (0xfU & ((IData)(1U) + (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles)))));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles 
        = ((4U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset))
            ? 0U : ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst)
                     ? 0U : (0xfU & ((IData)(1U) + (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles)))));
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_en) {
        __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_out;
        __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_addr;
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_en) {
        __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_out;
        __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_addr;
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_en) {
        __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_out;
        __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_addr;
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v0 
        = ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__resetacc))
            ? 0U : (0x3ffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
                              [0U] + ((~ vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__locklast_accbuf
                                       [0U]) & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
                                      [0U]))));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_valid 
        = ((6U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_valid)) 
           | vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
           [0U]);
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v1 
        = ((2U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__resetacc))
            ? 0U : (0x3ffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
                              [1U] + ((~ vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__locklast_accbuf
                                       [1U]) & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
                                      [1U]))));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_valid 
        = ((5U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_valid)) 
           | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
              [1U] << 1U));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v2 
        = ((4U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__resetacc))
            ? 0U : (0x3ffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
                              [2U] + ((~ vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__locklast_accbuf
                                       [2U]) & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
                                      [2U]))));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_valid 
        = ((3U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_valid)) 
           | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
              [2U] << 2U));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumy__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumy__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumy__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumy__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumy__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumy__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumy__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumy__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumy__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumy__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumy__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumy__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumy__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumy__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumy__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumy__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumy__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumy__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumy__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumy__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumy__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumy__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumy__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumy__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumy__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumy__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumy__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumy__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumy__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumy__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumy__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumy__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumy__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumy__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumy__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumy__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumy__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumy__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumy__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumy__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumy__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumy__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumy__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumy__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumy__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumy__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumy__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumy__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_input 
        = ((6U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_input)) 
           | (1U & (IData)((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
                            [0U] >> 0x3fU))));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_input 
        = ((5U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_input)) 
           | (2U & ((IData)((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
                             [1U] >> 0x3fU)) << 1U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_input 
        = ((3U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_input)) 
           | (4U & ((IData)((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
                             [2U] >> 0x3fU)) << 2U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state 
        = ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset))
            ? 0U : (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state 
        = ((2U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset))
            ? 0U : (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state 
        = ((4U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset))
            ? 0U : (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state));
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr_load_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[0U] 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[0U];
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[1U] 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[1U];
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[2U];
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[3U];
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr_load_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[0U] 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[0U];
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[1U] 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[1U];
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[2U];
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[3U];
    }
    if (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr_load_en) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[0U] 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[0U];
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[1U] 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[1U];
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[2U];
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
            = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[3U];
    }
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v0 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [0U][0U]);
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v0 = 1U;
    vlTOPp->__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v0 = 0U;
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v1 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [0U][2U]);
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v1 = 1U;
    vlTOPp->__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v1 = 0x10U;
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v2 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [0U][4U]);
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v2 = 1U;
    vlTOPp->__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v2 = 0x20U;
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v3 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [0U][6U]);
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v3 = 1U;
    vlTOPp->__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v3 = 0x30U;
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v4 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [1U][0U]);
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v4 = 1U;
    vlTOPp->__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v4 = 0U;
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v5 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [1U][2U]);
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v5 = 1U;
    vlTOPp->__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v5 = 0x10U;
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v6 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [1U][4U]);
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v6 = 1U;
    vlTOPp->__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v6 = 0x20U;
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v7 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [1U][6U]);
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v7 = 1U;
    vlTOPp->__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v7 = 0x30U;
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v8 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [2U][0U]);
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v8 = 1U;
    vlTOPp->__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v8 = 0U;
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v9 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [2U][2U]);
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v9 = 1U;
    vlTOPp->__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v9 = 0x10U;
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v10 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [2U][4U]);
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v10 = 1U;
    vlTOPp->__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v10 = 0x20U;
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v11 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [2U][6U]);
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v11 = 1U;
    vlTOPp->__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v11 = 0x30U;
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v12 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [3U][0U]);
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v12 = 1U;
    vlTOPp->__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v12 = 0U;
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v13 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [3U][2U]);
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v13 = 1U;
    vlTOPp->__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v13 = 0x10U;
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v14 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [3U][4U]);
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v14 = 1U;
    vlTOPp->__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v14 = 0x20U;
    vlTOPp->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v15 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [3U][6U]);
    vlTOPp->__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v15 = 1U;
    vlTOPp->__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v15 = 0x30U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v0 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [0U][0U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v0 = 0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v1 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [1U][0U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v1 = 0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v2 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [2U][0U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v2 = 0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v3 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [3U][0U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v3 = 0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v4 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [0U][1U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [0U][0U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v4 = 0x10U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v5 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [1U][1U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [1U][0U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v5 = 0x10U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v6 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [2U][1U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [2U][0U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v6 = 0x10U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v7 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [3U][1U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [3U][0U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v7 = 0x10U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v8 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [0U][1U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v8 = 0x20U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v9 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [1U][1U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v9 = 0x20U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v10 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [2U][1U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v10 = 0x20U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v11 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [3U][1U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v11 = 0x20U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v12 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [0U][2U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [0U][1U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v12 = 0x30U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v13 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [1U][2U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [1U][1U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v13 = 0x30U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v14 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [2U][2U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [2U][1U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v14 = 0x30U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v15 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [3U][2U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [3U][1U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v15 = 0x30U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v16 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [0U][2U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v16 = 0x40U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v17 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [1U][2U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v17 = 0x40U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v18 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [2U][2U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v18 = 0x40U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v19 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [3U][2U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v19 = 0x40U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v20 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [0U][3U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [0U][2U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v20 = 0x50U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v21 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [1U][3U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [1U][2U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v21 = 0x50U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v22 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [2U][3U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [2U][2U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v22 = 0x50U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v23 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [3U][3U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [3U][2U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v23 = 0x50U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v24 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [0U][3U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v24 = 0x60U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v25 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [1U][3U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v25 = 0x60U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v26 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [2U][3U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v26 = 0x60U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v27 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [3U][3U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v27 = 0x60U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v28 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [0U][4U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [0U][3U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v28 = 0x70U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v29 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [1U][4U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [1U][3U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v29 = 0x70U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v30 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [2U][4U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [2U][3U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v30 = 0x70U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v31 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [3U][4U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [3U][3U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v31 = 0x70U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v32 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [0U][4U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v32 = 0x80U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v33 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [1U][4U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v33 = 0x80U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v34 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [2U][4U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v34 = 0x80U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v35 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [3U][4U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v35 = 0x80U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v36 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [0U][5U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [0U][4U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v36 = 0x90U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v37 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [1U][5U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [1U][4U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v37 = 0x90U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v38 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [2U][5U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [2U][4U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v38 = 0x90U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v39 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [3U][5U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [3U][4U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v39 = 0x90U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v40 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [0U][5U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v40 = 0xa0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v41 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [1U][5U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v41 = 0xa0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v42 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [2U][5U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v42 = 0xa0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v43 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [3U][5U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v43 = 0xa0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v44 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [0U][6U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [0U][5U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v44 = 0xb0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v45 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [1U][6U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [1U][5U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v45 = 0xb0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v46 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [2U][6U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [2U][5U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v46 = 0xb0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v47 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [3U][6U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [3U][5U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v47 = 0xb0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v48 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [0U][6U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v48 = 0xc0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v49 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [1U][6U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v49 = 0xc0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v50 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [2U][6U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v50 = 0xc0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v51 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [3U][6U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v51 = 0xc0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v52 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [0U][7U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [0U][6U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v52 = 0xd0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v53 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [1U][7U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [1U][6U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v53 = 0xd0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v54 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [2U][7U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [2U][6U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v54 = 0xd0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v55 
        = (0xffffU & ((vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                       [3U][7U] << 0x10U) | (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                                             [3U][6U] 
                                             >> 0x10U)));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v55 = 0xd0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v56 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [0U][7U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v56 = 0xe0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v57 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [1U][7U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v57 = 0xe0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v58 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [2U][7U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v58 = 0xe0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v59 
        = (0xffffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
           [3U][7U]);
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v59 = 0xe0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v60 
        = (0xffffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                      [0U][7U] >> 0x10U));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v60 = 0xf0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v61 
        = (0xffffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                      [1U][7U] >> 0x10U));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v61 = 0xf0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v62 
        = (0xffffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                      [2U][7U] >> 0x10U));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v62 = 0xf0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v63 
        = (0xffffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
                      [3U][7U] >> 0x10U));
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v63 = 0xf0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumx__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumx__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumx__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumx__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumx__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumx__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumx__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumx__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumx__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumx__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumx__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumx__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumx__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumx__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumx__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumx__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumx__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumx__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumx__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumx__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumx__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumx__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumx__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumx__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumx__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumx__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumx__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumx__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumx__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumx__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumx__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumx__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumx__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumx__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumx__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumx__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumx__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumx__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumx__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumx__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumx__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumx__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumx__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumx__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumx__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
                      [1U][1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp__v1 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumx__vin
                      [0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumx__vin
                      [1U]));
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp__v2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumx__vin
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp__v0 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
                      [1U][0U] + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
                      [1U][1U]));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextshotcnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__nextshotcnt;
    if (__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data__v0;
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf[2U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf[2U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp__v2;
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v0), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [0U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v0);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v1), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [1U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v1);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v2), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [2U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v2);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v3), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [3U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v3);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v4), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [0U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v4);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v5), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [1U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v5);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v6), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [2U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v6);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v7), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [3U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v7);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v8), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [0U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v8);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v9), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [1U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v9);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v10), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [2U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v10);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v11), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [3U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v11);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v12), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [0U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v12);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v13), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [1U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v13);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v14), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [2U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v14);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v15), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [3U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v15);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v16), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [0U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v16);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v17), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [1U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v17);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v18), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [2U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v18);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v19), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [3U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v19);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v20), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [0U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v20);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v21), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [1U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v21);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v22), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [2U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v22);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v23), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [3U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v23);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v24), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [0U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v24);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v25), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [1U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v25);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v26), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [2U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v26);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v27), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [3U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v27);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v28), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [0U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v28);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v29), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [1U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v29);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v30), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [2U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v30);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v31), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [3U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v31);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v32), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [0U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v32);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v33), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [1U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v33);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v34), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [2U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v34);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v35), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [3U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v35);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v36), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [0U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v36);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v37), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [1U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v37);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v38), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [2U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v38);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v39), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [3U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v39);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v40), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [0U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v40);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v41), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [1U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v41);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v42), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [2U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v42);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v43), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [3U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v43);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v44), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [0U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v44);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v45), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [1U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v45);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v46), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [2U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v46);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v47), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [3U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v47);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v48), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [0U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v48);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v49), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [1U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v49);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v50), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [2U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v50);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v51), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [3U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v51);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v52), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [0U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v52);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v53), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [1U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v53);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v54), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [2U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v54);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v55), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [3U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v55);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v56), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [0U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v56);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v57), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [1U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v57);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v58), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [2U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v58);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v59), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [3U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v59);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v60), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [0U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v60);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v61), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [1U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v61);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v62), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [2U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v62);
    VL_ASSIGNSEL_WIII(16,(IData)(__Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v63), 
                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__dac
                      [3U], __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dac__v63);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp[0U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp__v0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp[1U][0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp__v1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp[1U][1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp__v2;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gsr = 1U;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout_r;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gsr = 1U;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.lastshotdone 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__done;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__nobusy_mon 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__nobusy;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__nobusy_mon 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__nobusy;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__nobusy_mon 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__nobusy;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_out 
            == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_time) 
           & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__c_strobe_enable));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_out 
            == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_time) 
           & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__c_strobe_enable));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_out 
            == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_time) 
           & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__c_strobe_enable));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.shotcnt 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__currentshotcnt;
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.reset) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nshot 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.nshot;
    } else {
        if ((0U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nshot 
                = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.nshot;
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__cmd_read_addr 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__addr_command;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__cmd_read_addr 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__addr_command;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__cmd_read_addr 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__addr_command;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__value;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__value;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__value;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__command_d[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__command_d[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__command_d[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
        [0U][2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__command_d[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
        [0U][3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__command_d[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__command_d[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__command_d[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
        [1U][2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__command_d[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
        [1U][3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__command_d[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
        [2U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__command_d[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
        [2U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__command_d[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
        [2U][2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__command_d[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command
        [2U][3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id0 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id0 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id0 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id1 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__add 
        = (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg 
           + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub 
        = (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg 
           - vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id1 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__add 
        = (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg 
           + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub 
        = (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg 
           - vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id1 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__add 
        = (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg 
           + vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub 
        = (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg 
           - vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__resetacc 
        = (7U & (- (IData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.resetacc))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf_mon0 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf_mon1 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf_mon2 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__locklast_accbuf[0U] 
        = (0x3ffU == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
           [0U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__locklast_accbuf[1U] 
        = (0x3ffU == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
           [1U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__locklast_accbuf[2U] 
        = (0x3ffU == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
           [2U]);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_valid 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_valid;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_input;
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en 
            = (2U <= (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles));
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 1U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en 
            = (2U <= (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles));
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en 
            = (2U <= (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles));
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 1U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en 
            = (2U <= (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles));
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset 
        = (7U & (- (IData)((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procreset))));
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en 
            = (2U <= (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles));
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 1U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en 
            = (2U <= (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles));
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__opcode 
        = (0xffU & (((0U == 0x18U) ? 0U : (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[4U] 
                                           << ((IData)(0x20U) 
                                               - (IData)(0x18U)))) 
                    | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                       >> 0x18U)));
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst 
            = (2U <= (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles));
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & ((0x80000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                          ? ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                 >> 0x1eU)) & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                >> 0x1dU) 
                                               & (~ 
                                                  (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                   >> 0x1cU))))
                          : ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                 >> 0x1eU)) & ((0x20000000U 
                                                & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                                ? (~ 
                                                   (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                    >> 0x1cU))
                                                : (~ 
                                                   (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                    >> 0x1cU))))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    if (((1U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                         >> 0x1cU))) 
                         | (4U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1cU))))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                    } else {
                        if (((3U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU))) 
                             | (5U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                               >> 0x1cU))))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 1U;
                        } else {
                            if ((6U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                >> 0x1cU)))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                            }
                        }
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_addr 
        = (0xfU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                    << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                                 >> 0x10U)));
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset 
                = (1U & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                          >> 0x1fU) & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1eU)) 
                                       & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1dU) 
                                          & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU)))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable 
                = (1U & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                          >> 0x1fU) & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1eU)) 
                                       & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                              >> 0x1dU)) 
                                          & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU)))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable 
                = (1U & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                             >> 0x1fU)) & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                            >> 0x1eU) 
                                           & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                               >> 0x1dU) 
                                              & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                 >> 0x1cU)))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    if (((1U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                         >> 0x1cU))) 
                         | (4U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1cU))))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                    } else {
                        if (((3U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU))) 
                             | (5U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                               >> 0x1cU))))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                        } else {
                            if ((6U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                >> 0x1cU)))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtop::_sequent__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__7\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    if (((1U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                         >> 0x1cU))) 
                         | (4U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1cU))))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 1U;
                    } else {
                        if (((3U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU))) 
                             | (5U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                               >> 0x1cU))))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                        } else {
                            if ((6U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                >> 0x1cU)))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                            }
                        }
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_cmd_data_in0 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
            << 8U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                      >> 0x18U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in0_sel 
        = (1U & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                 >> 0x1bU));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_opcode 
        = (7U & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                 >> 0x18U));
    if ((0U != (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            if ((1U & (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                          >> 0x1fU)))) {
                if ((0x40000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])) {
                    if ((0x20000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])) {
                        if ((1U & (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                      >> 0x1cU)))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
                        }
                    }
                } else {
                    if ((0x20000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])) {
                        if ((0x10000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                        }
                    } else {
                        if ((0x10000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr_ptr_load_val 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                       << 0x1cU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                                    >> 4U)));
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en 
                = (1U & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                          >> 0x1fU) & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1eU)) 
                                       & (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1dU)))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in1 
        = (0xfU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                    << 0xcU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                                >> 0x14U)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.id 
        = (0xffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                     << 0xcU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[1U] 
                                 >> 0x14U)));
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en 
                = ((0x80000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                    ? 0U : ((0x40000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                             ? 0U : ((0x20000000U & 
                                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                      ? ((0x10000000U 
                                          & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                          ? 0U : 1U)
                                      : 0U)));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    if (((1U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                         >> 0x1cU))) 
                         | (4U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1cU))))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                    } else {
                        if (((3U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU))) 
                             | (5U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                               >> 0x1cU))))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 2U;
                        } else {
                            if ((6U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                >> 0x1cU)))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                            }
                        }
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable 
                = (1U & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                             >> 0x1fU)) & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                            >> 0x1eU) 
                                           & (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                 >> 0x1dU)))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
            << 0x1bU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[1U] 
                         >> 5U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
            << 0x1bU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                         >> 5U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U] 
        = (0x7fffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                      >> 5U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in0 
        = (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                   >> 0x14U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__opcode 
        = (0xffU & (((0U == 0x18U) ? 0U : (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[4U] 
                                           << ((IData)(0x20U) 
                                               - (IData)(0x18U)))) 
                    | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                       >> 0x18U)));
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst 
            = (2U <= (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles));
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & ((0x80000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                          ? ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                 >> 0x1eU)) & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                >> 0x1dU) 
                                               & (~ 
                                                  (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                   >> 0x1cU))))
                          : ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                 >> 0x1eU)) & ((0x20000000U 
                                                & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                                ? (~ 
                                                   (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                    >> 0x1cU))
                                                : (~ 
                                                   (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                    >> 0x1cU))))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    if (((1U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                         >> 0x1cU))) 
                         | (4U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1cU))))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                    } else {
                        if (((3U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU))) 
                             | (5U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                               >> 0x1cU))))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 1U;
                        } else {
                            if ((6U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                >> 0x1cU)))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                            }
                        }
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_addr 
        = (0xfU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                    << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                                 >> 0x10U)));
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset 
                = (1U & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                          >> 0x1fU) & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1eU)) 
                                       & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1dU) 
                                          & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU)))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable 
                = (1U & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                          >> 0x1fU) & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1eU)) 
                                       & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                              >> 0x1dU)) 
                                          & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU)))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable 
                = (1U & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                             >> 0x1fU)) & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                            >> 0x1eU) 
                                           & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                               >> 0x1dU) 
                                              & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                 >> 0x1cU)))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    if (((1U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                         >> 0x1cU))) 
                         | (4U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1cU))))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                    } else {
                        if (((3U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU))) 
                             | (5U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                               >> 0x1cU))))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                        } else {
                            if ((6U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                >> 0x1cU)))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    if (((1U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                         >> 0x1cU))) 
                         | (4U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1cU))))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 1U;
                    } else {
                        if (((3U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU))) 
                             | (5U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                               >> 0x1cU))))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                        } else {
                            if ((6U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                >> 0x1cU)))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                            }
                        }
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_cmd_data_in0 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
            << 8U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                      >> 0x18U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in0_sel 
        = (1U & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                 >> 0x1bU));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_opcode 
        = (7U & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                 >> 0x18U));
    if ((0U != (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            if ((1U & (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                          >> 0x1fU)))) {
                if ((0x40000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])) {
                    if ((0x20000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])) {
                        if ((1U & (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                      >> 0x1cU)))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
                        }
                    }
                } else {
                    if ((0x20000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])) {
                        if ((0x10000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                        }
                    } else {
                        if ((0x10000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr_ptr_load_val 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                       << 0x1cU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                                    >> 4U)));
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en 
                = (1U & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                          >> 0x1fU) & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1eU)) 
                                       & (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1dU)))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in1 
        = (0xfU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                    << 0xcU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                                >> 0x14U)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.id 
        = (0xffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                     << 0xcU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[1U] 
                                 >> 0x14U)));
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en 
                = ((0x80000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                    ? 0U : ((0x40000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                             ? 0U : ((0x20000000U & 
                                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                      ? ((0x10000000U 
                                          & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                          ? 0U : 1U)
                                      : 0U)));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    if (((1U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                         >> 0x1cU))) 
                         | (4U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1cU))))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                    } else {
                        if (((3U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU))) 
                             | (5U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                               >> 0x1cU))))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 2U;
                        } else {
                            if ((6U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                >> 0x1cU)))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                            }
                        }
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable 
                = (1U & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                             >> 0x1fU)) & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                            >> 0x1eU) 
                                           & (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                 >> 0x1dU)))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
            << 0x1bU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[1U] 
                         >> 5U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
            << 0x1bU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                         >> 5U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U] 
        = (0x7fffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                      >> 5U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in0 
        = (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                   >> 0x14U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__opcode 
        = (0xffU & (((0U == 0x18U) ? 0U : (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[4U] 
                                           << ((IData)(0x20U) 
                                               - (IData)(0x18U)))) 
                    | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                       >> 0x18U)));
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst 
            = (2U <= (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles));
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & ((0x80000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                          ? ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                 >> 0x1eU)) & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                >> 0x1dU) 
                                               & (~ 
                                                  (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                   >> 0x1cU))))
                          : ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                 >> 0x1eU)) & ((0x20000000U 
                                                & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                                ? (~ 
                                                   (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                    >> 0x1cU))
                                                : (~ 
                                                   (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                    >> 0x1cU))))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    if (((1U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                         >> 0x1cU))) 
                         | (4U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1cU))))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                    } else {
                        if (((3U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU))) 
                             | (5U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                               >> 0x1cU))))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 1U;
                        } else {
                            if ((6U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                >> 0x1cU)))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                            }
                        }
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_addr 
        = (0xfU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                    << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                                 >> 0x10U)));
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset 
                = (1U & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                          >> 0x1fU) & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1eU)) 
                                       & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1dU) 
                                          & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU)))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable 
                = (1U & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                          >> 0x1fU) & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1eU)) 
                                       & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                              >> 0x1dU)) 
                                          & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU)))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable 
                = (1U & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                             >> 0x1fU)) & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                            >> 0x1eU) 
                                           & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                               >> 0x1dU) 
                                              & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                 >> 0x1cU)))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    if (((1U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                         >> 0x1cU))) 
                         | (4U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1cU))))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                    } else {
                        if (((3U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU))) 
                             | (5U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                               >> 0x1cU))))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                        } else {
                            if ((6U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                >> 0x1cU)))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    if (((1U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                         >> 0x1cU))) 
                         | (4U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1cU))))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 1U;
                    } else {
                        if (((3U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU))) 
                             | (5U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                               >> 0x1cU))))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                        } else {
                            if ((6U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                >> 0x1cU)))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                            }
                        }
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_cmd_data_in0 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
            << 8U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                      >> 0x18U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in0_sel 
        = (1U & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                 >> 0x1bU));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_opcode 
        = (7U & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                 >> 0x18U));
    if ((0U != (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            if ((1U & (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                          >> 0x1fU)))) {
                if ((0x40000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])) {
                    if ((0x20000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])) {
                        if ((1U & (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                      >> 0x1cU)))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
                        }
                    }
                } else {
                    if ((0x20000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])) {
                        if ((0x10000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                        }
                    } else {
                        if ((0x10000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr_ptr_load_val 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                       << 0x1cU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                                    >> 4U)));
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en 
                = (1U & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                          >> 0x1fU) & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1eU)) 
                                       & (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1dU)))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in1 
        = (0xfU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                    << 0xcU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                                >> 0x14U)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.id 
        = (0xffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                     << 0xcU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[1U] 
                                 >> 0x14U)));
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en 
                = ((0x80000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                    ? 0U : ((0x40000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                             ? 0U : ((0x20000000U & 
                                      vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                      ? ((0x10000000U 
                                          & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                          ? 0U : 1U)
                                      : 0U)));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    if (((1U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                         >> 0x1cU))) 
                         | (4U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                           >> 0x1cU))))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                    } else {
                        if (((3U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                             >> 0x1cU))) 
                             | (5U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                               >> 0x1cU))))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 2U;
                        } else {
                            if ((6U == (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                >> 0x1cU)))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                            }
                        }
                    }
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable 
                = (1U & ((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                             >> 0x1fU)) & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                            >> 0x1eU) 
                                           & (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                                                 >> 0x1dU)))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
            << 0x1bU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[1U] 
                         >> 5U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
            << 0x1bU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[2U] 
                         >> 5U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U] 
        = (0x7fffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                      >> 5U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in0 
        = (0xfU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U] 
                   >> 0x14U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vout 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nobusy 
        = ((6U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nobusy)) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__nobusy_mon));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nobusy 
        = ((5U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nobusy)) 
           | ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__nobusy_mon) 
              << 1U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nobusy 
        = ((3U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nobusy)) 
           | ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__nobusy_mon) 
              << 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_time 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[1U] 
            << 0x1bU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[0U] 
                         >> 5U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_time 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[1U] 
            << 0x1bU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[0U] 
                         >> 5U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_time 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[1U] 
            << 0x1bU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[0U] 
                         >> 5U));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command[0U] 
        = (0x7ffU & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__cmd_read_addr));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command[1U] 
        = (0x7ffU & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__cmd_read_addr));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command[2U] 
        = (0x7ffU & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__cmd_read_addr));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_in 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_in 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_data 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_in 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__eq 
        = (0U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub_oflow 
        = (1U & ((((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg 
                       >> 0x1fU)) & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg 
                                     >> 0x1fU)) & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub 
                                                   >> 0x1fU)) 
                 | (((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg 
                      >> 0x1fU) & (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg 
                                      >> 0x1fU))) & 
                    (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub 
                        >> 0x1fU)))));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__eq 
        = (0U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub_oflow 
        = (1U & ((((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg 
                       >> 0x1fU)) & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg 
                                     >> 0x1fU)) & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub 
                                                   >> 0x1fU)) 
                 | (((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg 
                      >> 0x1fU) & (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg 
                                      >> 0x1fU))) & 
                    (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub 
                        >> 0x1fU)))));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__eq 
        = (0U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub_oflow 
        = (1U & ((((~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg 
                       >> 0x1fU)) & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg 
                                     >> 0x1fU)) & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub 
                                                   >> 0x1fU)) 
                 | (((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg 
                      >> 0x1fU) & (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg 
                                      >> 0x1fU))) & 
                    (~ (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub 
                        >> 0x1fU)))));
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__write_enable 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__write_enable 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__write_enable 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__write_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__write_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__write_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__youtslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__youtslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__youtslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__youtslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__youtslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__youtslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__youtslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__youtslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__youtslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__youtslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__youtslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__youtslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__youtslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__youtslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__youtslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__youtslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr_load_en 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset_ctrl 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__done_gate 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr_load_en 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset_ctrl 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__done_gate 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr_load_en 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset_ctrl 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__done_gate 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_addr 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_addr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__c_strobe_enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__sync.enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_load_en 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_en 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0_sel 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in0_sel;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_opcode;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1_sel 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__load_val 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr_ptr_load_val;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__read_addr_1 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_1_out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data
        [vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in1];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en_sel 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_cmd_in[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_cmd_in[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_cmd_in[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_i_in 
        = (0xfU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_i_in 
        = (0xffffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U] 
                         << 0xbU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
                                     >> 0x15U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_i_in 
        = (0x1ffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U] 
                        << 0x1eU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
                                     >> 2U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_i_in 
        = (0x1ffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
                      << 9U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
                                >> 0x17U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_i_in 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
                       << 0x1bU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
                                    >> 5U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_sel 
        = (1U & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U] 
                 >> 0xdU));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_sel 
        = (1U & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
                 >> 0x13U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_sel 
        = (1U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_sel 
        = (1U & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
                 >> 0x15U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__read_addr_0 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_0_out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data
        [vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in0];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_addr 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_addr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__c_strobe_enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__sync.enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_load_en 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_en 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0_sel 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in0_sel;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_opcode;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1_sel 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__load_val 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr_ptr_load_val;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__read_addr_1 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_1_out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data
        [vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in1];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en_sel 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_cmd_in[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_cmd_in[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_cmd_in[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_i_in 
        = (0xfU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_i_in 
        = (0xffffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U] 
                         << 0xbU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
                                     >> 0x15U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_i_in 
        = (0x1ffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U] 
                        << 0x1eU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
                                     >> 2U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_i_in 
        = (0x1ffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
                      << 9U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
                                >> 0x17U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_i_in 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
                       << 0x1bU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
                                    >> 5U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_sel 
        = (1U & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U] 
                 >> 0xdU));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_sel 
        = (1U & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
                 >> 0x13U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_sel 
        = (1U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_sel 
        = (1U & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
                 >> 0x15U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__read_addr_0 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_0_out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data
        [vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in0];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_addr 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_addr;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__c_strobe_enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__sync.enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_load_en 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_en 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0_sel 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in0_sel;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_opcode;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1_sel 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__load_val 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr_ptr_load_val;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__read_addr_1 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_1_out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data
        [vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in1];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en_sel 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_cmd_in[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_cmd_in[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_cmd_in[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_i_in 
        = (0xfU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_i_in 
        = (0xffffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U] 
                         << 0xbU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
                                     >> 0x15U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_i_in 
        = (0x1ffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U] 
                        << 0x1eU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
                                     >> 2U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_i_in 
        = (0x1ffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
                      << 9U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
                                >> 0x17U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_i_in 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
                       << 0x1bU) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
                                    >> 5U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_sel 
        = (1U & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U] 
                 >> 0xdU));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_sel 
        = (1U & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
                 >> 0x13U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_sel 
        = (1U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_sel 
        = (1U & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
                 >> 0x15U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__read_addr_0 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_0_out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data
        [vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in0];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__xoutslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__xoutslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__xoutslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__xoutslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__xoutslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__xoutslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__xoutslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__xoutslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__xoutslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__xoutslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__xoutslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__xoutslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__xoutslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__xoutslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__xoutslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__xoutslice 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vout;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__cstrobe_in 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cstrobe_in 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__cstrobe_in 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cstrobe_in 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__cstrobe_in 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cstrobe_in 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe;
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__in_val 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_in;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__in_val 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_in;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__in_val 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_in;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__le 
        = (1U & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub 
                  >> 0x1fU) ^ (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub_oflow)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__le 
        = (1U & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub 
                  >> 0x1fU) ^ (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub_oflow)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__le 
        = (1U & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub 
                  >> 0x1fU) ^ (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub_oflow)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[7U] 
        = ((0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[7U]) 
           | (0xffff0000U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__youtslice) 
                             << 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[7U] 
        = ((0xffff0000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[7U]) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__youtslice));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[6U] 
        = ((0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[6U]) 
           | (0xffff0000U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__youtslice) 
                             << 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[6U] 
        = ((0xffff0000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[6U]) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__youtslice));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[5U] 
        = ((0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[5U]) 
           | (0xffff0000U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__youtslice) 
                             << 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[5U] 
        = ((0xffff0000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[5U]) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__youtslice));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[4U] 
        = ((0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[4U]) 
           | (0xffff0000U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__youtslice) 
                             << 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[4U] 
        = ((0xffff0000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[4U]) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__youtslice));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[3U] 
        = ((0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[3U]) 
           | (0xffff0000U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__youtslice) 
                             << 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[3U] 
        = ((0xffff0000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[3U]) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__youtslice));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[2U] 
        = ((0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[2U]) 
           | (0xffff0000U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__youtslice) 
                             << 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[2U] 
        = ((0xffff0000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[2U]) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__youtslice));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[1U] 
        = ((0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[1U]) 
           | (0xffff0000U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__youtslice) 
                             << 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[1U] 
        = ((0xffff0000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[1U]) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__youtslice));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[0U] 
        = ((0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[0U]) 
           | (0xffff0000U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__youtslice) 
                             << 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[0U] 
        = ((0xffff0000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[0U]) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__youtslice));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset_ctrl) 
           | (0U != (0xfU & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reset_sr))));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_enable;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__procdone 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__done_gate;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset_ctrl) 
           | (0U != (0xfU & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reset_sr))));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_enable;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__procdone 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__done_gate;
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.reset) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = 1U;
    } else {
        if ((0U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = 1U;
        } else {
            if ((1U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = 0U;
            } else {
                if ((3U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = 0U;
                } else {
                    if ((2U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = 1U;
                    } else {
                        if ((6U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = 1U;
                        } else {
                            if ((7U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = 1U;
                            } else {
                                if ((5U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__reset 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset) 
                 >> 0U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__reset 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset) 
                 >> 1U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__reset 
        = (1U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset) 
                 >> 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset_ctrl) 
           | (0U != (0xfU & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reset_sr))));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_enable;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__procdone 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__done_gate;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__load_enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_load_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__ctrl 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_write_en 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_en 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U] 
            >> 0xeU) & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_en 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
            >> 0x14U) & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_en 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
            >> 1U) & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_en 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
            >> 0x16U) & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_write_en 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
            >> 4U) & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out1 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_1_out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en 
        = (1U & ((2U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en_sel))
                  ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_out
                  : (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en_sel)));
    if ((0U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_state
         [0U])) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.ready = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.data = 0U;
        if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.enable) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state[0U] = 1U;
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_addr[0U] 
                = (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.id));
        } else {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state[0U] = 0U;
        }
    } else {
        if ((1U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_state
             [0U])) {
            if (((2U >= vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_addr
                  [0U]) & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_valid) 
                           >> vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_addr
                           [0U]))) {
                vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.ready = 1U;
                vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.data 
                    = ((0xfffffffeU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.data) 
                       | ((2U >= vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_addr
                           [0U]) & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_input) 
                                    >> vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_addr
                                    [0U])));
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state[0U] = 0U;
            } else {
                vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.ready = 0U;
                vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.data 
                    = (0xfffffffeU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.data);
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state[0U] = 1U;
            }
        } else {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state[0U] = 0U;
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_in 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_i_in;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_0_out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__load_enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_load_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__ctrl 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_write_en 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_en 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U] 
            >> 0xeU) & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_en 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
            >> 0x14U) & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_en 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
            >> 1U) & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_en 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
            >> 0x16U) & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_write_en 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
            >> 4U) & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out1 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_1_out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en 
        = (1U & ((2U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en_sel))
                  ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_out
                  : (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en_sel)));
    if ((0U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_state
         [1U])) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.ready = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.data = 0U;
        if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.enable) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state[1U] = 1U;
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_addr[1U] 
                = (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.id));
        } else {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state[1U] = 0U;
        }
    } else {
        if ((1U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_state
             [1U])) {
            if (((2U >= vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_addr
                  [1U]) & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_valid) 
                           >> vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_addr
                           [1U]))) {
                vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.ready = 1U;
                vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.data 
                    = ((0xfffffffeU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.data) 
                       | ((2U >= vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_addr
                           [1U]) & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_input) 
                                    >> vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_addr
                                    [1U])));
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state[1U] = 0U;
            } else {
                vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.ready = 0U;
                vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.data 
                    = (0xfffffffeU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.data);
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state[1U] = 1U;
            }
        } else {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state[1U] = 0U;
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_in 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_i_in;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_0_out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__load_enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_load_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__ctrl 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_write_en 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_en 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[2U] 
            >> 0xeU) & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_en 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
            >> 0x14U) & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_en 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[1U] 
            >> 1U) & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_en 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
            >> 0x16U) & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_write_en 
        = ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i[0U] 
            >> 4U) & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out1 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_1_out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en 
        = (1U & ((2U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en_sel))
                  ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_out
                  : (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en_sel)));
    if ((0U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_state
         [2U])) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.ready = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.data = 0U;
        if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.enable) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state[2U] = 1U;
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_addr[2U] 
                = (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.id));
        } else {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state[2U] = 0U;
        }
    } else {
        if ((1U == vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_state
             [2U])) {
            if (((2U >= vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_addr
                  [2U]) & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_valid) 
                           >> vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_addr
                           [2U]))) {
                vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.ready = 1U;
                vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.data 
                    = ((0xfffffffeU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.data) 
                       | ((2U >= vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_addr
                           [2U]) & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_input) 
                                    >> vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_addr
                                    [2U])));
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state[2U] = 0U;
            } else {
                vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.ready = 0U;
                vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.data 
                    = (0xfffffffeU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.data);
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state[2U] = 1U;
            }
        } else {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state[2U] = 0U;
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_in 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_i_in;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_0_out;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[7U] 
        = ((0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[7U]) 
           | (0xffff0000U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__xoutslice) 
                             << 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[7U] 
        = ((0xffff0000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[7U]) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__xoutslice));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[6U] 
        = ((0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[6U]) 
           | (0xffff0000U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__xoutslice) 
                             << 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[6U] 
        = ((0xffff0000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[6U]) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__xoutslice));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[5U] 
        = ((0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[5U]) 
           | (0xffff0000U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__xoutslice) 
                             << 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[5U] 
        = ((0xffff0000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[5U]) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__xoutslice));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[4U] 
        = ((0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[4U]) 
           | (0xffff0000U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__xoutslice) 
                             << 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[4U] 
        = ((0xffff0000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[4U]) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__xoutslice));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[3U] 
        = ((0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[3U]) 
           | (0xffff0000U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__xoutslice) 
                             << 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[3U] 
        = ((0xffff0000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[3U]) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__xoutslice));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[2U] 
        = ((0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[2U]) 
           | (0xffff0000U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__xoutslice) 
                             << 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[2U] 
        = ((0xffff0000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[2U]) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__xoutslice));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[1U] 
        = ((0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[1U]) 
           | (0xffff0000U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__xoutslice) 
                             << 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[1U] 
        = ((0xffff0000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[1U]) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__xoutslice));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[0U] 
        = ((0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[0U]) 
           | (0xffff0000U & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__xoutslice) 
                             << 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[0U] 
        = ((0xffff0000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[0U]) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__xoutslice));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__ge 
        = (1U & (~ (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__le)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__ge 
        = (1U & (~ (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__le)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__ge 
        = (1U & (~ (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__le)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[3U][0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[3U][1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[3U][2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[3U][3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[3U][4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[3U][5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[3U][6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[3U][7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[7U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__rst 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__stbend 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__procdone;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__procdone_mon 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__procdone;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__rst 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__stbend 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__procdone;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__procdone_mon 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__procdone;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reset 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__reset;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reset 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__reset;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reset 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__reset;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__rst 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__stbend 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__procdone;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__procdone_mon 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__procdone;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__load_enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__cur_val 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en)
            ? (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr_ptr_load_val)
            : ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_enable)
                ? (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val_inc)
                : (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_ready 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.ready;
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state 
            = ((2U > (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles))
                ? 0U : 1U);
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state 
                = ((0x80000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                    ? ((0x40000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                        ? 1U : ((0x20000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                 ? ((0x10000000U & 
                                     vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                     ? 0U : 9U) : (
                                                   (0x10000000U 
                                                    & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                                    ? 
                                                   ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe)
                                                     ? 0U
                                                     : 1U)
                                                    : 0U)))
                    : ((0x40000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                        ? ((0x20000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                            ? ((0x10000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                ? 6U : 2U) : 4U) : 
                       ((0x20000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                         ? ((0x10000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                             ? 2U : 0U) : ((0x10000000U 
                                            & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                            ? 2U : 9U))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state = 3U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state 
                            = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.ready)
                                ? 2U : 4U);
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state 
                                = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__sync.ready)
                                    ? 7U : 6U);
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state = 9U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1 
        = ((2U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1_sel))
            ? vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.data
            : ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1_sel))
                ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out1
                : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_out));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__reg_in 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_in 
        = (0xffffffU & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_sel)
                         ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0
                         : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_i_in));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_in 
        = (0x1ffffU & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_sel)
                        ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0
                        : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_i_in));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_in 
        = (0x1ffU & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_sel)
                      ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0
                      : (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_i_in)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_in 
        = (0xffffU & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_sel)
                       ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0
                       : (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_i_in)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0_sel)
            ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0
            : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_cmd_data_in0);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__load_enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__cur_val 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en)
            ? (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr_ptr_load_val)
            : ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_enable)
                ? (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val_inc)
                : (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_ready 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.ready;
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state 
            = ((2U > (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles))
                ? 0U : 1U);
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state 
                = ((0x80000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                    ? ((0x40000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                        ? 1U : ((0x20000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                 ? ((0x10000000U & 
                                     vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                     ? 0U : 9U) : (
                                                   (0x10000000U 
                                                    & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                                    ? 
                                                   ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe)
                                                     ? 0U
                                                     : 1U)
                                                    : 0U)))
                    : ((0x40000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                        ? ((0x20000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                            ? ((0x10000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                ? 6U : 2U) : 4U) : 
                       ((0x20000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                         ? ((0x10000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                             ? 2U : 0U) : ((0x10000000U 
                                            & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                            ? 2U : 9U))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state = 3U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state 
                            = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.ready)
                                ? 2U : 4U);
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state 
                                = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__sync.ready)
                                    ? 7U : 6U);
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state = 9U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1 
        = ((2U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1_sel))
            ? vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.data
            : ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1_sel))
                ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out1
                : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_out));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__reg_in 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_in 
        = (0xffffffU & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_sel)
                         ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0
                         : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_i_in));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_in 
        = (0x1ffffU & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_sel)
                        ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0
                        : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_i_in));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_in 
        = (0x1ffU & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_sel)
                      ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0
                      : (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_i_in)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_in 
        = (0xffffU & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_sel)
                       ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0
                       : (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_i_in)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0_sel)
            ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0
            : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_cmd_data_in0);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__load_enable 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__cur_val 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en)
            ? (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr_ptr_load_val)
            : ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_enable)
                ? (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val_inc)
                : (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_ready 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.ready;
    if ((0U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state 
            = ((2U > (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles))
                ? 0U : 1U);
    } else {
        if ((1U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state 
                = ((0x80000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                    ? ((0x40000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                        ? 1U : ((0x20000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                 ? ((0x10000000U & 
                                     vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                     ? 0U : 9U) : (
                                                   (0x10000000U 
                                                    & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                                    ? 
                                                   ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe)
                                                     ? 0U
                                                     : 1U)
                                                    : 0U)))
                    : ((0x40000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                        ? ((0x20000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                            ? ((0x10000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                ? 6U : 2U) : 4U) : 
                       ((0x20000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                         ? ((0x10000000U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                             ? 2U : 0U) : ((0x10000000U 
                                            & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd[3U])
                                            ? 2U : 9U))));
        } else {
            if ((2U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state = 3U;
            } else {
                if ((3U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                        vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state 
                            = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.ready)
                                ? 2U : 4U);
                    } else {
                        if ((6U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state 
                                = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__sync.ready)
                                    ? 7U : 6U);
                        } else {
                            if ((7U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state = 0U;
                            } else {
                                if ((9U == (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state))) {
                                    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state = 9U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1 
        = ((2U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1_sel))
            ? vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.data
            : ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1_sel))
                ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out1
                : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_out));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__reg_in 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_in 
        = (0xffffffU & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_sel)
                         ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0
                         : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_i_in));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_in 
        = (0x1ffffU & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_sel)
                        ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0
                        : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_i_in));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_in 
        = (0x1ffU & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_sel)
                      ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0
                      : (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_i_in)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_in 
        = (0xffffU & ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_sel)
                       ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0
                       : (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_i_in)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0_sel)
            ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0
            : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_cmd_data_in0);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[3U][0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[3U][1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[3U][2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[3U][3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[3U][4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[3U][5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[3U][6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[3U][7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[7U];
    if ((4U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))) {
        if ((2U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                = ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))
                    ? 0U : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id1);
        } else {
            if ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = ((0xfffffffeU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out) 
                       | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__ge));
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = (1U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out);
            } else {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = ((0xfffffffeU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out) 
                       | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__le));
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = (1U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out);
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))) {
            if ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = ((0xfffffffeU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out) 
                       | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__eq));
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = (1U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out);
            } else {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub;
            }
        } else {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                = ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))
                    ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__add
                    : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id0);
        }
    }
    if ((4U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))) {
        if ((2U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                = ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))
                    ? 0U : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id1);
        } else {
            if ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = ((0xfffffffeU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out) 
                       | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__ge));
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = (1U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out);
            } else {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = ((0xfffffffeU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out) 
                       | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__le));
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = (1U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out);
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))) {
            if ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = ((0xfffffffeU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out) 
                       | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__eq));
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = (1U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out);
            } else {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub;
            }
        } else {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                = ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))
                    ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__add
                    : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id0);
        }
    }
    if ((4U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))) {
        if ((2U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))) {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                = ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))
                    ? 0U : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id1);
        } else {
            if ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = ((0xfffffffeU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out) 
                       | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__ge));
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = (1U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out);
            } else {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = ((0xfffffffeU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out) 
                       | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__le));
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = (1U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out);
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))) {
            if ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))) {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = ((0xfffffffeU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out) 
                       | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__eq));
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = (1U & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out);
            } else {
                vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                    = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub;
            }
        } else {
            vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out 
                = ((1U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode))
                    ? vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__add
                    : vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id0);
        }
    }
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__stbprocend 
        = ((6U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__stbprocend)) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__stbend));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procdone 
        = ((6U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procdone)) 
           | (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__procdone_mon));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__stbprocend 
        = ((5U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__stbprocend)) 
           | ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__stbend) 
              << 1U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procdone 
        = ((5U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procdone)) 
           | ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__procdone_mon) 
              << 1U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__reset 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procreset;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__reset 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reset;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reset 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reset;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__reset 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reset;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reset 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reset;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__reset 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reset;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reset 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reset;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__stbprocend 
        = ((3U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__stbprocend)) 
           | ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__stbend) 
              << 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procdone 
        = ((3U & (IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procdone)) 
           | ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__procdone_mon) 
              << 2U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__ptr_out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__cur_val;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__ptr_out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__cur_val;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__ptr_out 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__cur_val;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__memif.instr_ptr 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__ptr_out;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__memif.instr_ptr 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__ptr_out;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__memif.instr_ptr 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__ptr_out;
}

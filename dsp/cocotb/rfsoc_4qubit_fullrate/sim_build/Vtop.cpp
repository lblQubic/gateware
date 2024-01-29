// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop.h"
#include "Vtop__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , stb_start{vlSymsp->TOP.stb_start}
    , proc_write_sel{vlSymsp->TOP.proc_write_sel}
    , mem_write_sel{vlSymsp->TOP.mem_write_sel}
    , mem_write_en{vlSymsp->TOP.mem_write_en}
    , mem_write_addr{vlSymsp->TOP.mem_write_addr}
    , buf_read_addr{vlSymsp->TOP.buf_read_addr}
    , nshot{vlSymsp->TOP.nshot}
    , mem_write_data{vlSymsp->TOP.mem_write_data}
    , adc{vlSymsp->TOP.adc}
    , dac{vlSymsp->TOP.dac}
    , acc_read_data{vlSymsp->TOP.acc_read_data}
    , acq_read_data{vlSymsp->TOP.acq_read_data}
    , __PVT__dsp_sim_toplevel__DOT__dspif{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspif}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__7__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__7__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__6__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__6__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__5__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__5__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__4__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__4__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__3__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__3__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__7__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__7__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__6__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__6__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__5__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__5__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__4__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__4__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__3__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__3__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__2__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__2__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__1__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__1__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__0__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__0__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdloelemconn{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdloelemconn}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdloelemconn{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdloelemconn}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdloelemconn{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdloelemconn}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__proc_core{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__proc_core}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__proc_core{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__proc_core}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__3__KET____DOT__genblk1__DOT__rdlo0mixacc1{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__3__KET____DOT__genblk1__DOT__rdlo0mixacc1}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__4__KET____DOT__genblk1__DOT__rdlo0mixacc1{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__4__KET____DOT__genblk1__DOT__rdlo0mixacc1}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__5__KET____DOT__genblk1__DOT__rdlo0mixacc1{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__5__KET____DOT__genblk1__DOT__rdlo0mixacc1}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__6__KET____DOT__genblk1__DOT__rdlo0mixacc1{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__6__KET____DOT__genblk1__DOT__rdlo0mixacc1}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__7__KET____DOT__genblk1__DOT__rdlo0mixacc1{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__7__KET____DOT__genblk1__DOT__rdlo0mixacc1}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__0__KET____DOT__state_disc{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__0__KET____DOT__state_disc}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__1__KET____DOT__state_disc{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__1__KET____DOT__state_disc}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__2__KET____DOT__state_disc{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__2__KET____DOT__state_disc}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__3__KET____DOT__state_disc{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__3__KET____DOT__state_disc}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__4__KET____DOT__state_disc{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__4__KET____DOT__state_disc}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__5__KET____DOT__state_disc{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__5__KET____DOT__state_disc}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__6__KET____DOT__state_disc{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__6__KET____DOT__state_disc}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__7__KET____DOT__state_disc{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__7__KET____DOT__state_disc}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod}
    , __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod{vlSymsp->TOP.__PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_static(Vtop___024root* vlSelf);
void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop___024root___eval_static(&(vlSymsp->TOP));
        Vtop___024root___eval_initial(&(vlSymsp->TOP));
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtop::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtop::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return false; }

uint64_t Vtop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop___024root___eval_final(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop::final() {
    Vtop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

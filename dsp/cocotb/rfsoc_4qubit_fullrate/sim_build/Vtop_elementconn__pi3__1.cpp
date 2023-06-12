// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_elementconn__pi3.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__11(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__11\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.valid 
        = this->ammod__DOT__gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.prepbusy 
        = (0U != this->busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multiy 
        = this->ammod__DOT__multiy16x16;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multix 
        = this->ammod__DOT__multix16x16;
    this->ammod__DOT__tcnt = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.tcnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.valid;
    this->ammod__DOT__phtime__DOT__tcnt = this->ammod__DOT__tcnt;
}

VL_INLINE_OPT void Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__16(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__16\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->ammod__DOT__pini = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.pini;
    this->ammod__DOT__ampx = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.ampx;
    this->ammod__DOT__pinidelay__DOT__din = this->ammod__DOT__pini;
    this->ammod__DOT__ampxdelay__DOT__din = this->ammod__DOT__ampx;
}

VL_INLINE_OPT void Vtop_elementconn__pi3::_multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__19(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__19\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->lastenv = ((IData)(this->envaddr_cnt) == 
                     (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.envstart) 
                       + (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.envlength)) 
                      - (IData)(1U)));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_ifelement__Ec_EB20_F9_FB80.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop_ifelement__Ec_EB20_F9_FB80::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__Ec_EB20_F9_FB80::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____7\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__reset_sr = this->reset_sr;
    this->__Vdly__cmdstb_sr = this->cmdstb_sr;
    this->valid_r = this->valid;
    this->__Vdly__reset_sr = ((0xfffeU & ((IData)(this->reset_sr) 
                                          << 1U)) | (IData)(this->reset));
    this->tcnt = ((0x100U & (IData)(this->reset_sr))
                   ? 0U : (0x7ffffffU & ((IData)(1U) 
                                         + this->tcnt)));
    this->dummy_cmdstb_sr = (1U & ((IData)(this->cmdstb_sr) 
                                   >> 0xfU));
    this->__Vdly__cmdstb_sr = ((0xfffeU & ((IData)(this->cmdstb_sr) 
                                           << 1U)) 
                               | (IData)(this->cmdstb));
    this->busy_r = ((IData)(this->cmdstb) | ((0U != (IData)(this->cmdstb_sr)) 
                                             | ((IData)(this->prepbusy) 
                                                | ((IData)(this->pulsebusy) 
                                                   | (IData)(this->postprobusy)))));
    this->multiy_r = this->multiy;
    this->multix_r = this->multix;
    this->cw_d4 = this->cw_d3;
    this->reset_sr = this->__Vdly__reset_sr;
    this->cmdstb_sr = this->__Vdly__cmdstb_sr;
    this->cw2 = this->cw_d4;
    this->cw_d3 = this->cw_d2;
    this->cw_d2 = this->cw_d1;
    this->cw = this->cw_d2;
    this->cw_d1 = this->cw_d0;
    this->cw_d0 = (1U & (~ (IData)((0U != (IData)(this->envlength)))));
}

VL_INLINE_OPT void Vtop_ifelement__Ec_EB20_F9_FB80::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__Ec_EB20_F9_FB80::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____8\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->multiy_check[0U] = (0xffffU & (IData)(this->multiy));
    this->multiy_check[1U] = (0xffffU & (IData)((this->multiy 
                                                 >> 0x10U)));
    this->multiy_check[2U] = (0xffffU & (IData)((this->multiy 
                                                 >> 0x20U)));
    this->multiy_check[3U] = (0xffffU & (IData)((this->multiy 
                                                 >> 0x30U)));
    this->multix_check[0U] = (0xffffU & (IData)(this->multix));
    this->multix_check[1U] = (0xffffU & (IData)((this->multix 
                                                 >> 0x10U)));
    this->multix_check[2U] = (0xffffU & (IData)((this->multix 
                                                 >> 0x20U)));
    this->multix_check[3U] = (0xffffU & (IData)((this->multix 
                                                 >> 0x30U)));
}

VL_INLINE_OPT void Vtop_ifelement__Ec_EB20_F9_FB80::_multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____13(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__Ec_EB20_F9_FB80::_multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____13\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->busy = ((IData)(this->busy_r) | (IData)(this->cmdstb));
}

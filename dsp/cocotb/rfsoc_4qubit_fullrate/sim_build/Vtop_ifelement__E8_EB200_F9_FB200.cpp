// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_ifelement__E8_EB200_F9_FB200.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop_ifelement__E8_EB200_F9_FB200::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__E8_EB200_F9_FB200::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____9\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->multiy_check[0U] = (0xffffU & this->multiy[0U]);
    this->multiy_check[1U] = (0xffffU & ((this->multiy[1U] 
                                          << 0x10U) 
                                         | (this->multiy[0U] 
                                            >> 0x10U)));
    this->multiy_check[2U] = (0xffffU & this->multiy[1U]);
    this->multiy_check[3U] = (0xffffU & ((this->multiy[2U] 
                                          << 0x10U) 
                                         | (this->multiy[1U] 
                                            >> 0x10U)));
    this->multiy_check[4U] = (0xffffU & this->multiy[2U]);
    this->multiy_check[5U] = (0xffffU & ((this->multiy[3U] 
                                          << 0x10U) 
                                         | (this->multiy[2U] 
                                            >> 0x10U)));
    this->multiy_check[6U] = (0xffffU & this->multiy[3U]);
    this->multiy_check[7U] = (0xffffU & ((this->multiy[4U] 
                                          << 0x10U) 
                                         | (this->multiy[3U] 
                                            >> 0x10U)));
    this->multiy_check[8U] = (0xffffU & this->multiy[4U]);
    this->multiy_check[9U] = (0xffffU & ((this->multiy[5U] 
                                          << 0x10U) 
                                         | (this->multiy[4U] 
                                            >> 0x10U)));
    this->multiy_check[0xaU] = (0xffffU & this->multiy[5U]);
    this->multiy_check[0xbU] = (0xffffU & ((this->multiy[6U] 
                                            << 0x10U) 
                                           | (this->multiy[5U] 
                                              >> 0x10U)));
    this->multiy_check[0xcU] = (0xffffU & this->multiy[6U]);
    this->multiy_check[0xdU] = (0xffffU & ((this->multiy[7U] 
                                            << 0x10U) 
                                           | (this->multiy[6U] 
                                              >> 0x10U)));
    this->multiy_check[0xeU] = (0xffffU & this->multiy[7U]);
    this->multiy_check[0xfU] = (0xffffU & (this->multiy[7U] 
                                           >> 0x10U));
    this->multix_check[0U] = (0xffffU & this->multix[0U]);
    this->multix_check[1U] = (0xffffU & ((this->multix[1U] 
                                          << 0x10U) 
                                         | (this->multix[0U] 
                                            >> 0x10U)));
    this->multix_check[2U] = (0xffffU & this->multix[1U]);
    this->multix_check[3U] = (0xffffU & ((this->multix[2U] 
                                          << 0x10U) 
                                         | (this->multix[1U] 
                                            >> 0x10U)));
    this->multix_check[4U] = (0xffffU & this->multix[2U]);
    this->multix_check[5U] = (0xffffU & ((this->multix[3U] 
                                          << 0x10U) 
                                         | (this->multix[2U] 
                                            >> 0x10U)));
    this->multix_check[6U] = (0xffffU & this->multix[3U]);
    this->multix_check[7U] = (0xffffU & ((this->multix[4U] 
                                          << 0x10U) 
                                         | (this->multix[3U] 
                                            >> 0x10U)));
    this->multix_check[8U] = (0xffffU & this->multix[4U]);
    this->multix_check[9U] = (0xffffU & ((this->multix[5U] 
                                          << 0x10U) 
                                         | (this->multix[4U] 
                                            >> 0x10U)));
    this->multix_check[0xaU] = (0xffffU & this->multix[5U]);
    this->multix_check[0xbU] = (0xffffU & ((this->multix[6U] 
                                            << 0x10U) 
                                           | (this->multix[5U] 
                                              >> 0x10U)));
    this->multix_check[0xcU] = (0xffffU & this->multix[6U]);
    this->multix_check[0xdU] = (0xffffU & ((this->multix[7U] 
                                            << 0x10U) 
                                           | (this->multix[6U] 
                                              >> 0x10U)));
    this->multix_check[0xeU] = (0xffffU & this->multix[7U]);
    this->multix_check[0xfU] = (0xffffU & (this->multix[7U] 
                                           >> 0x10U));
}

VL_INLINE_OPT void Vtop_ifelement__E8_EB200_F9_FB200::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__E8_EB200_F9_FB200::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____10\n"); );
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
    this->cw_d4 = this->cw_d3;
    this->multiy_r[0U] = this->multiy[0U];
    this->multiy_r[1U] = this->multiy[1U];
    this->multiy_r[2U] = this->multiy[2U];
    this->multiy_r[3U] = this->multiy[3U];
    this->multiy_r[4U] = this->multiy[4U];
    this->multiy_r[5U] = this->multiy[5U];
    this->multiy_r[6U] = this->multiy[6U];
    this->multiy_r[7U] = this->multiy[7U];
    this->multix_r[0U] = this->multix[0U];
    this->multix_r[1U] = this->multix[1U];
    this->multix_r[2U] = this->multix[2U];
    this->multix_r[3U] = this->multix[3U];
    this->multix_r[4U] = this->multix[4U];
    this->multix_r[5U] = this->multix[5U];
    this->multix_r[6U] = this->multix[6U];
    this->multix_r[7U] = this->multix[7U];
    this->reset_sr = this->__Vdly__reset_sr;
    this->cmdstb_sr = this->__Vdly__cmdstb_sr;
    this->cw2 = this->cw_d4;
    this->cw_d3 = this->cw_d2;
    this->cw_d2 = this->cw_d1;
    this->cw = this->cw_d2;
    this->cw_d1 = this->cw_d0;
    this->cw_d0 = (1U & (~ (IData)((0U != (IData)(this->envlength)))));
}

VL_INLINE_OPT void Vtop_ifelement__E8_EB200_F9_FB200::_multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____16(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__E8_EB200_F9_FB200::_multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____16\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->busy = ((IData)(this->busy_r) | (IData)(this->cmdstb));
}

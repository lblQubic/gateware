// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_ifelement__Ec_F9_FB80.h"

VL_INLINE_OPT void Vtop_ifelement__Ec_F9_FB80___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET____0(Vtop_ifelement__Ec_F9_FB80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__Ec_F9_FB80___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET____0\n"); );
    // Body
    vlSelf->cw = vlSelf->cw_d2;
    vlSelf->cw2 = vlSelf->cw_d4;
    vlSelf->busy = ((IData)(vlSelf->busy_r) | (IData)(vlSelf->cmdstb));
    vlSelf->multiy_check[0U] = (0xffffU & (IData)(vlSelf->multiy));
    vlSelf->multiy_check[1U] = (0xffffU & (IData)((vlSelf->multiy 
                                                   >> 0x10U)));
    vlSelf->multiy_check[2U] = (0xffffU & (IData)((vlSelf->multiy 
                                                   >> 0x20U)));
    vlSelf->multiy_check[3U] = (0xffffU & (IData)((vlSelf->multiy 
                                                   >> 0x30U)));
    vlSelf->multix_check[0U] = (0xffffU & (IData)(vlSelf->multix));
    vlSelf->multix_check[1U] = (0xffffU & (IData)((vlSelf->multix 
                                                   >> 0x10U)));
    vlSelf->multix_check[2U] = (0xffffU & (IData)((vlSelf->multix 
                                                   >> 0x20U)));
    vlSelf->multix_check[3U] = (0xffffU & (IData)((vlSelf->multix 
                                                   >> 0x30U)));
}

VL_INLINE_OPT void Vtop_ifelement__Ec_F9_FB80___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET____0(Vtop_ifelement__Ec_F9_FB80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__Ec_F9_FB80___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET____0\n"); );
    // Init
    SData/*15:0*/ __Vdly__reset_sr;
    __Vdly__reset_sr = 0;
    SData/*15:0*/ __Vdly__cmdstb_sr;
    __Vdly__cmdstb_sr = 0;
    // Body
    __Vdly__reset_sr = vlSelf->reset_sr;
    __Vdly__cmdstb_sr = vlSelf->cmdstb_sr;
    __Vdly__reset_sr = ((0xfffeU & ((IData)(vlSelf->reset_sr) 
                                    << 1U)) | (IData)(vlSelf->reset));
    vlSelf->tcnt = ((0x100U & (IData)(vlSelf->reset_sr))
                     ? 0U : (0x7ffffffU & ((IData)(1U) 
                                           + vlSelf->tcnt)));
    vlSelf->dummy_cmdstb_sr = (1U & ((IData)(vlSelf->cmdstb_sr) 
                                     >> 0xfU));
    __Vdly__cmdstb_sr = ((0xfffeU & ((IData)(vlSelf->cmdstb_sr) 
                                     << 1U)) | (IData)(vlSelf->cmdstb));
    vlSelf->busy_r = ((IData)(vlSelf->cmdstb) | ((0U 
                                                  != (IData)(vlSelf->cmdstb_sr)) 
                                                 | ((IData)(vlSelf->prepbusy) 
                                                    | ((IData)(vlSelf->pulsebusy) 
                                                       | (IData)(vlSelf->postprobusy)))));
    vlSelf->cw_d4 = vlSelf->cw_d3;
    vlSelf->valid_r = vlSelf->valid;
    vlSelf->multix_r = vlSelf->multix;
    vlSelf->multiy_r = vlSelf->multiy;
    vlSelf->reset_sr = __Vdly__reset_sr;
    vlSelf->cmdstb_sr = __Vdly__cmdstb_sr;
    vlSelf->cw2 = vlSelf->cw_d4;
    vlSelf->cw_d3 = vlSelf->cw_d2;
    vlSelf->cw_d2 = vlSelf->cw_d1;
    vlSelf->cw = vlSelf->cw_d2;
    vlSelf->cw_d1 = vlSelf->cw_d0;
    vlSelf->cw_d0 = (1U & (~ (IData)((0U != (IData)(vlSelf->envlength)))));
}

VL_INLINE_OPT void Vtop_ifelement__Ec_F9_FB80___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET____1(Vtop_ifelement__Ec_F9_FB80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__Ec_F9_FB80___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET____1\n"); );
    // Body
    vlSelf->multix_check[0U] = (0xffffU & (IData)(vlSelf->multix));
    vlSelf->multix_check[1U] = (0xffffU & (IData)((vlSelf->multix 
                                                   >> 0x10U)));
    vlSelf->multix_check[2U] = (0xffffU & (IData)((vlSelf->multix 
                                                   >> 0x20U)));
    vlSelf->multix_check[3U] = (0xffffU & (IData)((vlSelf->multix 
                                                   >> 0x30U)));
    vlSelf->multiy_check[0U] = (0xffffU & (IData)(vlSelf->multiy));
    vlSelf->multiy_check[1U] = (0xffffU & (IData)((vlSelf->multiy 
                                                   >> 0x10U)));
    vlSelf->multiy_check[2U] = (0xffffU & (IData)((vlSelf->multiy 
                                                   >> 0x20U)));
    vlSelf->multiy_check[3U] = (0xffffU & (IData)((vlSelf->multiy 
                                                   >> 0x30U)));
}

VL_INLINE_OPT void Vtop_ifelement__Ec_F9_FB80___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET____0(Vtop_ifelement__Ec_F9_FB80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__Ec_F9_FB80___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET____0\n"); );
    // Body
    vlSelf->busy = ((IData)(vlSelf->busy_r) | (IData)(vlSelf->cmdstb));
}

std::string VL_TO_STRING(const Vtop_ifelement__Ec_F9_FB80* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__Ec_F9_FB80::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}

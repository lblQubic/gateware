// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_ifelement__E8_EB200_F9_FB200.h"

VL_INLINE_OPT void Vtop_ifelement__E8_EB200_F9_FB200___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET____0(Vtop_ifelement__E8_EB200_F9_FB200* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__E8_EB200_F9_FB200___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET____0\n"); );
    // Body
    vlSelf->cw = vlSelf->cw_d2;
    vlSelf->cw2 = vlSelf->cw_d4;
    vlSelf->busy = ((IData)(vlSelf->busy_r) | (IData)(vlSelf->cmdstb));
}

VL_INLINE_OPT void Vtop_ifelement__E8_EB200_F9_FB200___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET____1(Vtop_ifelement__E8_EB200_F9_FB200* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__E8_EB200_F9_FB200___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET____1\n"); );
    // Body
    vlSelf->multiy_check[0U] = (0xffffU & vlSelf->multiy[0U]);
    vlSelf->multiy_check[1U] = (vlSelf->multiy[0U] 
                                >> 0x10U);
    vlSelf->multiy_check[2U] = (0xffffU & vlSelf->multiy[1U]);
    vlSelf->multiy_check[3U] = (vlSelf->multiy[1U] 
                                >> 0x10U);
    vlSelf->multiy_check[4U] = (0xffffU & vlSelf->multiy[2U]);
    vlSelf->multiy_check[5U] = (vlSelf->multiy[2U] 
                                >> 0x10U);
    vlSelf->multiy_check[6U] = (0xffffU & vlSelf->multiy[3U]);
    vlSelf->multiy_check[7U] = (vlSelf->multiy[3U] 
                                >> 0x10U);
    vlSelf->multiy_check[8U] = (0xffffU & vlSelf->multiy[4U]);
    vlSelf->multiy_check[9U] = (vlSelf->multiy[4U] 
                                >> 0x10U);
    vlSelf->multiy_check[0xaU] = (0xffffU & vlSelf->multiy[5U]);
    vlSelf->multiy_check[0xbU] = (vlSelf->multiy[5U] 
                                  >> 0x10U);
    vlSelf->multiy_check[0xcU] = (0xffffU & vlSelf->multiy[6U]);
    vlSelf->multiy_check[0xdU] = (vlSelf->multiy[6U] 
                                  >> 0x10U);
    vlSelf->multiy_check[0xeU] = (0xffffU & vlSelf->multiy[7U]);
    vlSelf->multiy_check[0xfU] = (vlSelf->multiy[7U] 
                                  >> 0x10U);
    vlSelf->multix_check[0U] = (0xffffU & vlSelf->multix[0U]);
    vlSelf->multix_check[1U] = (vlSelf->multix[0U] 
                                >> 0x10U);
    vlSelf->multix_check[2U] = (0xffffU & vlSelf->multix[1U]);
    vlSelf->multix_check[3U] = (vlSelf->multix[1U] 
                                >> 0x10U);
    vlSelf->multix_check[4U] = (0xffffU & vlSelf->multix[2U]);
    vlSelf->multix_check[5U] = (vlSelf->multix[2U] 
                                >> 0x10U);
    vlSelf->multix_check[6U] = (0xffffU & vlSelf->multix[3U]);
    vlSelf->multix_check[7U] = (vlSelf->multix[3U] 
                                >> 0x10U);
    vlSelf->multix_check[8U] = (0xffffU & vlSelf->multix[4U]);
    vlSelf->multix_check[9U] = (vlSelf->multix[4U] 
                                >> 0x10U);
    vlSelf->multix_check[0xaU] = (0xffffU & vlSelf->multix[5U]);
    vlSelf->multix_check[0xbU] = (vlSelf->multix[5U] 
                                  >> 0x10U);
    vlSelf->multix_check[0xcU] = (0xffffU & vlSelf->multix[6U]);
    vlSelf->multix_check[0xdU] = (vlSelf->multix[6U] 
                                  >> 0x10U);
    vlSelf->multix_check[0xeU] = (0xffffU & vlSelf->multix[7U]);
    vlSelf->multix_check[0xfU] = (vlSelf->multix[7U] 
                                  >> 0x10U);
}

VL_INLINE_OPT void Vtop_ifelement__E8_EB200_F9_FB200___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET____0(Vtop_ifelement__E8_EB200_F9_FB200* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__E8_EB200_F9_FB200___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET____0\n"); );
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
    vlSelf->valid_r = vlSelf->valid;
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
    vlSelf->multiy_r[0U] = vlSelf->multiy[0U];
    vlSelf->multiy_r[1U] = vlSelf->multiy[1U];
    vlSelf->multiy_r[2U] = vlSelf->multiy[2U];
    vlSelf->multiy_r[3U] = vlSelf->multiy[3U];
    vlSelf->multiy_r[4U] = vlSelf->multiy[4U];
    vlSelf->multiy_r[5U] = vlSelf->multiy[5U];
    vlSelf->multiy_r[6U] = vlSelf->multiy[6U];
    vlSelf->multiy_r[7U] = vlSelf->multiy[7U];
    vlSelf->multix_r[0U] = vlSelf->multix[0U];
    vlSelf->multix_r[1U] = vlSelf->multix[1U];
    vlSelf->multix_r[2U] = vlSelf->multix[2U];
    vlSelf->multix_r[3U] = vlSelf->multix[3U];
    vlSelf->multix_r[4U] = vlSelf->multix[4U];
    vlSelf->multix_r[5U] = vlSelf->multix[5U];
    vlSelf->multix_r[6U] = vlSelf->multix[6U];
    vlSelf->multix_r[7U] = vlSelf->multix[7U];
    vlSelf->reset_sr = __Vdly__reset_sr;
    vlSelf->cmdstb_sr = __Vdly__cmdstb_sr;
    vlSelf->cw2 = vlSelf->cw_d4;
    vlSelf->cw_d3 = vlSelf->cw_d2;
    vlSelf->cw_d2 = vlSelf->cw_d1;
    vlSelf->cw = vlSelf->cw_d2;
    vlSelf->cw_d1 = vlSelf->cw_d0;
    vlSelf->cw_d0 = (1U & (~ (IData)((0U != (IData)(vlSelf->envlength)))));
}

VL_INLINE_OPT void Vtop_ifelement__E8_EB200_F9_FB200___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET____0(Vtop_ifelement__E8_EB200_F9_FB200* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__E8_EB200_F9_FB200___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET____0\n"); );
    // Body
    vlSelf->busy = ((IData)(vlSelf->busy_r) | (IData)(vlSelf->cmdstb));
}

std::string VL_TO_STRING(const Vtop_ifelement__E8_EB200_F9_FB200* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__E8_EB200_F9_FB200::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}

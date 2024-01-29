// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_panzoomtrigif__N4_D100.h"

VL_INLINE_OPT void Vtop_panzoomtrigif__N4_D100___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____0(Vtop_panzoomtrigif__N4_D100* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_panzoomtrigif__N4_D100___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____0\n"); );
    // Body
    vlSelf->delayaftertrigcnt0 = (1U & (~ (IData)((0U 
                                                   != (IData)(vlSelf->delayaftertrigcnt)))));
    vlSelf->decimator0 = (1U & (~ (IData)((0U != (IData)(vlSelf->decimatorcnt)))));
    vlSelf->nextaddr = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->addr)));
    vlSelf->buffull = (0x1ffU == (IData)(vlSelf->addr));
}

VL_INLINE_OPT void Vtop_panzoomtrigif__N4_D100___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____0(Vtop_panzoomtrigif__N4_D100* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_panzoomtrigif__N4_D100___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____0\n"); );
    // Init
    SData/*15:0*/ __Vdly__delayaftertrigcnt;
    __Vdly__delayaftertrigcnt = 0;
    CData/*7:0*/ __Vdly__decimatorcnt;
    __Vdly__decimatorcnt = 0;
    // Body
    __Vdly__decimatorcnt = vlSelf->decimatorcnt;
    __Vdly__delayaftertrigcnt = vlSelf->delayaftertrigcnt;
    if (vlSelf->reset) {
        __Vdly__decimatorcnt = vlSelf->decimator;
        __Vdly__delayaftertrigcnt = vlSelf->delayaftertrig;
        vlSelf->we = 0U;
        vlSelf->addr = 0U;
    } else if ((7U == vlSelf->nextstate)) {
        __Vdly__decimatorcnt = vlSelf->decimator;
        __Vdly__delayaftertrigcnt = vlSelf->delayaftertrig;
        vlSelf->we = 0U;
        vlSelf->addr = 0U;
    } else {
        if ((5U != vlSelf->nextstate)) {
            if ((4U != vlSelf->nextstate)) {
                if ((1U == vlSelf->nextstate)) {
                    __Vdly__decimatorcnt = (0xffU & 
                                            ((IData)(vlSelf->decimatorcnt) 
                                             - (IData)(1U)));
                } else if ((0U == vlSelf->nextstate)) {
                    __Vdly__decimatorcnt = vlSelf->decimator;
                }
                if ((1U != vlSelf->nextstate)) {
                    if ((0U == vlSelf->nextstate)) {
                        vlSelf->addr = vlSelf->nextaddr;
                    }
                }
            }
            if ((4U == vlSelf->nextstate)) {
                __Vdly__delayaftertrigcnt = (0xffffU 
                                             & ((IData)(vlSelf->delayaftertrigcnt) 
                                                - (IData)(1U)));
            }
        }
        if ((5U == vlSelf->nextstate)) {
            vlSelf->we = 0U;
        } else if ((4U == vlSelf->nextstate)) {
            vlSelf->we = 0U;
        } else if ((1U == vlSelf->nextstate)) {
            vlSelf->we = 0U;
        } else if ((0U == vlSelf->nextstate)) {
            vlSelf->we = 1U;
        } else if ((2U == vlSelf->nextstate)) {
            vlSelf->we = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((7U != vlSelf->nextstate)) {
            if ((5U != vlSelf->nextstate)) {
                if ((4U != vlSelf->nextstate)) {
                    if ((1U != vlSelf->nextstate)) {
                        if ((0U == vlSelf->nextstate)) {
                            vlSelf->data[0U] = vlSelf->datasel[0U];
                            vlSelf->data[1U] = vlSelf->datasel[1U];
                            vlSelf->data[2U] = vlSelf->datasel[2U];
                            vlSelf->data[3U] = vlSelf->datasel[3U];
                            vlSelf->data[4U] = vlSelf->datasel[4U];
                            vlSelf->data[5U] = vlSelf->datasel[5U];
                            vlSelf->data[6U] = vlSelf->datasel[6U];
                            vlSelf->data[7U] = vlSelf->datasel[7U];
                        }
                    }
                }
            }
        }
    }
    vlSelf->decimatorcnt = __Vdly__decimatorcnt;
    vlSelf->delayaftertrigcnt = __Vdly__delayaftertrigcnt;
    vlSelf->nextaddr = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->addr)));
    vlSelf->datasel[0U] = vlSelf->chan[(3U & (IData)(vlSelf->chansel))][0U];
    vlSelf->datasel[1U] = vlSelf->chan[(3U & (IData)(vlSelf->chansel))][1U];
    vlSelf->datasel[2U] = vlSelf->chan[(3U & (IData)(vlSelf->chansel))][2U];
    vlSelf->datasel[3U] = vlSelf->chan[(3U & (IData)(vlSelf->chansel))][3U];
    vlSelf->datasel[4U] = vlSelf->chan[(3U & (IData)(vlSelf->chansel))][4U];
    vlSelf->datasel[5U] = vlSelf->chan[(3U & (IData)(vlSelf->chansel))][5U];
    vlSelf->datasel[6U] = vlSelf->chan[(3U & (IData)(vlSelf->chansel))][6U];
    vlSelf->datasel[7U] = vlSelf->chan[(3U & (IData)(vlSelf->chansel))][7U];
}

VL_INLINE_OPT void Vtop_panzoomtrigif__N4_D100___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____1(Vtop_panzoomtrigif__N4_D100* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_panzoomtrigif__N4_D100___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____1\n"); );
    // Body
    vlSelf->nextstate = 7U;
    if ((7U == vlSelf->state)) {
        vlSelf->nextstate = 5U;
    } else if ((5U == vlSelf->state)) {
        vlSelf->nextstate = ((IData)(vlSelf->trig) ? 
                             ((IData)(vlSelf->delayaftertrigcnt0)
                               ? 0U : 4U) : 5U);
    } else if ((4U == vlSelf->state)) {
        vlSelf->nextstate = ((IData)(vlSelf->delayaftertrigcnt0)
                              ? 0U : 4U);
    } else if ((1U == vlSelf->state)) {
        vlSelf->nextstate = ((IData)(vlSelf->decimator0)
                              ? 0U : 1U);
    } else if ((0U == vlSelf->state)) {
        vlSelf->nextstate = ((IData)(vlSelf->buffull)
                              ? 2U : ((IData)(vlSelf->decimator0)
                                       ? 0U : 1U));
    } else if ((2U == vlSelf->state)) {
        vlSelf->nextstate = 2U;
    }
}

VL_INLINE_OPT void Vtop_panzoomtrigif__N4_D100___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____2(Vtop_panzoomtrigif__N4_D100* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_panzoomtrigif__N4_D100___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____2\n"); );
    // Body
    vlSelf->delayaftertrigcnt0 = (1U & (~ (IData)((0U 
                                                   != (IData)(vlSelf->delayaftertrigcnt)))));
    vlSelf->decimator0 = (1U & (~ (IData)((0U != (IData)(vlSelf->decimatorcnt)))));
    vlSelf->buffull = (0x1ffU == (IData)(vlSelf->addr));
    vlSelf->trig = vlSelf->stb_start;
    vlSelf->state = ((IData)(vlSelf->reset) ? 7U : vlSelf->nextstate);
}

std::string VL_TO_STRING(const Vtop_panzoomtrigif__N4_D100* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_panzoomtrigif__N4_D100::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}

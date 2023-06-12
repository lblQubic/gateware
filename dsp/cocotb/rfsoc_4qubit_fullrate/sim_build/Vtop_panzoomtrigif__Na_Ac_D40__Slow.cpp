// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_panzoomtrigif__Na_Ac_D40.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop_panzoomtrigif__Na_Ac_D40) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_panzoomtrigif__Na_Ac_D40::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtop_panzoomtrigif__Na_Ac_D40::~Vtop_panzoomtrigif__Na_Ac_D40() {
}

void Vtop_panzoomtrigif__Na_Ac_D40::_initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET____1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_panzoomtrigif__Na_Ac_D40::_initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET____1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->trig = 0U;
    this->state = 7U;
    this->data = 0ULL;
    this->we = 0U;
    this->addr = 0U;
    this->datasel = 0ULL;
    this->nextstate = 7U;
    this->delayaftertrigcnt = 0U;
    this->decimatorcnt = 0U;
}

void Vtop_panzoomtrigif__Na_Ac_D40::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET____3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_panzoomtrigif__Na_Ac_D40::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET____3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->nextaddr = (0xfffU & ((IData)(1U) + (IData)(this->addr)));
    this->buffull = (0xfffU == (IData)(this->addr));
    this->delayaftertrigcnt0 = (1U & (~ (IData)((0U 
                                                 != (IData)(this->delayaftertrigcnt)))));
    this->decimator0 = (1U & (~ (IData)((0U != (IData)(this->decimatorcnt)))));
    this->nextstate = 7U;
    if ((7U == this->state)) {
        this->nextstate = 5U;
    } else {
        if ((5U == this->state)) {
            this->nextstate = ((IData)(this->trig) ? 
                               ((IData)(this->delayaftertrigcnt0)
                                 ? 0U : 4U) : 5U);
        } else {
            if ((4U == this->state)) {
                this->nextstate = ((IData)(this->delayaftertrigcnt0)
                                    ? 0U : 4U);
            } else {
                if ((1U == this->state)) {
                    this->nextstate = ((IData)(this->decimator0)
                                        ? 0U : 1U);
                } else {
                    if ((0U == this->state)) {
                        this->nextstate = ((IData)(this->buffull)
                                            ? 2U : 
                                           ((IData)(this->decimator0)
                                             ? 0U : 1U));
                    } else {
                        if ((2U == this->state)) {
                            this->nextstate = 2U;
                        }
                    }
                }
            }
        }
    }
}

void Vtop_panzoomtrigif__Na_Ac_D40::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_panzoomtrigif__Na_Ac_D40::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    stb_start = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        chan[__Vi0] = VL_RAND_RESET_Q(64);
    }
    trig = VL_RAND_RESET_I(1);
    delayaftertrigcnt = VL_RAND_RESET_I(16);
    delayaftertrig = VL_RAND_RESET_I(16);
    delayaftertrigcnt0 = VL_RAND_RESET_I(1);
    decimator = VL_RAND_RESET_I(8);
    decimatorcnt = VL_RAND_RESET_I(8);
    decimator0 = VL_RAND_RESET_I(1);
    addr = VL_RAND_RESET_I(12);
    nextaddr = VL_RAND_RESET_I(12);
    data = VL_RAND_RESET_Q(64);
    datasel = VL_RAND_RESET_Q(64);
    we = VL_RAND_RESET_I(1);
    chansel = VL_RAND_RESET_I(5);
    buffull = VL_RAND_RESET_I(1);
    state = 0;
    nextstate = 0;
    __Vdly__delayaftertrigcnt = VL_RAND_RESET_I(16);
    __Vdly__decimatorcnt = VL_RAND_RESET_I(8);
}

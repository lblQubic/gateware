// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_panzoomtrigif__Na_Ac_D40.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop_panzoomtrigif__Na_Ac_D40::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET____6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_panzoomtrigif__Na_Ac_D40::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET____6\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__decimatorcnt = this->decimatorcnt;
    this->__Vdly__delayaftertrigcnt = this->delayaftertrigcnt;
    this->trig = this->stb_start;
    this->state = ((IData)(this->reset) ? 7U : this->nextstate);
    if (this->reset) {
        this->we = 0U;
    } else {
        if ((7U == this->nextstate)) {
            this->we = 0U;
        } else {
            if ((5U == this->nextstate)) {
                this->we = 0U;
            } else {
                if ((4U == this->nextstate)) {
                    this->we = 0U;
                } else {
                    if ((1U == this->nextstate)) {
                        this->we = 0U;
                    } else {
                        if ((0U == this->nextstate)) {
                            this->we = 1U;
                        } else {
                            if ((2U == this->nextstate)) {
                                this->we = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (this->reset) {
        this->__Vdly__decimatorcnt = this->decimator;
    } else {
        if ((7U == this->nextstate)) {
            this->__Vdly__decimatorcnt = this->decimator;
        } else {
            if ((5U != this->nextstate)) {
                if ((4U != this->nextstate)) {
                    if ((1U == this->nextstate)) {
                        this->__Vdly__decimatorcnt 
                            = (0xffU & ((IData)(this->decimatorcnt) 
                                        - (IData)(1U)));
                    } else {
                        if ((0U == this->nextstate)) {
                            this->__Vdly__decimatorcnt 
                                = this->decimator;
                        }
                    }
                }
            }
        }
    }
    if (this->reset) {
        this->__Vdly__delayaftertrigcnt = this->delayaftertrig;
    } else {
        if ((7U == this->nextstate)) {
            this->__Vdly__delayaftertrigcnt = this->delayaftertrig;
        } else {
            if ((5U != this->nextstate)) {
                if ((4U == this->nextstate)) {
                    this->__Vdly__delayaftertrigcnt 
                        = (0xffffU & ((IData)(this->delayaftertrigcnt) 
                                      - (IData)(1U)));
                }
            }
        }
    }
    if (this->reset) {
        this->addr = 0U;
    } else {
        if ((7U == this->nextstate)) {
            this->addr = 0U;
        } else {
            if ((5U != this->nextstate)) {
                if ((4U != this->nextstate)) {
                    if ((1U != this->nextstate)) {
                        if ((0U == this->nextstate)) {
                            this->addr = this->nextaddr;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(this->reset)))) {
        if ((7U != this->nextstate)) {
            if ((5U != this->nextstate)) {
                if ((4U != this->nextstate)) {
                    if ((1U != this->nextstate)) {
                        if ((0U == this->nextstate)) {
                            this->data = this->datasel;
                        }
                    }
                }
            }
        }
    }
    this->decimatorcnt = this->__Vdly__decimatorcnt;
    this->delayaftertrigcnt = this->__Vdly__delayaftertrigcnt;
    this->decimator0 = (1U & (~ (IData)((0U != (IData)(this->decimatorcnt)))));
    this->delayaftertrigcnt0 = (1U & (~ (IData)((0U 
                                                 != (IData)(this->delayaftertrigcnt)))));
    this->nextaddr = (0xfffU & ((IData)(1U) + (IData)(this->addr)));
    this->buffull = (0xfffU == (IData)(this->addr));
    this->datasel = ((9U >= (0xfU & (IData)(this->chansel)))
                      ? this->chan[(0xfU & (IData)(this->chansel))]
                      : 0ULL);
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

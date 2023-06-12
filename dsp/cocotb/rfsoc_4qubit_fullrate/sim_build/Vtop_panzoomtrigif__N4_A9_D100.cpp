// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_panzoomtrigif__N4_A9_D100.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop_panzoomtrigif__N4_A9_D100::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____11(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_panzoomtrigif__N4_A9_D100::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____11\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdly__decimatorcnt = this->decimatorcnt;
    this->__Vdly__delayaftertrigcnt = this->delayaftertrigcnt;
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
    this->trig = this->stb_start;
    if ((1U & (~ (IData)(this->reset)))) {
        if ((7U != this->nextstate)) {
            if ((5U != this->nextstate)) {
                if ((4U != this->nextstate)) {
                    if ((1U != this->nextstate)) {
                        if ((0U == this->nextstate)) {
                            this->data[0U] = this->datasel[0U];
                            this->data[1U] = this->datasel[1U];
                            this->data[2U] = this->datasel[2U];
                            this->data[3U] = this->datasel[3U];
                            this->data[4U] = this->datasel[4U];
                            this->data[5U] = this->datasel[5U];
                            this->data[6U] = this->datasel[6U];
                            this->data[7U] = this->datasel[7U];
                        }
                    }
                }
            }
        }
    }
    this->state = ((IData)(this->reset) ? 7U : this->nextstate);
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
    this->decimatorcnt = this->__Vdly__decimatorcnt;
    this->delayaftertrigcnt = this->__Vdly__delayaftertrigcnt;
    this->datasel[0U] = this->chan[(3U & (IData)(this->chansel))][0U];
    this->datasel[1U] = this->chan[(3U & (IData)(this->chansel))][1U];
    this->datasel[2U] = this->chan[(3U & (IData)(this->chansel))][2U];
    this->datasel[3U] = this->chan[(3U & (IData)(this->chansel))][3U];
    this->datasel[4U] = this->chan[(3U & (IData)(this->chansel))][4U];
    this->datasel[5U] = this->chan[(3U & (IData)(this->chansel))][5U];
    this->datasel[6U] = this->chan[(3U & (IData)(this->chansel))][6U];
    this->datasel[7U] = this->chan[(3U & (IData)(this->chansel))][7U];
    this->nextaddr = (0x1ffU & ((IData)(1U) + (IData)(this->addr)));
    this->buffull = (0x1ffU == (IData)(this->addr));
    this->decimator0 = (1U & (~ (IData)((0U != (IData)(this->decimatorcnt)))));
    this->delayaftertrigcnt0 = (1U & (~ (IData)((0U 
                                                 != (IData)(this->delayaftertrigcnt)))));
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

VL_INLINE_OPT void Vtop_panzoomtrigif__N4_A9_D100::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET____15(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_panzoomtrigif__N4_A9_D100::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET____15\n"); );
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
    if ((1U & (~ (IData)(this->reset)))) {
        if ((7U != this->nextstate)) {
            if ((5U != this->nextstate)) {
                if ((4U != this->nextstate)) {
                    if ((1U != this->nextstate)) {
                        if ((0U == this->nextstate)) {
                            this->data[0U] = this->datasel[0U];
                            this->data[1U] = this->datasel[1U];
                            this->data[2U] = this->datasel[2U];
                            this->data[3U] = this->datasel[3U];
                            this->data[4U] = this->datasel[4U];
                            this->data[5U] = this->datasel[5U];
                            this->data[6U] = this->datasel[6U];
                            this->data[7U] = this->datasel[7U];
                        }
                    }
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
    this->decimatorcnt = this->__Vdly__decimatorcnt;
    this->delayaftertrigcnt = this->__Vdly__delayaftertrigcnt;
    this->datasel[0U] = this->chan[(3U & (IData)(this->chansel))][0U];
    this->datasel[1U] = this->chan[(3U & (IData)(this->chansel))][1U];
    this->datasel[2U] = this->chan[(3U & (IData)(this->chansel))][2U];
    this->datasel[3U] = this->chan[(3U & (IData)(this->chansel))][3U];
    this->datasel[4U] = this->chan[(3U & (IData)(this->chansel))][4U];
    this->datasel[5U] = this->chan[(3U & (IData)(this->chansel))][5U];
    this->datasel[6U] = this->chan[(3U & (IData)(this->chansel))][6U];
    this->datasel[7U] = this->chan[(3U & (IData)(this->chansel))][7U];
    this->nextaddr = (0x1ffU & ((IData)(1U) + (IData)(this->addr)));
    this->buffull = (0x1ffU == (IData)(this->addr));
    this->decimator0 = (1U & (~ (IData)((0U != (IData)(this->decimatorcnt)))));
    this->delayaftertrigcnt0 = (1U & (~ (IData)((0U 
                                                 != (IData)(this->delayaftertrigcnt)))));
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

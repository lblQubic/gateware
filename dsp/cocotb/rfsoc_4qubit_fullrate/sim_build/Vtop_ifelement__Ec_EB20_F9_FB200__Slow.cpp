// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_ifelement__Ec_EB20_F9_FB200.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop_ifelement__Ec_EB20_F9_FB200) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_ifelement__Ec_EB20_F9_FB200::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtop_ifelement__Ec_EB20_F9_FB200::~Vtop_ifelement__Ec_EB20_F9_FB200() {
}

void Vtop_ifelement__Ec_EB20_F9_FB200::_initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__Ec_EB20_F9_FB200::_initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->command[0U] = 0U;
    this->command[1U] = 0U;
    this->command[2U] = 0U;
    this->command[3U] = 0U;
    this->command_d[0U] = 0U;
    this->command_d[1U] = 0U;
    this->command_d[2U] = 0U;
    this->command_d[3U] = 0U;
    this->command_d2[0U] = 0U;
    this->command_d2[1U] = 0U;
    this->command_d2[2U] = 0U;
    this->command_d2[3U] = 0U;
    this->cw_sr = 0U;
    this->dummycw_sr = 0U;
    this->trigt = 0U;
    this->dummy_cmdstb_sr = 0U;
    this->ampy = 0U;
    this->mode = 0U;
    this->valid_r = 0U;
    this->multix_r[0U] = 0U;
    this->multix_r[1U] = 0U;
    this->multix_r[2U] = 0U;
    this->multix_r[3U] = 0U;
    this->multix_r[4U] = 0U;
    this->multix_r[5U] = 0U;
    this->multix_r[6U] = 0U;
    this->multix_r[7U] = 0U;
    this->multiy_r[0U] = 0U;
    this->multiy_r[1U] = 0U;
    this->multiy_r[2U] = 0U;
    this->multiy_r[3U] = 0U;
    this->multiy_r[4U] = 0U;
    this->multiy_r[5U] = 0U;
    this->multiy_r[6U] = 0U;
    this->multiy_r[7U] = 0U;
    this->cw_d4 = 0U;
    this->busy_r = 0U;
    this->ampx = 0U;
    this->pini = 0U;
    this->cmdstb_sr = 0U;
    this->reset_sr = 0U;
    this->cw_d3 = 0U;
    this->tcnt = 0U;
    this->cw_d2 = 0U;
    this->envstart = 0U;
    this->cw_d1 = 0U;
    this->cw_d0 = 0U;
    this->envlength = 0U;
}

void Vtop_ifelement__Ec_EB20_F9_FB200::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__Ec_EB20_F9_FB200::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->cw2 = this->cw_d4;
    this->busy = ((IData)(this->busy_r) | (IData)(this->cmdstb));
    this->cw = this->cw_d2;
}

void Vtop_ifelement__Ec_EB20_F9_FB200::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__Ec_EB20_F9_FB200::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____9\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void Vtop_ifelement__Ec_EB20_F9_FB200::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__Ec_EB20_F9_FB200::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    cmdstb = VL_RAND_RESET_I(1);
    cmdstb_sr = VL_RAND_RESET_I(16);
    dummy_cmdstb_sr = VL_RAND_RESET_I(1);
    reset_sr = VL_RAND_RESET_I(16);
    envstart = VL_RAND_RESET_I(12);
    envlength = VL_RAND_RESET_I(12);
    ampx = VL_RAND_RESET_I(16);
    ampy = VL_RAND_RESET_I(16);
    pini = VL_RAND_RESET_I(17);
    mode = VL_RAND_RESET_I(2);
    valid = VL_RAND_RESET_I(1);
    valid_r = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, multix);
    VL_RAND_RESET_W(256, multiy);
    VL_RAND_RESET_W(256, multix_r);
    VL_RAND_RESET_W(256, multiy_r);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        multix_check[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        multiy_check[__Vi0] = VL_RAND_RESET_I(16);
    }
    tcnt = VL_RAND_RESET_I(27);
    VL_RAND_RESET_W(128, command);
    VL_RAND_RESET_W(128, command_d);
    VL_RAND_RESET_W(128, command_d2);
    cw_d0 = VL_RAND_RESET_I(1);
    cw_d1 = VL_RAND_RESET_I(1);
    cw_d2 = VL_RAND_RESET_I(1);
    cw_d3 = VL_RAND_RESET_I(1);
    cw_d4 = VL_RAND_RESET_I(1);
    prepbusy = VL_RAND_RESET_I(1);
    pulsebusy = VL_RAND_RESET_I(1);
    postprobusy = VL_RAND_RESET_I(1);
    busy_r = VL_RAND_RESET_I(1);
    busy = VL_RAND_RESET_I(1);
    cw = VL_RAND_RESET_I(1);
    cw2 = VL_RAND_RESET_I(1);
    cw_sr = VL_RAND_RESET_I(5);
    dummycw_sr = VL_RAND_RESET_I(1);
    trigt = VL_RAND_RESET_I(27);
    freqaddr = VL_RAND_RESET_I(9);
    __Vdly__reset_sr = VL_RAND_RESET_I(16);
    __Vdly__cmdstb_sr = VL_RAND_RESET_I(16);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_ifdsp.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop_ifdsp) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_ifdsp::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtop_ifdsp::~Vtop_ifdsp() {
}

void Vtop_ifdsp::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_ifdsp::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        adc[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(256, dac[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dlo[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(256, data_dacmon[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        addr_dacmon[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        we_dacmon[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        data_accbuf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        addr_accbuf[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        we_accbuf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        data_acqbuf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        addr_acqbuf[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        we_acqbuf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(128, data_command[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        addr_command[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        we_command[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(512, data_qdrvenv[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        addr_qdrvenv[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        we_qdrvenv[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        data_rdloenv[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        addr_rdloenv[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        we_rdloenv[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        data_rdrvenv[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        addr_rdrvenv[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        we_rdrvenv[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(512, data_rdrvfreq[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        addr_rdrvfreq[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        we_rdrvfreq[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(128, data_rdlofreq[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        addr_rdlofreq[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        we_rdlofreq[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(512, data_qdrvfreq[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        addr_qdrvfreq[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        we_qdrvfreq[__Vi0] = VL_RAND_RESET_I(1);
    }
    stb_start = VL_RAND_RESET_I(1);
    start = VL_RAND_RESET_I(1);
    nshot = VL_RAND_RESET_I(32);
    resetacc = VL_RAND_RESET_I(1);
    stb_reset_bram_read = VL_RAND_RESET_I(1);
    lastshotdone = VL_RAND_RESET_I(1);
    shotcnt = VL_RAND_RESET_I(32);
    addr_accbuf_mon0 = VL_RAND_RESET_I(10);
    addr_accbuf_mon1 = VL_RAND_RESET_I(10);
    addr_accbuf_mon2 = VL_RAND_RESET_I(10);
    addr_accbuf_mon3 = VL_RAND_RESET_I(10);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            coef[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    acqbufreset = VL_RAND_RESET_I(1);
    dacmonreset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        acqchansel[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dacmonchansel[__Vi0] = VL_RAND_RESET_I(16);
    }
    delayaftertrig = VL_RAND_RESET_I(32);
    decimator = VL_RAND_RESET_I(16);
    mixbb1sel = VL_RAND_RESET_I(16);
    mixbb2sel = VL_RAND_RESET_I(16);
    shift = VL_RAND_RESET_I(5);
    procdone = VL_RAND_RESET_I(3);
    test_freq = VL_RAND_RESET_I(24);
    test_amp = VL_RAND_RESET_I(16);
}

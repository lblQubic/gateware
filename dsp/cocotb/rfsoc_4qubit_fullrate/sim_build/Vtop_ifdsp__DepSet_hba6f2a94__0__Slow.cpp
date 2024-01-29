// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_ifdsp.h"

VL_ATTR_COLD void Vtop_ifdsp___ctor_var_reset(Vtop_ifdsp* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_ifdsp___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->adc[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->dac[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dlo[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->data_dacmon[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->addr_dacmon[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->we_dacmon[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->data_accbuf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->addr_accbuf[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->we_accbuf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->data_sdbuf[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->addr_sdbuf[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->we_sdbuf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->data_acqbuf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->addr_acqbuf[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->we_acqbuf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->data_command[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->addr_command[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->we_command[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->data_qdrvenv[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->addr_qdrvenv[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->we_qdrvenv[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->data_rdloenv[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->addr_rdloenv[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->we_rdloenv[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->data_rdrvenv[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->addr_rdrvenv[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->we_rdrvenv[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->data_rdrvfreq[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->addr_rdrvfreq[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->we_rdrvfreq[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->data_rdlofreq[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->addr_rdlofreq[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->we_rdlofreq[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->data_qdrvfreq[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->addr_qdrvfreq[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->we_qdrvfreq[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->stb_start = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->nshot = VL_RAND_RESET_I(32);
    vlSelf->resetacc = VL_RAND_RESET_I(1);
    vlSelf->stb_reset_bram_read = VL_RAND_RESET_I(1);
    vlSelf->lastshotdone = VL_RAND_RESET_I(1);
    vlSelf->shotcnt = VL_RAND_RESET_I(32);
    vlSelf->addr_accbuf_mon0 = VL_RAND_RESET_I(10);
    vlSelf->addr_accbuf_mon1 = VL_RAND_RESET_I(10);
    vlSelf->addr_accbuf_mon2 = VL_RAND_RESET_I(10);
    vlSelf->addr_accbuf_mon3 = VL_RAND_RESET_I(10);
    vlSelf->addr_sdbuf_mon0 = VL_RAND_RESET_I(10);
    vlSelf->addr_sdbuf_mon1 = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->coef[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 65; ++__Vi1) {
            vlSelf->weight_bias[__Vi0][__Vi1] = VL_RAND_RESET_I(18);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->normalizer_min[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->acqbufreset = VL_RAND_RESET_I(1);
    vlSelf->dacmonreset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->acqchansel[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dacmonchansel[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->delayaftertrig = VL_RAND_RESET_I(32);
    vlSelf->decimator = VL_RAND_RESET_I(16);
    vlSelf->mixbb1sel = VL_RAND_RESET_I(16);
    vlSelf->mixbb2sel = VL_RAND_RESET_I(16);
    vlSelf->shift = VL_RAND_RESET_I(5);
    vlSelf->procdone = VL_RAND_RESET_I(8);
    vlSelf->test_freq = VL_RAND_RESET_I(24);
    vlSelf->test_amp = VL_RAND_RESET_I(16);
}

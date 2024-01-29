// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_pulse_iface.h"

// Parameter definitions for Vtop_pulse_iface
constexpr IData/*31:0*/ Vtop_pulse_iface::PHASE_WIDTH;
constexpr IData/*31:0*/ Vtop_pulse_iface::FREQ_WIDTH;
constexpr IData/*31:0*/ Vtop_pulse_iface::AMP_WIDTH;
constexpr IData/*31:0*/ Vtop_pulse_iface::CFG_WIDTH;
constexpr IData/*31:0*/ Vtop_pulse_iface::ENV_WORD_WIDTH;


void Vtop_pulse_iface___ctor_var_reset(Vtop_pulse_iface* vlSelf);

Vtop_pulse_iface::Vtop_pulse_iface(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_pulse_iface___ctor_var_reset(this);
}

void Vtop_pulse_iface::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_pulse_iface::~Vtop_pulse_iface() {
}

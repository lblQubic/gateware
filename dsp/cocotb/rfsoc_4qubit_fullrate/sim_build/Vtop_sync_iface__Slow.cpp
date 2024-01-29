// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_sync_iface.h"

// Parameter definitions for Vtop_sync_iface
constexpr IData/*31:0*/ Vtop_sync_iface::SYNC_BARRIER_WIDTH;


void Vtop_sync_iface___ctor_var_reset(Vtop_sync_iface* vlSelf);

Vtop_sync_iface::Vtop_sync_iface(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_sync_iface___ctor_var_reset(this);
}

void Vtop_sync_iface::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_sync_iface::~Vtop_sync_iface() {
}

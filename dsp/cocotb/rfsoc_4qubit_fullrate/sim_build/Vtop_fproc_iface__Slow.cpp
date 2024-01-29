// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_fproc_iface.h"

// Parameter definitions for Vtop_fproc_iface
constexpr IData/*31:0*/ Vtop_fproc_iface::FPROC_ID_WIDTH;
constexpr IData/*31:0*/ Vtop_fproc_iface::FPROC_RESULT_WIDTH;


void Vtop_fproc_iface___ctor_var_reset(Vtop_fproc_iface* vlSelf);

Vtop_fproc_iface::Vtop_fproc_iface(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_fproc_iface___ctor_var_reset(this);
}

void Vtop_fproc_iface::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_fproc_iface::~Vtop_fproc_iface() {
}

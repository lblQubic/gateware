// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_ifxma__N10.h"

std::string VL_TO_STRING(const Vtop_ifxma__N10* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_ifxma__N10::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}

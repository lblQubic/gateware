// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_ifdsp.h"

std::string VL_TO_STRING(const Vtop_ifdsp* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_ifdsp::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}

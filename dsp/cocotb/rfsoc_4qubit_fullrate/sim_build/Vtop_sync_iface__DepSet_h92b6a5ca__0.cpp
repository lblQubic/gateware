// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_sync_iface.h"

std::string VL_TO_STRING(const Vtop_sync_iface* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_sync_iface::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}

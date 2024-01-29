// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_IFELEMENT__E8_EB200_F9_FB200_H_
#define VERILATED_VTOP_IFELEMENT__E8_EB200_F9_FB200_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_ifelement__E8_EB200_F9_FB200 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ reset;
    CData/*0:0*/ cmdstb;
    CData/*0:0*/ dummy_cmdstb_sr;
    CData/*7:0*/ envstart;
    CData/*7:0*/ envlength;
    CData/*1:0*/ mode;
    CData/*0:0*/ valid;
    CData/*0:0*/ valid_r;
    CData/*0:0*/ cw_d0;
    CData/*0:0*/ cw_d1;
    CData/*0:0*/ cw_d2;
    CData/*0:0*/ cw_d3;
    CData/*0:0*/ cw_d4;
    CData/*0:0*/ prepbusy;
    CData/*0:0*/ pulsebusy;
    CData/*0:0*/ postprobusy;
    CData/*0:0*/ busy_r;
    CData/*0:0*/ busy;
    CData/*0:0*/ cw;
    CData/*0:0*/ cw2;
    CData/*4:0*/ cw_sr;
    CData/*0:0*/ dummycw_sr;
    SData/*15:0*/ cmdstb_sr;
    SData/*15:0*/ reset_sr;
    SData/*15:0*/ ampx;
    SData/*15:0*/ ampy;
    SData/*8:0*/ freqaddr;
    IData/*16:0*/ pini;
    VlWide<8>/*255:0*/ multix;
    VlWide<8>/*255:0*/ multiy;
    VlWide<8>/*255:0*/ multix_r;
    VlWide<8>/*255:0*/ multiy_r;
    IData/*26:0*/ tcnt;
    VlWide<4>/*127:0*/ command;
    VlWide<4>/*127:0*/ command_d;
    VlWide<4>/*127:0*/ command_d2;
    IData/*26:0*/ trigt;
    VlUnpacked<SData/*15:0*/, 16> multix_check;
    VlUnpacked<SData/*15:0*/, 16> multiy_check;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ ENV_ADDRWIDTH = 8U;
    static constexpr IData/*31:0*/ ENV_DATAWIDTH = 0x00000200U;
    static constexpr IData/*31:0*/ TCNTWIDTH = 0x0000001bU;
    static constexpr IData/*31:0*/ FREQ_ADDRWIDTH = 9U;
    static constexpr IData/*31:0*/ FREQ_DATAWIDTH = 0x00000200U;
    static constexpr IData/*31:0*/ NSLICE = 0x00000010U;

    // CONSTRUCTORS
    Vtop_ifelement__E8_EB200_F9_FB200(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_ifelement__E8_EB200_F9_FB200();
    VL_UNCOPYABLE(Vtop_ifelement__E8_EB200_F9_FB200);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_ifelement__E8_EB200_F9_FB200* obj);

#endif  // guard

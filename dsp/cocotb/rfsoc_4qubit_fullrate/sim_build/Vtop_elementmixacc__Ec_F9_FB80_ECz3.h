// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_ELEMENTMIXACC__EC_F9_FB80_ECZ3_H_
#define VERILATED_VTOP_ELEMENTMIXACC__EC_F9_FB80_ECZ3_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_elementmixacc__Ec_F9_FB80_ECz3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(shift,4,0);
        VL_OUT8(gateout,0,0);
        VL_OUT8(stbout,0,0);
        CData/*0:0*/ gatesrdummy;
        CData/*0:0*/ newacc;
        CData/*3:0*/ genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexi;
        CData/*3:0*/ genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexj;
        CData/*3:0*/ genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexi;
        CData/*3:0*/ genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexj;
        CData/*3:0*/ genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexi;
        CData/*3:0*/ genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexj;
        CData/*3:0*/ genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexi;
        CData/*3:0*/ genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexj;
        CData/*3:0*/ genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexi;
        CData/*3:0*/ genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexj;
        CData/*3:0*/ genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexi;
        CData/*3:0*/ genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexj;
        CData/*3:0*/ genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexi;
        CData/*3:0*/ genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexj;
        CData/*3:0*/ genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexi;
        CData/*3:0*/ genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexj;
        CData/*3:0*/ genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexi;
        CData/*3:0*/ genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexj;
        CData/*3:0*/ genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexi;
        CData/*3:0*/ genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexj;
        CData/*0:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__clk;
        CData/*0:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__clk;
        CData/*0:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__clk;
        CData/*0:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__clk;
        SData/*15:0*/ gatesr;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__adcxi;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__adcyi;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__dloxi;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__dloyi;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__adcxi;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__adcyi;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__dloxi;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__dloyi;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__adcxi;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__adcyi;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__dloxi;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__dloyi;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__adcxi;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__adcyi;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__dloxi;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__dloyi;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__xr;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__xi;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__yr;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__yi;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__xi1;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__xi2;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__xi3;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__xi4;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__xr1;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__xr2;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__xr3;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__xr4;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__yi1;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__yi2;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__yi3;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__yr1;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__yr2;
        SData/*15:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__yr3;
    };
    struct {
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__xr;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__xi;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__yr;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__yi;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__xi1;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__xi2;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__xi3;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__xi4;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__xr1;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__xr2;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__xr3;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__xr4;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__yi1;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__yi2;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__yi3;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__yr1;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__yr2;
        SData/*15:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__yr3;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__xr;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__xi;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__yr;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__yi;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__xi1;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__xi2;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__xi3;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__xi4;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__xr1;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__xr2;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__xr3;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__xr4;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__yi1;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__yi2;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__yi3;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__yr1;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__yr2;
        SData/*15:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__yr3;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__xr;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__xi;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__yr;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__yi;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__xi1;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__xi2;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__xi3;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__xi4;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__xr1;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__xr2;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__xr3;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__xr4;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__yi1;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__yi2;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__yi3;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__yr1;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__yr2;
        SData/*15:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__yr3;
        VL_OUT(accx,31,0);
        VL_OUT(accy,31,0);
        IData/*31:0*/ accx_r;
        IData/*31:0*/ accy_r;
        IData/*16:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon;
        IData/*16:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__addr;
        IData/*16:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__addi;
        IData/*16:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon;
        IData/*16:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__addr;
        IData/*16:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__addi;
    };
    struct {
        IData/*16:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon;
        IData/*16:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__addr;
        IData/*16:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__addi;
        IData/*16:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon;
        IData/*16:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__addr;
        IData/*16:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__addi;
        VL_IN64(adcx,63,0);
        VL_IN64(adcy,63,0);
        QData/*63:0*/ adcx_r;
        QData/*63:0*/ adcy_r;
        QData/*49:0*/ sumxslicelast;
        QData/*49:0*/ sumyslicelast;
        QData/*49:0*/ accsumx;
        QData/*49:0*/ accsumy;
        QData/*32:0*/ genblk1__BRA__0__KET____DOT__multixi_w;
        QData/*32:0*/ genblk1__BRA__0__KET____DOT__multiyi_w;
        QData/*32:0*/ genblk1__BRA__0__KET____DOT__multixi_r;
        QData/*32:0*/ genblk1__BRA__0__KET____DOT__multiyi_r;
        QData/*32:0*/ genblk1__BRA__1__KET____DOT__multixi_w;
        QData/*32:0*/ genblk1__BRA__1__KET____DOT__multiyi_w;
        QData/*32:0*/ genblk1__BRA__1__KET____DOT__multixi_r;
        QData/*32:0*/ genblk1__BRA__1__KET____DOT__multiyi_r;
        QData/*32:0*/ genblk1__BRA__2__KET____DOT__multixi_w;
        QData/*32:0*/ genblk1__BRA__2__KET____DOT__multiyi_w;
        QData/*32:0*/ genblk1__BRA__2__KET____DOT__multixi_r;
        QData/*32:0*/ genblk1__BRA__2__KET____DOT__multiyi_r;
        QData/*32:0*/ genblk1__BRA__3__KET____DOT__multixi_w;
        QData/*32:0*/ genblk1__BRA__3__KET____DOT__multiyi_w;
        QData/*32:0*/ genblk1__BRA__3__KET____DOT__multixi_r;
        QData/*32:0*/ genblk1__BRA__3__KET____DOT__multiyi_r;
        QData/*32:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
        QData/*32:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
        QData/*32:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__mult0;
        QData/*32:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__multr;
        QData/*32:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__multi;
        QData/*32:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int;
        QData/*32:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int;
        QData/*32:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__common;
        QData/*32:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1;
        QData/*32:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2;
        QData/*32:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
        QData/*32:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
        QData/*32:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__mult0;
        QData/*32:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__multr;
        QData/*32:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__multi;
        QData/*32:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int;
        QData/*32:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int;
        QData/*32:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__common;
        QData/*32:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1;
        QData/*32:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2;
        QData/*32:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
        QData/*32:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
        QData/*32:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__mult0;
        QData/*32:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__multr;
        QData/*32:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__multi;
        QData/*32:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int;
        QData/*32:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int;
        QData/*32:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__common;
        QData/*32:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1;
        QData/*32:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2;
        QData/*32:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
        QData/*32:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
        QData/*32:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__mult0;
        QData/*32:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__multr;
    };
    struct {
        QData/*32:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__multi;
        QData/*32:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int;
        QData/*32:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int;
        QData/*32:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__common;
        QData/*32:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1;
        QData/*32:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2;
        VlUnpacked<VlUnpacked<QData/*32:0*/, 4>, 4> multixi;
        VlUnpacked<VlUnpacked<QData/*32:0*/, 4>, 4> multiyi;
        VlUnpacked<QData/*33:0*/, 4> sumxslice;
        VlUnpacked<QData/*33:0*/, 4> sumyslice;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ ENV_ADDRWIDTH = 0x0000000cU;
    static constexpr IData/*31:0*/ ENV_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ FREQ_ADDRWIDTH = 9U;
    static constexpr IData/*31:0*/ FREQ_DATAWIDTH = 0x00000080U;
    static constexpr IData/*31:0*/ ACCADDWIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ NSLICE = 4U;
    static constexpr IData/*31:0*/ NSLICEWIDTH = 2U;
    static constexpr IData/*31:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__XWIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ genblk1__BRA__0__KET____DOT__mult1__DOT__YWIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__XWIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ genblk1__BRA__1__KET____DOT__mult1__DOT__YWIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__XWIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ genblk1__BRA__2__KET____DOT__mult1__DOT__YWIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__XWIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ genblk1__BRA__3__KET____DOT__mult1__DOT__YWIDTH = 0x00000010U;

    // CONSTRUCTORS
    Vtop_elementmixacc__Ec_F9_FB80_ECz3(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_elementmixacc__Ec_F9_FB80_ECz3();
    VL_UNCOPYABLE(Vtop_elementmixacc__Ec_F9_FB80_ECz3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

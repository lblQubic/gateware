// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtop__Syms;
class Vtop___024root;
class VerilatedFstC;
class Vtop_ifdsp;
class Vtop_ifelement__E8_EB200_F9_FB200;
class Vtop_ifelement__Ec_F9_FB200;
class Vtop_ifelement__Ec_F9_FB80;
class Vtop_fproc_iface;
class Vtop_ifxma__N10;
class Vtop_ifsd;
class Vtop_panzoomtrigif__Na_Ac;
class Vtop_panzoomtrigif__N4_D100;
class Vtop_proc_core__Qz1_Rz2_RBz3;
class Vtop_elementconn__pi3;
class Vtop_elementmixacc__Ec_F9_FB80_ECz3;
class Vtop_state_disc;
class Vtop_ammod__N10;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&stb_start,0,0);
    VL_IN8(&proc_write_sel,2,0);
    VL_IN8(&mem_write_sel,2,0);
    VL_IN8(&mem_write_en,0,0);
    VL_IN16(&mem_write_addr,15,0);
    VL_IN16(&buf_read_addr,12,0);
    VL_IN(&nshot,31,0);
    VL_IN(&mem_write_data,31,0);
    VL_IN64((&adc)[2],63,0);
    VL_OUTW((&dac)[16],255,0,8);
    VL_OUT64((&acc_read_data)[8],63,0);
    VL_OUT64((&acq_read_data)[2],63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtop_ifdsp* const __PVT__dsp_sim_toplevel__DOT__dspif;
    Vtop_ifelement__E8_EB200_F9_FB200* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__;
    Vtop_ifelement__E8_EB200_F9_FB200* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__;
    Vtop_ifelement__E8_EB200_F9_FB200* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__;
    Vtop_ifelement__E8_EB200_F9_FB200* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__;
    Vtop_ifelement__E8_EB200_F9_FB200* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__;
    Vtop_ifelement__E8_EB200_F9_FB200* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__;
    Vtop_ifelement__E8_EB200_F9_FB200* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__;
    Vtop_ifelement__E8_EB200_F9_FB200* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__;
    Vtop_ifelement__Ec_F9_FB200* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__;
    Vtop_ifelement__Ec_F9_FB200* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__;
    Vtop_ifelement__Ec_F9_FB200* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__;
    Vtop_ifelement__Ec_F9_FB200* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__;
    Vtop_ifelement__Ec_F9_FB200* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__;
    Vtop_ifelement__Ec_F9_FB200* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__;
    Vtop_ifelement__Ec_F9_FB200* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__;
    Vtop_ifelement__Ec_F9_FB200* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__;
    Vtop_ifelement__Ec_F9_FB80* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__;
    Vtop_ifelement__Ec_F9_FB80* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__;
    Vtop_ifelement__Ec_F9_FB80* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__;
    Vtop_ifelement__Ec_F9_FB80* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__;
    Vtop_ifelement__Ec_F9_FB80* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__;
    Vtop_ifelement__Ec_F9_FB80* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__;
    Vtop_ifelement__Ec_F9_FB80* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__;
    Vtop_ifelement__Ec_F9_FB80* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__;
    Vtop_fproc_iface* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__7__KET__;
    Vtop_fproc_iface* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__6__KET__;
    Vtop_fproc_iface* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__5__KET__;
    Vtop_fproc_iface* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__4__KET__;
    Vtop_fproc_iface* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__3__KET__;
    Vtop_fproc_iface* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__;
    Vtop_fproc_iface* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__;
    Vtop_fproc_iface* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__;
    Vtop_ifxma__N10* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif;
    Vtop_ifsd* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__7__KET__;
    Vtop_ifsd* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__6__KET__;
    Vtop_ifsd* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__5__KET__;
    Vtop_ifsd* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__4__KET__;
    Vtop_ifsd* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__3__KET__;
    Vtop_ifsd* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__2__KET__;
    Vtop_ifsd* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__1__KET__;
    Vtop_ifsd* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__0__KET__;
    Vtop_panzoomtrigif__Na_Ac* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__;
    Vtop_panzoomtrigif__Na_Ac* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__;
    Vtop_panzoomtrigif__N4_D100* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET__;
    Vtop_panzoomtrigif__N4_D100* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__;
    Vtop_panzoomtrigif__N4_D100* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__;
    Vtop_panzoomtrigif__N4_D100* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__;
    Vtop_panzoomtrigif__N4_D100* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__;
    Vtop_proc_core__Qz1_Rz2_RBz3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core;
    Vtop_elementconn__pi3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn;
    Vtop_proc_core__Qz1_Rz2_RBz3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core;
    Vtop_elementconn__pi3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn;
    Vtop_proc_core__Qz1_Rz2_RBz3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core;
    Vtop_elementconn__pi3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn;
    Vtop_proc_core__Qz1_Rz2_RBz3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core;
    Vtop_elementconn__pi3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdloelemconn;
    Vtop_proc_core__Qz1_Rz2_RBz3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core;
    Vtop_elementconn__pi3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdloelemconn;
    Vtop_proc_core__Qz1_Rz2_RBz3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core;
    Vtop_elementconn__pi3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdloelemconn;
    Vtop_proc_core__Qz1_Rz2_RBz3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__proc_core;
    Vtop_elementconn__pi3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn;
    Vtop_proc_core__Qz1_Rz2_RBz3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__proc_core;
    Vtop_elementconn__pi3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn;
    Vtop_elementmixacc__Ec_F9_FB80_ECz3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1;
    Vtop_elementmixacc__Ec_F9_FB80_ECz3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1;
    Vtop_elementmixacc__Ec_F9_FB80_ECz3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1;
    Vtop_elementmixacc__Ec_F9_FB80_ECz3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__3__KET____DOT__genblk1__DOT__rdlo0mixacc1;
    Vtop_elementmixacc__Ec_F9_FB80_ECz3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__4__KET____DOT__genblk1__DOT__rdlo0mixacc1;
    Vtop_elementmixacc__Ec_F9_FB80_ECz3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__5__KET____DOT__genblk1__DOT__rdlo0mixacc1;
    Vtop_elementmixacc__Ec_F9_FB80_ECz3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__6__KET____DOT__genblk1__DOT__rdlo0mixacc1;
    Vtop_elementmixacc__Ec_F9_FB80_ECz3* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__7__KET____DOT__genblk1__DOT__rdlo0mixacc1;
    Vtop_state_disc* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__0__KET____DOT__state_disc;
    Vtop_state_disc* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__1__KET____DOT__state_disc;
    Vtop_state_disc* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__2__KET____DOT__state_disc;
    Vtop_state_disc* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__3__KET____DOT__state_disc;
    Vtop_state_disc* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__4__KET____DOT__state_disc;
    Vtop_state_disc* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__5__KET____DOT__state_disc;
    Vtop_state_disc* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__6__KET____DOT__state_disc;
    Vtop_state_disc* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__7__KET____DOT__state_disc;
    Vtop_ammod__N10* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod;
    Vtop_ammod__N10* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod;
    Vtop_ammod__N10* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod;
    Vtop_ammod__N10* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod;
    Vtop_ammod__N10* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod;
    Vtop_ammod__N10* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod;
    Vtop_ammod__N10* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod;
    Vtop_ammod__N10* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod;
    Vtop_ammod__N10* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod;
    Vtop_ammod__N10* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod;
    Vtop_ammod__N10* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod;
    Vtop_ammod__N10* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod;
    Vtop_ammod__N10* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod;
    Vtop_ammod__N10* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod;
    Vtop_ammod__N10* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod;
    Vtop_ammod__N10* const __PVT__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); eval_end_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard

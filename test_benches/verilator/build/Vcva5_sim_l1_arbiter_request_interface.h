// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcva5_sim.h for the primary calling header

#ifndef VERILATED_VCVA5_SIM_L1_ARBITER_REQUEST_INTERFACE_H_
#define VERILATED_VCVA5_SIM_L1_ARBITER_REQUEST_INTERFACE_H_  // guard

#include "verilated.h"

class Vcva5_sim__Syms;

class Vcva5_sim_l1_arbiter_request_interface final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ rnw;
    CData/*3:0*/ be;
    CData/*4:0*/ size;
    CData/*0:0*/ is_amo;
    CData/*4:0*/ amo;
    CData/*0:0*/ request;
    IData/*31:0*/ addr;
    IData/*31:0*/ data;

    // INTERNAL VARIABLES
    Vcva5_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcva5_sim_l1_arbiter_request_interface(Vcva5_sim__Syms* symsp, const char* name);
    ~Vcva5_sim_l1_arbiter_request_interface();
    VL_UNCOPYABLE(Vcva5_sim_l1_arbiter_request_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

std::string VL_TO_STRING(const Vcva5_sim_l1_arbiter_request_interface* obj);

#endif  // guard

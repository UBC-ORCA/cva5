// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcva5_sim.h for the primary calling header

#ifndef VERILATED_VCVA5_SIM_LOAD_STORE_QUEUE_INTERFACE_H_
#define VERILATED_VCVA5_SIM_LOAD_STORE_QUEUE_INTERFACE_H_  // guard

#include "verilated.h"

class Vcva5_sim__Syms;

class Vcva5_sim_load_store_queue_interface final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ push;
    CData/*0:0*/ load_valid;
    VlWide<3>/*85:0*/ data_in;
    VlWide<3>/*81:0*/ load_data_out;
    VlWide<3>/*81:0*/ store_data_out;

    // INTERNAL VARIABLES
    Vcva5_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcva5_sim_load_store_queue_interface(Vcva5_sim__Syms* symsp, const char* name);
    ~Vcva5_sim_load_store_queue_interface();
    VL_UNCOPYABLE(Vcva5_sim_load_store_queue_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

std::string VL_TO_STRING(const Vcva5_sim_load_store_queue_interface* obj);

#endif  // guard

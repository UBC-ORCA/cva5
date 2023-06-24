// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim_axi_interface.h"

std::string VL_TO_STRING(const Vcva5_sim_axi_interface* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcva5_sim_axi_interface::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}

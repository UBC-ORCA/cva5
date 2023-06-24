// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim_fifo_interface__D5.h"

std::string VL_TO_STRING(const Vcva5_sim_fifo_interface__D5* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcva5_sim_fifo_interface__D5::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}

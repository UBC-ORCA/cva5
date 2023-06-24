// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcva5_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcva5_sim___024unit.h"

VL_ATTR_COLD void Vcva5_sim___024unit___ctor_var_reset(Vcva5_sim___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcva5_sim___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__Venumtab_enum_name0.atDefault() = std::string{""};
    vlSelf->__Venumtab_enum_name0.at(0) = std::string{"FETCH_EARLY_BR_CORRECTION_STAT"};
    vlSelf->__Venumtab_enum_name0.at(1) = std::string{"FETCH_SUB_UNIT_STALL_STAT"};
    vlSelf->__Venumtab_enum_name0.at(2) = std::string{"FETCH_ID_STALL_STAT"};
    vlSelf->__Venumtab_enum_name0.at(3) = std::string{"FETCH_IC_HIT_STAT"};
    vlSelf->__Venumtab_enum_name0.at(4) = std::string{"FETCH_IC_MISS_STAT"};
    vlSelf->__Venumtab_enum_name0.at(5) = std::string{"FETCH_IC_ARB_STALL_STAT"};
    vlSelf->__Venumtab_enum_name0.at(6) = std::string{"FETCH_BP_BR_CORRECT_STAT"};
    vlSelf->__Venumtab_enum_name0.at(7) = std::string{"FETCH_BP_BR_MISPREDICT_STAT"};
    vlSelf->__Venumtab_enum_name0.at(8) = std::string{"FETCH_BP_RAS_CORRECT_STAT"};
    vlSelf->__Venumtab_enum_name0.at(9) = std::string{"FETCH_BP_RAS_MISPREDICT_STAT"};
    vlSelf->__Venumtab_enum_name0.at(10) = std::string{"ISSUE_NO_INSTRUCTION_STAT"};
    vlSelf->__Venumtab_enum_name0.at(11) = std::string{"ISSUE_NO_ID_STAT"};
    vlSelf->__Venumtab_enum_name0.at(12) = std::string{"ISSUE_FLUSH_STAT"};
    vlSelf->__Venumtab_enum_name0.at(13) = std::string{"ISSUE_UNIT_BUSY_STAT"};
    vlSelf->__Venumtab_enum_name0.at(14) = std::string{"ISSUE_OPERANDS_NOT_READY_STAT"};
    vlSelf->__Venumtab_enum_name0.at(15) = std::string{"ISSUE_HOLD_STAT"};
    vlSelf->__Venumtab_enum_name0.at(16) = std::string{"ISSUE_MULTI_SOURCE_STAT"};
    vlSelf->__Venumtab_enum_name0.at(17) = std::string{"ISSUE_OPERAND_STALL_ON_LOAD_STAT"};
    vlSelf->__Venumtab_enum_name0.at(18) = std::string{"ISSUE_OPERAND_STALL_ON_MULTIPLY_STAT"};
    vlSelf->__Venumtab_enum_name0.at(19) = std::string{"ISSUE_OPERAND_STALL_ON_DIVIDE_STAT"};
    vlSelf->__Venumtab_enum_name0.at(20) = std::string{"ISSUE_OPERAND_STALL_FOR_BRANCH_STAT"};
    vlSelf->__Venumtab_enum_name0.at(21) = std::string{"ISSUE_STORE_WITH_FORWARDED_DATA_STAT"};
    vlSelf->__Venumtab_enum_name0.at(22) = std::string{"ISSUE_DIVIDER_RESULT_REUSE_STAT"};
    vlSelf->__Venumtab_enum_name0.at(23) = std::string{"LSU_LOAD_BLOCKED_BY_STORE_STAT"};
    vlSelf->__Venumtab_enum_name0.at(24) = std::string{"LSU_SUB_UNIT_STALL_STAT"};
    vlSelf->__Venumtab_enum_name0.at(25) = std::string{"LSU_DC_HIT_STAT"};
    vlSelf->__Venumtab_enum_name0.at(26) = std::string{"LSU_DC_MISS_STAT"};
    vlSelf->__Venumtab_enum_name0.at(27) = std::string{"LSU_DC_ARB_STALL_STAT"};
}

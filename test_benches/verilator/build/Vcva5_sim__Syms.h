// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCVA5_SIM__SYMS_H_
#define VERILATED_VCVA5_SIM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcva5_sim.h"

// INCLUDE MODULE CLASSES
#include "Vcva5_sim___024root.h"
#include "Vcva5_sim_l2_requester_interface.h"
#include "Vcva5_sim_cfu_interface.h"
#include "Vcva5_sim_branch_predictor_interface.h"
#include "Vcva5_sim_unit_issue_interface.h"
#include "Vcva5_sim_unit_writeback_interface.h"
#include "Vcva5_sim_ras_interface.h"
#include "Vcva5_sim_exception_interface.h"
#include "Vcva5_sim_mmu_interface.h"
#include "Vcva5_sim_tlb_interface.h"
#include "Vcva5_sim_register_file_issue_interface__pi2.h"
#include "Vcva5_sim_renamer_interface__N2.h"
#include "Vcva5_sim_local_memory_interface.h"
#include "Vcva5_sim_load_store_queue_interface.h"
#include "Vcva5_sim_memory_sub_unit_interface.h"
#include "Vcva5_sim_unsigned_division_interface.h"
#include "Vcva5_sim_axi_interface.h"
#include "Vcva5_sim_avalon_interface.h"
#include "Vcva5_sim_wishbone_interface.h"
#include "Vcva5_sim_l1_arbiter_request_interface.h"
#include "Vcva5_sim_l1_arbiter_return_interface.h"
#include "Vcva5_sim_store_queue_interface.h"
#include "Vcva5_sim_fifo_interface__D2b.h"
#include "Vcva5_sim_fifo_interface__D20.h"
#include "Vcva5_sim_fifo_interface__D5.h"
#include "Vcva5_sim_fifo_interface__D3.h"
#include "Vcva5_sim_fifo_interface__D6.h"
#include "Vcva5_sim_fifo_interface__D12.h"
#include "Vcva5_sim_fifo_interface__D11.h"
#include "Vcva5_sim_fifo_interface__D57.h"
#include "Vcva5_sim_fifo_interface__D30.h"
#include "Vcva5_sim_fifo_interface__D1.h"
#include "Vcva5_sim___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vcva5_sim__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcva5_sim* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcva5_sim___024root            TOP;
    Vcva5_sim___024unit            TOP____024unit;
    Vcva5_sim_fifo_interface__D2b  TOP__cva5_sim__DOT__arb__DOT__request_fifo;
    Vcva5_sim_axi_interface        TOP__cva5_sim__DOT__axi;
    Vcva5_sim_cfu_interface        TOP__cva5_sim__DOT__cfu;
    Vcva5_sim_branch_predictor_interface TOP__cva5_sim__DOT__cpu__DOT__bp;
    Vcva5_sim_renamer_interface__N2 TOP__cva5_sim__DOT__cpu__DOT__decode_rename_interface;
    Vcva5_sim_mmu_interface        TOP__cva5_sim__DOT__cpu__DOT__dmmu;
    Vcva5_sim_tlb_interface        TOP__cva5_sim__DOT__cpu__DOT__dtlb;
    Vcva5_sim_exception_interface  TOP__cva5_sim__DOT__cpu__DOT__exception__BRA__0__KET__;
    Vcva5_sim_exception_interface  TOP__cva5_sim__DOT__cpu__DOT__exception__BRA__1__KET__;
    Vcva5_sim_exception_interface  TOP__cva5_sim__DOT__cpu__DOT__exception__BRA__2__KET__;
    Vcva5_sim_fifo_interface__D5   TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo;
    Vcva5_sim_fifo_interface__D20  TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__input_fifo;
    Vcva5_sim_memory_sub_unit_interface TOP__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__sub_unit__BRA__0__KET__;
    Vcva5_sim_unsigned_division_interface TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__div_core;
    Vcva5_sim_fifo_interface__D57  TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo;
    Vcva5_sim_fifo_interface__D20  TOP__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__wb_fifo;
    Vcva5_sim_mmu_interface        TOP__cva5_sim__DOT__cpu__DOT__immu;
    Vcva5_sim_tlb_interface        TOP__cva5_sim__DOT__cpu__DOT__itlb;
    Vcva5_sim_l1_arbiter_request_interface TOP__cva5_sim__DOT__cpu__DOT__l1_request__BRA__0__KET__;
    Vcva5_sim_l1_arbiter_request_interface TOP__cva5_sim__DOT__cpu__DOT__l1_request__BRA__2__KET__;
    Vcva5_sim_l1_arbiter_request_interface TOP__cva5_sim__DOT__cpu__DOT__l1_request__BRA__3__KET__;
    Vcva5_sim_l1_arbiter_return_interface TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__0__KET__;
    Vcva5_sim_l1_arbiter_return_interface TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__1__KET__;
    Vcva5_sim_l1_arbiter_return_interface TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__2__KET__;
    Vcva5_sim_l1_arbiter_return_interface TOP__cva5_sim__DOT__cpu__DOT__l1_response__BRA__3__KET__;
    Vcva5_sim_fifo_interface__D1   TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__request_order;
    Vcva5_sim_fifo_interface__D11  TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes;
    Vcva5_sim_load_store_queue_interface TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq;
    Vcva5_sim_fifo_interface__D30  TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lq;
    Vcva5_sim_store_queue_interface TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq;
    Vcva5_sim_memory_sub_unit_interface TOP__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit__BRA__0__KET__;
    Vcva5_sim_ras_interface        TOP__cva5_sim__DOT__cpu__DOT__ras;
    Vcva5_sim_fifo_interface__D3   TOP__cva5_sim__DOT__cpu__DOT__ras_block__DOT__ri_fifo;
    Vcva5_sim_fifo_interface__D6   TOP__cva5_sim__DOT__cpu__DOT__renamer_block__DOT__free_list;
    Vcva5_sim_fifo_interface__D12  TOP__cva5_sim__DOT__cpu__DOT__renamer_block__DOT__inuse_list;
    Vcva5_sim_register_file_issue_interface__pi2 TOP__cva5_sim__DOT__cpu__DOT__rf_issue;
    Vcva5_sim_unit_issue_interface TOP__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__1__KET__;
    Vcva5_sim_unit_issue_interface TOP__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__4__KET__;
    Vcva5_sim_unit_issue_interface TOP__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__5__KET__;
    Vcva5_sim_unit_issue_interface TOP__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__6__KET__;
    Vcva5_sim_unit_writeback_interface TOP__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__2__KET__;
    Vcva5_sim_unit_writeback_interface TOP__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__4__KET__;
    Vcva5_sim_local_memory_interface TOP__cva5_sim__DOT__data_bram;
    Vcva5_sim_wishbone_interface   TOP__cva5_sim__DOT__dwishbone;
    Vcva5_sim_local_memory_interface TOP__cva5_sim__DOT__instruction_bram;
    Vcva5_sim_wishbone_interface   TOP__cva5_sim__DOT__iwishbone;
    Vcva5_sim_l2_requester_interface TOP__cva5_sim__DOT__l2;
    Vcva5_sim_avalon_interface     TOP__cva5_sim__DOT__m_avalon;
    Vcva5_sim_axi_interface        TOP__cva5_sim__DOT__m_axi;

    // SCOPE NAMES
    VerilatedScope __Vscope_cva5_sim__arb__data_fifo_block;
    VerilatedScope __Vscope_cva5_sim__arb__data_fifo_block__fifo_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__arb__data_fifo_block__fifo_potenial_push_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__arb__data_fifo_block__fifo_underflow_assertion;
    VerilatedScope __Vscope_cva5_sim__arb__request_fifo_block;
    VerilatedScope __Vscope_cva5_sim__arb__request_fifo_block__fifo_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__arb__request_fifo_block__fifo_potenial_push_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__arb__request_fifo_block__fifo_underflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__decode_and_issue_block;
    VerilatedScope __Vscope_cva5_sim__cpu__decode_and_issue_block__gen_decode_exceptions;
    VerilatedScope __Vscope_cva5_sim__cpu__fetch_block;
    VerilatedScope __Vscope_cva5_sim__cpu__fetch_block__attributes_fifo;
    VerilatedScope __Vscope_cva5_sim__cpu__fetch_block__attributes_fifo__fifo_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__fetch_block__attributes_fifo__fifo_potenial_push_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__fetch_block__attributes_fifo__fifo_underflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__fetch_block__gen_fetch_icache__i_cache;
    VerilatedScope __Vscope_cva5_sim__cpu__fetch_block__gen_fetch_icache__i_cache__cache_input_fifo;
    VerilatedScope __Vscope_cva5_sim__cpu__fetch_block__gen_fetch_icache__i_cache__cache_input_fifo__fifo_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__fetch_block__gen_fetch_icache__i_cache__cache_input_fifo__fifo_potenial_push_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__fetch_block__gen_fetch_icache__i_cache__cache_input_fifo__fifo_underflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__fetch_block__gen_fetch_icache__i_cache__icache_l1_arb_ack_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__fetch_block__gen_fetch_icache__i_cache__icache_l1_arb_data_valid_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__fetch_block__spurious_fetch_complete_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__gen_div__div_unit_block__div_input_fifo;
    VerilatedScope __Vscope_cva5_sim__cpu__gen_div__div_unit_block__div_input_fifo__fifo_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__gen_div__div_unit_block__div_input_fifo__fifo_potenial_push_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__gen_div__div_unit_block__div_input_fifo__fifo_underflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__id_block;
    VerilatedScope __Vscope_cva5_sim__cpu__id_block__decode_advanced_without_id_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__id_block__pc_id_assigned_without_pc_id_available_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__attributes_fifo;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__attributes_fifo__fifo_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__attributes_fifo__fifo_potenial_push_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__attributes_fifo__fifo_underflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__gen_ls_dcache__data_cache;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__gen_ls_dcache__data_cache__dache_suprious_l1_ack_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__gen_ls_dcache__data_cache__dcache_request_when_not_ready_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__gen_ls_dcache__data_cache__request_order_fifo;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__gen_ls_dcache__data_cache__request_order_fifo__fifo_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__gen_ls_dcache__data_cache__request_order_fifo__fifo_potenial_push_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__gen_ls_dcache__data_cache__request_order_fifo__fifo_underflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__lsq_block__load_queue_fifo;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__lsq_block__load_queue_fifo__fifo_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__lsq_block__load_queue_fifo__fifo_potenial_push_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__lsq_block__load_queue_fifo__fifo_underflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__lsq_block__sq_block;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__lsq_block__sq_block__fifo_underflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__lsq_block__sq_block__sq_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__load_store_unit_block__spurious_load_complete_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__ras_block__read_index_fifo;
    VerilatedScope __Vscope_cva5_sim__cpu__ras_block__read_index_fifo__fifo_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__ras_block__read_index_fifo__fifo_potenial_push_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__ras_block__read_index_fifo__fifo_underflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__register_file_block__register_file_gen__BRA__0__KET____reg_group;
    VerilatedScope __Vscope_cva5_sim__cpu__register_file_block__register_file_gen__BRA__0__KET____reg_group__write_to_zero_reg_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__register_file_block__register_file_gen__BRA__1__KET____reg_group;
    VerilatedScope __Vscope_cva5_sim__cpu__register_file_block__register_file_gen__BRA__1__KET____reg_group__write_to_zero_reg_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__renamer_block;
    VerilatedScope __Vscope_cva5_sim__cpu__renamer_block__free_list_fifo;
    VerilatedScope __Vscope_cva5_sim__cpu__renamer_block__free_list_fifo__fifo_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__renamer_block__free_list_fifo__fifo_underflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__renamer_block__inuse_list_fifo;
    VerilatedScope __Vscope_cva5_sim__cpu__renamer_block__inuse_list_fifo__fifo_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__renamer_block__inuse_list_fifo__fifo_potenial_push_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__renamer_block__inuse_list_fifo__fifo_underflow_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__renamer_block__rename_rd_zero_assertion;
    VerilatedScope __Vscope_cva5_sim__cpu__renamer_block__rename_rs_zero_assertion__BRA__0__KET__;
    VerilatedScope __Vscope_cva5_sim__cpu__renamer_block__rename_rs_zero_assertion__BRA__1__KET__;
    VerilatedScope __Vscope_cva5_sim__id_list_fifo;
    VerilatedScope __Vscope_cva5_sim__id_list_fifo__fifo_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__id_list_fifo__fifo_potenial_push_overflow_assertion;
    VerilatedScope __Vscope_cva5_sim__id_list_fifo__fifo_underflow_assertion;
    VerilatedScope __Vscope_cva5_sim__x_axi_crossbar__axi_crossbar_rd_inst__s_ifaces__BRA__0__KET____addr_inst;
    VerilatedScope __Vscope_cva5_sim__x_axi_crossbar__axi_crossbar_rd_inst__s_ifaces__BRA__1__KET____addr_inst;
    VerilatedScope __Vscope_cva5_sim__x_axi_crossbar__axi_crossbar_wr_inst__s_ifaces__BRA__0__KET____addr_inst;
    VerilatedScope __Vscope_cva5_sim__x_axi_crossbar__axi_crossbar_wr_inst__s_ifaces__BRA__1__KET____addr_inst;

    // CONSTRUCTORS
    Vcva5_sim__Syms(VerilatedContext* contextp, const char* namep, Vcva5_sim* modelp);
    ~Vcva5_sim__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCVA5_SIM_H_
#define VERILATED_VCVA5_SIM_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vcva5_sim__Syms;
class Vcva5_sim___024root;
class VerilatedFstC;
class Vcva5_sim___024unit;
class Vcva5_sim_local_memory_interface;
class Vcva5_sim_axi_interface;
class Vcva5_sim_avalon_interface;
class Vcva5_sim_wishbone_interface;
class Vcva5_sim_l2_requester_interface;
class Vcva5_sim_cfu_interface;
class Vcva5_sim_fifo_interface__D2b;
class Vcva5_sim_fifo_interface__D20;
class Vcva5_sim_l1_arbiter_request_interface;
class Vcva5_sim_l1_arbiter_return_interface;
class Vcva5_sim_branch_predictor_interface;
class Vcva5_sim_ras_interface;
class Vcva5_sim_register_file_issue_interface__pi2;
class Vcva5_sim_unit_issue_interface;
class Vcva5_sim_unit_writeback_interface;
class Vcva5_sim_mmu_interface;
class Vcva5_sim_tlb_interface;
class Vcva5_sim_renamer_interface__N2;
class Vcva5_sim_exception_interface;
class Vcva5_sim_memory_sub_unit_interface;
class Vcva5_sim_fifo_interface__D5;
class Vcva5_sim_fifo_interface__D3;
class Vcva5_sim_fifo_interface__D6;
class Vcva5_sim_fifo_interface__D12;
class Vcva5_sim_fifo_interface__D11;
class Vcva5_sim_load_store_queue_interface;
class Vcva5_sim_fifo_interface__D30;
class Vcva5_sim_store_queue_interface;
class Vcva5_sim_fifo_interface__D1;
class Vcva5_sim_unsigned_division_interface;
class Vcva5_sim_fifo_interface__D57;


// This class is the main interface to the Verilated model
class Vcva5_sim VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vcva5_sim__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_OUT8(&ddr_axi_arburst,1,0);
    VL_OUT8(&ddr_axi_arcache,3,0);
    VL_OUT8(&ddr_axi_arid,6,0);
    VL_OUT8(&ddr_axi_arlen,7,0);
    VL_OUT8(&ddr_axi_arlock,0,0);
    VL_OUT8(&ddr_axi_arprot,2,0);
    VL_OUT8(&ddr_axi_arqos,3,0);
    VL_IN8(&ddr_axi_arready,0,0);
    VL_OUT8(&ddr_axi_arregion,3,0);
    VL_OUT8(&ddr_axi_arsize,2,0);
    VL_OUT8(&ddr_axi_arvalid,0,0);
    VL_OUT8(&ddr_axi_awburst,1,0);
    VL_OUT8(&ddr_axi_awcache,3,0);
    VL_OUT8(&ddr_axi_awid,6,0);
    VL_OUT8(&ddr_axi_awlen,7,0);
    VL_OUT8(&ddr_axi_awlock,0,0);
    VL_OUT8(&ddr_axi_awprot,2,0);
    VL_OUT8(&ddr_axi_awqos,3,0);
    VL_IN8(&ddr_axi_awready,0,0);
    VL_OUT8(&ddr_axi_awregion,3,0);
    VL_OUT8(&ddr_axi_awsize,2,0);
    VL_OUT8(&ddr_axi_awvalid,0,0);
    VL_IN8(&ddr_axi_bid,6,0);
    VL_IN8(&ddr_axi_bresp,1,0);
    VL_IN8(&ddr_axi_bvalid,0,0);
    VL_OUT8(&ddr_axi_bready,0,0);
    VL_IN8(&ddr_axi_rid,6,0);
    VL_IN8(&ddr_axi_rlast,0,0);
    VL_OUT8(&ddr_axi_rready,0,0);
    VL_IN8(&ddr_axi_rresp,1,0);
    VL_IN8(&ddr_axi_rvalid,0,0);
    VL_OUT8(&ddr_axi_wlast,0,0);
    VL_IN8(&ddr_axi_wready,0,0);
    VL_OUT8(&ddr_axi_wstrb,3,0);
    VL_OUT8(&ddr_axi_wvalid,0,0);
    VL_OUT8(&ddr_axi_wid,6,0);
    VL_OUT8(&instruction_bram_en,0,0);
    VL_OUT8(&instruction_bram_be,3,0);
    VL_OUT8(&data_bram_en,0,0);
    VL_OUT8(&data_bram_be,3,0);
    VL_OUT8(&write_uart,0,0);
    VL_OUT8(&uart_byte,7,0);
    VL_OUT8(&store_queue_empty,0,0);
    VL_OUT(&ddr_axi_araddr,31,0);
    VL_OUT(&ddr_axi_awaddr,31,0);
    VL_IN(&ddr_axi_rdata,31,0);
    VL_OUT(&ddr_axi_wdata,31,0);
    VL_OUT(&instruction_bram_addr,29,0);
    VL_OUT(&instruction_bram_data_in,31,0);
    VL_IN(&instruction_bram_data_out,31,0);
    VL_OUT(&data_bram_addr,29,0);
    VL_OUT(&data_bram_data_in,31,0);
    VL_IN(&data_bram_data_out,31,0);
    VL_OUT(&NUM_RETIRE_PORTS,31,0);
    VL_OUT((&retire_ports_instruction)[2],31,0);
    VL_OUT((&retire_ports_pc)[2],31,0);
    VL_OUT8((&retire_ports_valid)[2],0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vcva5_sim___024unit* const __PVT____024unit;
    Vcva5_sim_local_memory_interface* const __PVT__cva5_sim__DOT__instruction_bram;
    Vcva5_sim_local_memory_interface* const __PVT__cva5_sim__DOT__data_bram;
    Vcva5_sim_axi_interface* const __PVT__cva5_sim__DOT__m_axi;
    Vcva5_sim_avalon_interface* const __PVT__cva5_sim__DOT__m_avalon;
    Vcva5_sim_wishbone_interface* const __PVT__cva5_sim__DOT__dwishbone;
    Vcva5_sim_wishbone_interface* const __PVT__cva5_sim__DOT__iwishbone;
    Vcva5_sim_axi_interface* const __PVT__cva5_sim__DOT__axi;
    Vcva5_sim_l2_requester_interface* const __PVT__cva5_sim__DOT__l2;
    Vcva5_sim_cfu_interface* const __PVT__cva5_sim__DOT__cfu;
    Vcva5_sim_fifo_interface__D2b* const __PVT__cva5_sim__DOT__arb__DOT__request_fifo;
    Vcva5_sim_fifo_interface__D20* const __PVT__cva5_sim__DOT__arb__DOT__data_fifo;
    Vcva5_sim_l1_arbiter_request_interface* const __PVT__cva5_sim__DOT__cpu__DOT__l1_request__BRA__3__KET__;
    Vcva5_sim_l1_arbiter_request_interface* const __PVT__cva5_sim__DOT__cpu__DOT__l1_request__BRA__2__KET__;
    Vcva5_sim_l1_arbiter_request_interface* const __PVT__cva5_sim__DOT__cpu__DOT__l1_request__BRA__1__KET__;
    Vcva5_sim_l1_arbiter_request_interface* const __PVT__cva5_sim__DOT__cpu__DOT__l1_request__BRA__0__KET__;
    Vcva5_sim_l1_arbiter_return_interface* const __PVT__cva5_sim__DOT__cpu__DOT__l1_response__BRA__3__KET__;
    Vcva5_sim_l1_arbiter_return_interface* const __PVT__cva5_sim__DOT__cpu__DOT__l1_response__BRA__2__KET__;
    Vcva5_sim_l1_arbiter_return_interface* const __PVT__cva5_sim__DOT__cpu__DOT__l1_response__BRA__1__KET__;
    Vcva5_sim_l1_arbiter_return_interface* const __PVT__cva5_sim__DOT__cpu__DOT__l1_response__BRA__0__KET__;
    Vcva5_sim_branch_predictor_interface* const __PVT__cva5_sim__DOT__cpu__DOT__bp;
    Vcva5_sim_ras_interface* const __PVT__cva5_sim__DOT__cpu__DOT__ras;
    Vcva5_sim_register_file_issue_interface__pi2* const __PVT__cva5_sim__DOT__cpu__DOT__rf_issue;
    Vcva5_sim_unit_issue_interface* const __PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__7__KET__;
    Vcva5_sim_unit_issue_interface* const __PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__6__KET__;
    Vcva5_sim_unit_issue_interface* const __PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__5__KET__;
    Vcva5_sim_unit_issue_interface* const __PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__4__KET__;
    Vcva5_sim_unit_issue_interface* const __PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__3__KET__;
    Vcva5_sim_unit_issue_interface* const __PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__2__KET__;
    Vcva5_sim_unit_issue_interface* const __PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__1__KET__;
    Vcva5_sim_unit_issue_interface* const __PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__0__KET__;
    Vcva5_sim_unit_writeback_interface* const __PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__5__KET__;
    Vcva5_sim_unit_writeback_interface* const __PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__4__KET__;
    Vcva5_sim_unit_writeback_interface* const __PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__3__KET__;
    Vcva5_sim_unit_writeback_interface* const __PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__2__KET__;
    Vcva5_sim_unit_writeback_interface* const __PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__1__KET__;
    Vcva5_sim_unit_writeback_interface* const __PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__0__KET__;
    Vcva5_sim_mmu_interface* const __PVT__cva5_sim__DOT__cpu__DOT__immu;
    Vcva5_sim_mmu_interface* const __PVT__cva5_sim__DOT__cpu__DOT__dmmu;
    Vcva5_sim_tlb_interface* const __PVT__cva5_sim__DOT__cpu__DOT__itlb;
    Vcva5_sim_tlb_interface* const __PVT__cva5_sim__DOT__cpu__DOT__dtlb;
    Vcva5_sim_renamer_interface__N2* const __PVT__cva5_sim__DOT__cpu__DOT__decode_rename_interface;
    Vcva5_sim_exception_interface* const __PVT__cva5_sim__DOT__cpu__DOT__exception__BRA__2__KET__;
    Vcva5_sim_exception_interface* const __PVT__cva5_sim__DOT__cpu__DOT__exception__BRA__1__KET__;
    Vcva5_sim_exception_interface* const __PVT__cva5_sim__DOT__cpu__DOT__exception__BRA__0__KET__;
    Vcva5_sim_memory_sub_unit_interface* const __PVT__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__sub_unit__BRA__0__KET__;
    Vcva5_sim_fifo_interface__D5* const __PVT__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo;
    Vcva5_sim_fifo_interface__D20* const __PVT__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__input_fifo;
    Vcva5_sim_fifo_interface__D3* const __PVT__cva5_sim__DOT__cpu__DOT__ras_block__DOT__ri_fifo;
    Vcva5_sim_fifo_interface__D6* const __PVT__cva5_sim__DOT__cpu__DOT__renamer_block__DOT__free_list;
    Vcva5_sim_fifo_interface__D12* const __PVT__cva5_sim__DOT__cpu__DOT__renamer_block__DOT__inuse_list;
    Vcva5_sim_memory_sub_unit_interface* const __PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit__BRA__0__KET__;
    Vcva5_sim_fifo_interface__D11* const __PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes;
    Vcva5_sim_load_store_queue_interface* const __PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq;
    Vcva5_sim_fifo_interface__D30* const __PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lq;
    Vcva5_sim_store_queue_interface* const __PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq;
    Vcva5_sim_fifo_interface__D1* const __PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__request_order;
    Vcva5_sim_unsigned_division_interface* const __PVT__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__div_core;
    Vcva5_sim_fifo_interface__D57* const __PVT__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo;
    Vcva5_sim_fifo_interface__D20* const __PVT__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__wb_fifo;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vcva5_sim___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vcva5_sim(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vcva5_sim(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vcva5_sim();
  private:
    VL_UNCOPYABLE(Vcva5_sim);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
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
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

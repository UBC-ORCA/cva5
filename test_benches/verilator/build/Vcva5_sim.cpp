// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcva5_sim.h"
#include "Vcva5_sim__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vcva5_sim::Vcva5_sim(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcva5_sim__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , ddr_axi_arburst{vlSymsp->TOP.ddr_axi_arburst}
    , ddr_axi_arcache{vlSymsp->TOP.ddr_axi_arcache}
    , ddr_axi_arid{vlSymsp->TOP.ddr_axi_arid}
    , ddr_axi_arlen{vlSymsp->TOP.ddr_axi_arlen}
    , ddr_axi_arlock{vlSymsp->TOP.ddr_axi_arlock}
    , ddr_axi_arprot{vlSymsp->TOP.ddr_axi_arprot}
    , ddr_axi_arqos{vlSymsp->TOP.ddr_axi_arqos}
    , ddr_axi_arready{vlSymsp->TOP.ddr_axi_arready}
    , ddr_axi_arregion{vlSymsp->TOP.ddr_axi_arregion}
    , ddr_axi_arsize{vlSymsp->TOP.ddr_axi_arsize}
    , ddr_axi_arvalid{vlSymsp->TOP.ddr_axi_arvalid}
    , ddr_axi_awburst{vlSymsp->TOP.ddr_axi_awburst}
    , ddr_axi_awcache{vlSymsp->TOP.ddr_axi_awcache}
    , ddr_axi_awid{vlSymsp->TOP.ddr_axi_awid}
    , ddr_axi_awlen{vlSymsp->TOP.ddr_axi_awlen}
    , ddr_axi_awlock{vlSymsp->TOP.ddr_axi_awlock}
    , ddr_axi_awprot{vlSymsp->TOP.ddr_axi_awprot}
    , ddr_axi_awqos{vlSymsp->TOP.ddr_axi_awqos}
    , ddr_axi_awready{vlSymsp->TOP.ddr_axi_awready}
    , ddr_axi_awregion{vlSymsp->TOP.ddr_axi_awregion}
    , ddr_axi_awsize{vlSymsp->TOP.ddr_axi_awsize}
    , ddr_axi_awvalid{vlSymsp->TOP.ddr_axi_awvalid}
    , ddr_axi_bid{vlSymsp->TOP.ddr_axi_bid}
    , ddr_axi_bresp{vlSymsp->TOP.ddr_axi_bresp}
    , ddr_axi_bvalid{vlSymsp->TOP.ddr_axi_bvalid}
    , ddr_axi_bready{vlSymsp->TOP.ddr_axi_bready}
    , ddr_axi_rid{vlSymsp->TOP.ddr_axi_rid}
    , ddr_axi_rlast{vlSymsp->TOP.ddr_axi_rlast}
    , ddr_axi_rready{vlSymsp->TOP.ddr_axi_rready}
    , ddr_axi_rresp{vlSymsp->TOP.ddr_axi_rresp}
    , ddr_axi_rvalid{vlSymsp->TOP.ddr_axi_rvalid}
    , ddr_axi_wlast{vlSymsp->TOP.ddr_axi_wlast}
    , ddr_axi_wready{vlSymsp->TOP.ddr_axi_wready}
    , ddr_axi_wstrb{vlSymsp->TOP.ddr_axi_wstrb}
    , ddr_axi_wvalid{vlSymsp->TOP.ddr_axi_wvalid}
    , ddr_axi_wid{vlSymsp->TOP.ddr_axi_wid}
    , instruction_bram_en{vlSymsp->TOP.instruction_bram_en}
    , instruction_bram_be{vlSymsp->TOP.instruction_bram_be}
    , data_bram_en{vlSymsp->TOP.data_bram_en}
    , data_bram_be{vlSymsp->TOP.data_bram_be}
    , write_uart{vlSymsp->TOP.write_uart}
    , uart_byte{vlSymsp->TOP.uart_byte}
    , store_queue_empty{vlSymsp->TOP.store_queue_empty}
    , ddr_axi_araddr{vlSymsp->TOP.ddr_axi_araddr}
    , ddr_axi_awaddr{vlSymsp->TOP.ddr_axi_awaddr}
    , ddr_axi_rdata{vlSymsp->TOP.ddr_axi_rdata}
    , ddr_axi_wdata{vlSymsp->TOP.ddr_axi_wdata}
    , instruction_bram_addr{vlSymsp->TOP.instruction_bram_addr}
    , instruction_bram_data_in{vlSymsp->TOP.instruction_bram_data_in}
    , instruction_bram_data_out{vlSymsp->TOP.instruction_bram_data_out}
    , data_bram_addr{vlSymsp->TOP.data_bram_addr}
    , data_bram_data_in{vlSymsp->TOP.data_bram_data_in}
    , data_bram_data_out{vlSymsp->TOP.data_bram_data_out}
    , NUM_RETIRE_PORTS{vlSymsp->TOP.NUM_RETIRE_PORTS}
    , retire_ports_instruction{vlSymsp->TOP.retire_ports_instruction}
    , retire_ports_pc{vlSymsp->TOP.retire_ports_pc}
    , retire_ports_valid{vlSymsp->TOP.retire_ports_valid}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__cva5_sim__DOT__instruction_bram{vlSymsp->TOP.__PVT__cva5_sim__DOT__instruction_bram}
    , __PVT__cva5_sim__DOT__data_bram{vlSymsp->TOP.__PVT__cva5_sim__DOT__data_bram}
    , __PVT__cva5_sim__DOT__m_axi{vlSymsp->TOP.__PVT__cva5_sim__DOT__m_axi}
    , __PVT__cva5_sim__DOT__m_avalon{vlSymsp->TOP.__PVT__cva5_sim__DOT__m_avalon}
    , __PVT__cva5_sim__DOT__dwishbone{vlSymsp->TOP.__PVT__cva5_sim__DOT__dwishbone}
    , __PVT__cva5_sim__DOT__iwishbone{vlSymsp->TOP.__PVT__cva5_sim__DOT__iwishbone}
    , __PVT__cva5_sim__DOT__axi{vlSymsp->TOP.__PVT__cva5_sim__DOT__axi}
    , __PVT__cva5_sim__DOT__l2{vlSymsp->TOP.__PVT__cva5_sim__DOT__l2}
    , __PVT__cva5_sim__DOT__cfu{vlSymsp->TOP.__PVT__cva5_sim__DOT__cfu}
    , __PVT__cva5_sim__DOT__arb__DOT__request_fifo{vlSymsp->TOP.__PVT__cva5_sim__DOT__arb__DOT__request_fifo}
    , __PVT__cva5_sim__DOT__arb__DOT__data_fifo{vlSymsp->TOP.__PVT__cva5_sim__DOT__arb__DOT__data_fifo}
    , __PVT__cva5_sim__DOT__cpu__DOT__l1_request__BRA__3__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__l1_request__BRA__3__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__l1_request__BRA__2__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__l1_request__BRA__2__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__l1_request__BRA__1__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__l1_request__BRA__1__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__l1_request__BRA__0__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__l1_request__BRA__0__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__l1_response__BRA__3__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__l1_response__BRA__3__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__l1_response__BRA__2__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__l1_response__BRA__2__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__l1_response__BRA__1__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__l1_response__BRA__1__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__l1_response__BRA__0__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__l1_response__BRA__0__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__bp{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__bp}
    , __PVT__cva5_sim__DOT__cpu__DOT__ras{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__ras}
    , __PVT__cva5_sim__DOT__cpu__DOT__rf_issue{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__rf_issue}
    , __PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__7__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__7__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__6__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__6__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__5__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__5__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__4__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__4__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__3__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__3__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__2__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__2__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__1__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__1__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__0__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__unit_issue__BRA__0__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__5__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__5__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__4__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__4__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__3__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__3__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__2__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__2__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__1__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__1__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__0__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__unit_wb__BRA__0__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__immu{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__immu}
    , __PVT__cva5_sim__DOT__cpu__DOT__dmmu{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__dmmu}
    , __PVT__cva5_sim__DOT__cpu__DOT__itlb{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__itlb}
    , __PVT__cva5_sim__DOT__cpu__DOT__dtlb{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__dtlb}
    , __PVT__cva5_sim__DOT__cpu__DOT__decode_rename_interface{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__decode_rename_interface}
    , __PVT__cva5_sim__DOT__cpu__DOT__exception__BRA__2__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__exception__BRA__2__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__exception__BRA__1__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__exception__BRA__1__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__exception__BRA__0__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__exception__BRA__0__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__sub_unit__BRA__0__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__sub_unit__BRA__0__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo}
    , __PVT__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__input_fifo{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__fetch_block__DOT__gen_fetch_icache__DOT__i_cache__DOT__input_fifo}
    , __PVT__cva5_sim__DOT__cpu__DOT__ras_block__DOT__ri_fifo{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__ras_block__DOT__ri_fifo}
    , __PVT__cva5_sim__DOT__cpu__DOT__renamer_block__DOT__free_list{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__renamer_block__DOT__free_list}
    , __PVT__cva5_sim__DOT__cpu__DOT__renamer_block__DOT__inuse_list{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__renamer_block__DOT__inuse_list}
    , __PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit__BRA__0__KET__{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit__BRA__0__KET__}
    , __PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes}
    , __PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq}
    , __PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lq{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lq}
    , __PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__sq}
    , __PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__request_order{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__load_store_unit_block__DOT__gen_ls_dcache__DOT__data_cache__DOT__request_order}
    , __PVT__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__div_core{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__div_core}
    , __PVT__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__input_fifo}
    , __PVT__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__wb_fifo{vlSymsp->TOP.__PVT__cva5_sim__DOT__cpu__DOT__gen_div__DOT__div_unit_block__DOT__wb_fifo}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcva5_sim::Vcva5_sim(const char* _vcname__)
    : Vcva5_sim(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcva5_sim::~Vcva5_sim() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcva5_sim___024root___eval_debug_assertions(Vcva5_sim___024root* vlSelf);
#endif  // VL_DEBUG
void Vcva5_sim___024root___eval_static(Vcva5_sim___024root* vlSelf);
void Vcva5_sim___024root___eval_initial(Vcva5_sim___024root* vlSelf);
void Vcva5_sim___024root___eval_settle(Vcva5_sim___024root* vlSelf);
void Vcva5_sim___024root___eval(Vcva5_sim___024root* vlSelf);

void Vcva5_sim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcva5_sim::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcva5_sim___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcva5_sim___024root___eval_static(&(vlSymsp->TOP));
        Vcva5_sim___024root___eval_initial(&(vlSymsp->TOP));
        Vcva5_sim___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcva5_sim___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcva5_sim::eventsPending() { return false; }

uint64_t Vcva5_sim::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcva5_sim::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcva5_sim___024root___eval_final(Vcva5_sim___024root* vlSelf);

VL_ATTR_COLD void Vcva5_sim::final() {
    Vcva5_sim___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcva5_sim::hierName() const { return vlSymsp->name(); }
const char* Vcva5_sim::modelName() const { return "Vcva5_sim"; }
unsigned Vcva5_sim::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vcva5_sim::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcva5_sim___024root__trace_init_top(Vcva5_sim___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcva5_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcva5_sim___024root*>(voidSelf);
    Vcva5_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vcva5_sim___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vcva5_sim___024root__trace_register(Vcva5_sim___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vcva5_sim::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcva5_sim::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcva5_sim___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

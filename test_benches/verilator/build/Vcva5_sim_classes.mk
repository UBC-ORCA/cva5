# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vcva5_sim.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vcva5_sim \
	Vcva5_sim___024root__DepSet_h791dd787__0 \
	Vcva5_sim___024root__DepSet_h791dd787__1 \
	Vcva5_sim___024root__DepSet_h791dd787__2 \
	Vcva5_sim___024root__DepSet_h791dd787__3 \
	Vcva5_sim___024root__DepSet_he6441999__0 \
	Vcva5_sim_l2_requester_interface__DepSet_he97718fe__0 \
	Vcva5_sim_cfu_interface__DepSet_hbf734798__0 \
	Vcva5_sim_branch_predictor_interface__DepSet_hc78512f8__0 \
	Vcva5_sim_unit_issue_interface__DepSet_h92bdb7ec__0 \
	Vcva5_sim_unit_writeback_interface__DepSet_hd6db9092__0 \
	Vcva5_sim_ras_interface__DepSet_h6704bff0__0 \
	Vcva5_sim_exception_interface__DepSet_h6f3c66e4__0 \
	Vcva5_sim_mmu_interface__DepSet_h08c9fb8d__0 \
	Vcva5_sim_tlb_interface__DepSet_hd41cbb31__0 \
	Vcva5_sim_register_file_issue_interface__pi2__DepSet_h77f56b54__0 \
	Vcva5_sim_renamer_interface__N2__DepSet_h7614306a__0 \
	Vcva5_sim_local_memory_interface__DepSet_hcdcf5fed__0 \
	Vcva5_sim_load_store_queue_interface__DepSet_h211abb57__0 \
	Vcva5_sim_memory_sub_unit_interface__DepSet_hd5320d76__0 \
	Vcva5_sim_unsigned_division_interface__DepSet_h20268e0d__0 \
	Vcva5_sim_axi_interface__DepSet_h6243d436__0 \
	Vcva5_sim_avalon_interface__DepSet_hb3d62c83__0 \
	Vcva5_sim_wishbone_interface__DepSet_h8f86c380__0 \
	Vcva5_sim_l1_arbiter_request_interface__DepSet_h188f7b5d__0 \
	Vcva5_sim_l1_arbiter_return_interface__DepSet_h39b7b0ea__0 \
	Vcva5_sim_store_queue_interface__DepSet_ha78953c3__0 \
	Vcva5_sim_fifo_interface__D2b__DepSet_hebafa1fe__0 \
	Vcva5_sim_fifo_interface__D20__DepSet_h139c857b__0 \
	Vcva5_sim_fifo_interface__D5__DepSet_h4f26e19b__0 \
	Vcva5_sim_fifo_interface__D3__DepSet_h3b5afadf__0 \
	Vcva5_sim_fifo_interface__D6__DepSet_hcf92cdcc__0 \
	Vcva5_sim_fifo_interface__D12__DepSet_hb6e6bddb__0 \
	Vcva5_sim_fifo_interface__D11__DepSet_h28ba2c26__0 \
	Vcva5_sim_fifo_interface__D57__DepSet_hcff52eae__0 \
	Vcva5_sim_fifo_interface__D30__DepSet_h7924335e__0 \
	Vcva5_sim_fifo_interface__D1__DepSet_h98487290__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vcva5_sim__ConstPool_0 \
	Vcva5_sim___024root__Slow \
	Vcva5_sim___024root__DepSet_h791dd787__0__Slow \
	Vcva5_sim___024root__DepSet_h791dd787__1__Slow \
	Vcva5_sim___024root__DepSet_he6441999__0__Slow \
	Vcva5_sim_l2_requester_interface__Slow \
	Vcva5_sim_l2_requester_interface__DepSet_he97718fe__0__Slow \
	Vcva5_sim_cfu_interface__Slow \
	Vcva5_sim_cfu_interface__DepSet_hbf734798__0__Slow \
	Vcva5_sim_branch_predictor_interface__Slow \
	Vcva5_sim_branch_predictor_interface__DepSet_hc78512f8__0__Slow \
	Vcva5_sim_unit_issue_interface__Slow \
	Vcva5_sim_unit_issue_interface__DepSet_h92bdb7ec__0__Slow \
	Vcva5_sim_unit_writeback_interface__Slow \
	Vcva5_sim_unit_writeback_interface__DepSet_hd6db9092__0__Slow \
	Vcva5_sim_ras_interface__Slow \
	Vcva5_sim_ras_interface__DepSet_h6704bff0__0__Slow \
	Vcva5_sim_exception_interface__Slow \
	Vcva5_sim_exception_interface__DepSet_h6f3c66e4__0__Slow \
	Vcva5_sim_mmu_interface__Slow \
	Vcva5_sim_mmu_interface__DepSet_h08c9fb8d__0__Slow \
	Vcva5_sim_tlb_interface__Slow \
	Vcva5_sim_tlb_interface__DepSet_hd41cbb31__0__Slow \
	Vcva5_sim_register_file_issue_interface__pi2__Slow \
	Vcva5_sim_register_file_issue_interface__pi2__DepSet_h77f56b54__0__Slow \
	Vcva5_sim_renamer_interface__N2__Slow \
	Vcva5_sim_renamer_interface__N2__DepSet_h7614306a__0__Slow \
	Vcva5_sim_local_memory_interface__Slow \
	Vcva5_sim_local_memory_interface__DepSet_hcdcf5fed__0__Slow \
	Vcva5_sim_load_store_queue_interface__Slow \
	Vcva5_sim_load_store_queue_interface__DepSet_h211abb57__0__Slow \
	Vcva5_sim_memory_sub_unit_interface__Slow \
	Vcva5_sim_memory_sub_unit_interface__DepSet_hd5320d76__0__Slow \
	Vcva5_sim_unsigned_division_interface__Slow \
	Vcva5_sim_unsigned_division_interface__DepSet_h20268e0d__0__Slow \
	Vcva5_sim_axi_interface__Slow \
	Vcva5_sim_axi_interface__DepSet_h6243d436__0__Slow \
	Vcva5_sim_avalon_interface__Slow \
	Vcva5_sim_avalon_interface__DepSet_hb3d62c83__0__Slow \
	Vcva5_sim_wishbone_interface__Slow \
	Vcva5_sim_wishbone_interface__DepSet_h8f86c380__0__Slow \
	Vcva5_sim_l1_arbiter_request_interface__Slow \
	Vcva5_sim_l1_arbiter_request_interface__DepSet_h188f7b5d__0__Slow \
	Vcva5_sim_l1_arbiter_return_interface__Slow \
	Vcva5_sim_l1_arbiter_return_interface__DepSet_h39b7b0ea__0__Slow \
	Vcva5_sim_store_queue_interface__Slow \
	Vcva5_sim_store_queue_interface__DepSet_ha78953c3__0__Slow \
	Vcva5_sim_fifo_interface__D2b__Slow \
	Vcva5_sim_fifo_interface__D2b__DepSet_hebafa1fe__0__Slow \
	Vcva5_sim_fifo_interface__D20__Slow \
	Vcva5_sim_fifo_interface__D20__DepSet_h139c857b__0__Slow \
	Vcva5_sim_fifo_interface__D5__Slow \
	Vcva5_sim_fifo_interface__D5__DepSet_h4f26e19b__0__Slow \
	Vcva5_sim_fifo_interface__D3__Slow \
	Vcva5_sim_fifo_interface__D3__DepSet_h3b5afadf__0__Slow \
	Vcva5_sim_fifo_interface__D6__Slow \
	Vcva5_sim_fifo_interface__D6__DepSet_hcf92cdcc__0__Slow \
	Vcva5_sim_fifo_interface__D12__Slow \
	Vcva5_sim_fifo_interface__D12__DepSet_hb6e6bddb__0__Slow \
	Vcva5_sim_fifo_interface__D11__Slow \
	Vcva5_sim_fifo_interface__D11__DepSet_h28ba2c26__0__Slow \
	Vcva5_sim_fifo_interface__D57__Slow \
	Vcva5_sim_fifo_interface__D57__DepSet_hcff52eae__0__Slow \
	Vcva5_sim_fifo_interface__D30__Slow \
	Vcva5_sim_fifo_interface__D30__DepSet_h7924335e__0__Slow \
	Vcva5_sim_fifo_interface__D1__Slow \
	Vcva5_sim_fifo_interface__D1__DepSet_h98487290__0__Slow \
	Vcva5_sim___024unit__Slow \
	Vcva5_sim___024unit__DepSet_h422d8ec9__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vcva5_sim__Dpi \
	Vcva5_sim__Trace__0 \
	Vcva5_sim__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vcva5_sim__Syms \
	Vcva5_sim__Trace__0__Slow \
	Vcva5_sim__Trace__1__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-

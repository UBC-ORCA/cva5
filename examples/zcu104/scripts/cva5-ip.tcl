
# Set the reference directory for source file relative paths (by default the value is script directory path)
set origin_dir [file dirname [info script]]

# Set the project name
set _xil_proj_name_ "cva5_wrapper"

set sources_dir $origin_dir/../../../

# Create project
create_project ${_xil_proj_name_} $origin_dir/${_xil_proj_name_} -part xczu7ev-ffvc1156-2-e

# Set the directory path for the new project
set proj_dir [get_property directory [current_project]]


# Set project properties
set obj [current_project]
set_property -name "board_part" -value "xilinx.com:zcu104:part0:1.1" -objects $obj
set_property -name "simulator_language" -value "Mixed" -objects $obj
set_property -name "target_language" -value "Verilog" -objects $obj

# Create 'sources_1' fileset (if not found)
if {[string equal [get_filesets -quiet sources_1] ""]} {
  create_fileset -srcset sources_1
}

#import sources needed for blackbox packaging
import_files -norecurse $sources_dir/l2_arbiter/l2_external_interfaces.sv
import_files -norecurse $sources_dir/local_memory/local_memory_interface.sv
import_files -norecurse $sources_dir/cx/cxu_types.sv
import_files -norecurse $sources_dir/cx/cxu_interface.sv
import_files -norecurse $sources_dir/core/external_interfaces.sv
import_files -norecurse $sources_dir/core/cva5_config.sv
import_files -norecurse $sources_dir/core/riscv_types.sv
import_files -norecurse $sources_dir/core/cva5_types.sv
import_files -norecurse $sources_dir/core/csr_types.sv
import_files -norecurse $sources_dir/l2_arbiter/l2_config_and_types.sv
import_files -norecurse $sources_dir/examples/zcu104/nexys_wrapper.sv

# Set IP repository paths
set obj [get_filesets sources_1]
set_property "ip_repo_paths" "[file normalize "$origin_dir/${_xil_proj_name_}"]" $obj

# Rebuild user ip_repo's index before adding any source files
update_ip_catalog -rebuild

# Set 'sources_1' fileset properties
set obj [get_filesets sources_1]
set_property -name "top" -value "nexys_wrapper" -objects $obj
set_property -name "top_auto_set" -value "0" -objects $obj
set_property -name "top_file" -value " ${sources_dir}/examples/zcu104/nexys_wrapper.sv" -objects $obj


############## Initial IP Packaging 
ipx::package_project -import_files -force -root_dir $proj_dir
update_compile_order -fileset sources_1
ipx::create_xgui_files [ipx::current_core]
ipx::update_checksums [ipx::current_core]
ipx::save_core [ipx::current_core]

# To set the axi interface as aximm and port map all the signals over #

##### Naming
set_property name CVA5 [ipx::current_core]
set_property display_name CVA5_ZCU104 [ipx::current_core]
set_property description CVA5_ZCU104 [ipx::current_core]
set_property vendor {} [ipx::current_core]
set_property vendor user [ipx::current_core]

##### Re-Adding of project files
set_property  ip_repo_paths  $sources_dir/${_xil_proj_name_} [current_project]
current_project $_xil_proj_name_
update_ip_catalog
import_files -force -fileset [get_filesets sources_1] $sources_dir/examples/zcu104/l1_to_axi.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/cva5_config.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/riscv_types.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/csr_types.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/cva5_types.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/l2_arbiter/l2_config_and_types.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/l2_arbiter/l2_interfaces.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/l2_arbiter/l2_external_interfaces.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/local_memory/local_memory_interface.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/local_memory/local_mem.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/cx/cxu_types.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/cx/cxu_interface.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/internal_interfaces.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/external_interfaces.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/lutrams/lutram_1w_1r.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/lutrams/lutram_1w_mr.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/set_clr_reg_with_rst.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/one_hot_occupancy.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/binary_occupancy.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/one_hot_to_integer.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/cycler.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/lfsr.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/cva5_fifo.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/shift_counter.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/priority_encoder.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/toggle_memory.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/toggle_memory_set.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/intel/intel_byte_enable_ram.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/xilinx/xilinx_byte_enable_ram.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/byte_en_BRAM.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/csr_unit.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/gc_unit.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/branch_comparator.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/branch_unit.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/barrel_shifter.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/alu_unit.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/local_mem_sub_unit.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/axi_master.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/avalon_master.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/wishbone_master.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/tag_bank.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/dcache_tag_banks.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/amo_alu.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/dcache.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/addr_hash.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/store_queue.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/load_store_queue.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/load_store_unit.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/icache_tag_banks.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/icache.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/clz.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/div_core.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/div_unit.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/tlb_lut_ram.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/mmu.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/mul_unit.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/ras.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/branch_predictor_ram.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/branch_predictor.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/fetch.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/illegal_instruction_checker.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/decode_and_issue.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/register_free_list.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/renamer.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/register_bank.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/register_file.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/writeback.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/l2_arbiter/l2_fifo.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/l2_arbiter/l2_reservation_logic.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/l2_arbiter/l2_round_robin.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/l2_arbiter/l2_arbiter.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/axi_to_arb.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/instruction_metadata_and_id_management.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/l1_arbiter.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/cva5.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/examples/zcu104/l1_to_axi.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/examples/zcu104/nexys_wrapper.sv

############## Re-packaging of core
ipx::merge_project_changes files [ipx::current_core]
set_property core_revision 1 [ipx::current_core]
ipx::create_xgui_files [ipx::current_core]
ipx::update_checksums [ipx::current_core]
ipx::save_core [ipx::current_core]
current_project ${_xil_proj_name_} 
set_property "ip_repo_paths" "[file normalize "$origin_dir/${_xil_proj_name_} "]" $obj
update_ip_catalog -rebuild


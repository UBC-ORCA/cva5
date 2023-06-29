# Set the reference directory for source file relative paths (by default the value is script directory path)
set origin_dir [file dirname [info script]]

# Set the project name
set _xil_proj_name_ "vfu_wrapper"

set sources_dir $origin_dir/../../../

# Create project
create_project ${_xil_proj_name_} $origin_dir/${_xil_proj_name_} -part xc7a100tcsg324-1

# Set the directory path for the new project
set proj_dir [get_property directory [current_project]]


# Set project properties
set obj [current_project]
set_property -name "board_part" -value "digilentinc.com:nexys-a7-100t:part0:1.2" -objects $obj
set_property -name "simulator_language" -value "Mixed" -objects $obj
set_property -name "target_language" -value "Verilog" -objects $obj

# Create 'sources_1' fileset (if not found)
if {[string equal [get_filesets -quiet sources_1] ""]} {
  create_fileset -srcset sources_1
}

#import sources needed for blackbox packaging
import_files -norecurse $sources_dir/core/cva5_config.sv
import_files -norecurse $sources_dir/core/riscv_types.sv
import_files -norecurse $sources_dir/core/csr_types.sv
import_files -norecurse $sources_dir/core/cva5_types.sv
import_files -norecurse $sources_dir/l2_arbiter/l2_config_and_types.sv
import_files -norecurse $sources_dir/cfu/cfu_types.sv
import_files -norecurse $sources_dir/cfu/cfu_interface.sv
import_files -norecurse $sources_dir/core/external_interfaces.sv
import_files -norecurse $sources_dir/examples/nexys/vfu_wrapper.sv

# Set IP repository paths
set obj [get_filesets sources_1]
set_property "ip_repo_paths" "[file normalize "$origin_dir/${_xil_proj_name_}"]" $obj

# Rebuild user ip_repo's index before adding any source files
update_ip_catalog -rebuild

# Set 'sources_1' fileset properties
set obj [get_filesets sources_1]
set_property -name "top" -value "vfu_wrapper" -objects $obj
set_property -name "top_auto_set" -value "0" -objects $obj
set_property -name "top_file" -value " ${sources_dir}/examples/nexys/vfu_wrapper.sv" -objects $obj


############## Initial IP Packaging 
ipx::package_project -import_files -force -root_dir $proj_dir
update_compile_order -fileset sources_1
ipx::create_xgui_files [ipx::current_core]
ipx::update_checksums [ipx::current_core]
ipx::save_core [ipx::current_core]

# To set the axi interface as aximm and port map all the signals over #

##### Naming
set_property name VFU [ipx::current_core]
set_property display_name VFU_NEXYS7 [ipx::current_core]
set_property description VFU_NEXYS7 [ipx::current_core]
set_property vendor {} [ipx::current_core]
set_property vendor user [ipx::current_core]

##### Re-Adding of project files
set_property  ip_repo_paths  $sources_dir/${_xil_proj_name_} [current_project]
current_project $_xil_proj_name_
update_ip_catalog

import_files -force -fileset [get_filesets sources_1] $sources_dir/core/cva5_config.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/riscv_types.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/csr_types.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/cva5_types.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/l2_arbiter/l2_config_and_types.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/cfu/cfu_types.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/internal_interfaces.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/external_interfaces.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/cfu/cfu_interface.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/lfsr.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/lutrams/lutram_1w_1r.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/core/cva5_fifo.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/avg_unit.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/fxp_round.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/mult32.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/operand_selector.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/vAdd_mask.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/vAdd_min_max.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/vAdd_unit_block.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/vAndOrXor.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/vFirst_bit.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/vID.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/vMask_ext.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/vMerge.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/vMinMaxSelector.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/vMul.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/vNarrow.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/vRedAndOrXor_unit_block.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/vRedSum_Min_Max_unit_block.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/vReduction.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/vSlide.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/vWiden.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vALU/vALU.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/addr_gen_unit.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/cfg_unit.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/insn_decoder.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/vec_regfile.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/rvv-lite/src/rvv_proc_main.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/cfu/vfu.sv
import_files -force -fileset [get_filesets sources_1] $sources_dir/examples/nexys/vfu_wrapper.sv

############## Re-packaging of core
ipx::merge_project_changes files [ipx::current_core]
set_property core_revision 1 [ipx::current_core]
ipx::create_xgui_files [ipx::current_core]
ipx::update_checksums [ipx::current_core]
ipx::save_core [ipx::current_core]
current_project ${_xil_proj_name_} 
set_property "ip_repo_paths" "[file normalize "$origin_dir/${_xil_proj_name_} "]" $obj
update_ip_catalog -rebuild


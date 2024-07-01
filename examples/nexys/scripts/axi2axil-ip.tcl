# Set the reference directory for source file relative paths (by default the value is script directory path)
set origin_dir [file dirname [info script]]

# Set the project name
set _xil_proj_name_ "axi2axil_wrapper"

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
import_files -norecurse $sources_dir/examples/nexys/axi2axil_wrapper.sv

# Set IP repository paths
set obj [get_filesets sources_1]
set_property "ip_repo_paths" "[file normalize "$origin_dir/${_xil_proj_name_}"]" $obj

# Rebuild user ip_repo's index before adding any source files
update_ip_catalog -rebuild

# Set 'sources_1' fileset properties
set obj [get_filesets sources_1]
set_property -name "top" -value "axi2axil_wrapper" -objects $obj
set_property -name "top_auto_set" -value "0" -objects $obj
set_property -name "top_file" -value " ${sources_dir}/examples/nexys/axi2axil_wrapper.sv" -objects $obj


############## Initial IP Packaging 
ipx::package_project -import_files -force -root_dir $proj_dir
update_compile_order -fileset sources_1
ipx::create_xgui_files [ipx::current_core]
ipx::update_checksums [ipx::current_core]
ipx::save_core [ipx::current_core]

# To set the axi interface as aximm and port map all the signals over #

##### Naming
set_property name AXI2AXIL [ipx::current_core]
set_property display_name AXI2AXIL_NEXYS7 [ipx::current_core]
set_property description AXI2AXIL_NEXYS7 [ipx::current_core]
set_property vendor {} [ipx::current_core]
set_property vendor user [ipx::current_core]

##### Re-Adding of project files
set_property  ip_repo_paths  $sources_dir/${_xil_proj_name_} [current_project]
current_project $_xil_proj_name_
update_ip_catalog

import_files -force -fileset [get_filesets sources_1] $sources_dir/verilog-axi/rtl/axi_axil_adapter_rd.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/verilog-axi/rtl/axi_axil_adapter_wr.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/verilog-axi/rtl/axi_axil_adapter.v
import_files -force -fileset [get_filesets sources_1] $sources_dir/examples/nexys/axi2axil_wrapper.sv

############## Re-packaging of core
ipx::merge_project_changes files [ipx::current_core]
set_property core_revision 1 [ipx::current_core]
ipx::create_xgui_files [ipx::current_core]
ipx::update_checksums [ipx::current_core]
ipx::save_core [ipx::current_core]
current_project ${_xil_proj_name_} 
set_property "ip_repo_paths" "[file normalize "$origin_dir/${_xil_proj_name_} "]" $obj
update_ip_catalog -rebuild


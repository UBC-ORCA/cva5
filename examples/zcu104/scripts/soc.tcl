
################################################################
# This is a generated script based on design: soc
#
# Though there are limitations about the generated script,
# the main purpose of this utility is to make learning
# IP Integrator Tcl commands easier.
################################################################

namespace eval _tcl {
proc get_script_folder {} {
   set script_path [file normalize [info script]]
   set script_folder [file dirname $script_path]
   return $script_folder
}
}
variable script_folder
set script_folder [_tcl::get_script_folder]

################################################################
# START
################################################################

# To test this script, run the following commands from Vivado Tcl console:
# source soc.tcl

# If there is no project opened, this script will create a
# project, but make sure you do not have an existing project
# <./myproj/project_1.xpr> in the current working folder.

set _xil_proj_name_ "soc"

create_project ${_xil_proj_name_} $script_folder/${_xil_proj_name_} -part xczu7ev-ffvc1156-2-e
set_property BOARD_PART xilinx.com:zcu104:part0:1.1 [current_project]

add_files -fileset constrs_1 -norecurse $script_folder/manual_pin_assignments.xdc

set_property ip_repo_paths [list $script_folder/cva5_wrapper $script_folder/vxu_wrapper] [current_project]
update_ip_catalog

# CHANGE DESIGN NAME HERE
variable design_name
set design_name soc

# If you do not already have an existing IP Integrator design open,
# you can create a design using the following command:
#    create_bd_design $design_name

# Creating design if needed
set errMsg ""
set nRet 0

set cur_design [current_bd_design -quiet]
set list_cells [get_bd_cells -quiet]

if { ${design_name} eq "" } {
   # USE CASES:
   #    1) Design_name not set

   set errMsg "Please set the variable <design_name> to a non-empty value."
   set nRet 1

} elseif { ${cur_design} ne "" && ${list_cells} eq "" } {
   # USE CASES:
   #    2): Current design opened AND is empty AND names same.
   #    3): Current design opened AND is empty AND names diff; design_name NOT in project.
   #    4): Current design opened AND is empty AND names diff; design_name exists in project.

   if { $cur_design ne $design_name } {
      common::send_gid_msg -ssname BD::TCL -id 2001 -severity "INFO" "Changing value of <design_name> from <$design_name> to <$cur_design> since current design is empty."
      set design_name [get_property NAME $cur_design]
   }
   common::send_gid_msg -ssname BD::TCL -id 2002 -severity "INFO" "Constructing design in IPI design <$cur_design>..."

} elseif { ${cur_design} ne "" && $list_cells ne "" && $cur_design eq $design_name } {
   # USE CASES:
   #    5) Current design opened AND has components AND same names.

   set errMsg "Design <$design_name> already exists in your project, please set the variable <design_name> to another value."
   set nRet 1
} elseif { [get_files -quiet ${design_name}.bd] ne "" } {
   # USE CASES: 
   #    6) Current opened design, has components, but diff names, design_name exists in project.
   #    7) No opened design, design_name exists in project.

   set errMsg "Design <$design_name> already exists in your project, please set the variable <design_name> to another value."
   set nRet 2

} else {
   # USE CASES:
   #    8) No opened design, design_name not in project.
   #    9) Current opened design, has components, but diff names, design_name not in project.

   common::send_gid_msg -ssname BD::TCL -id 2003 -severity "INFO" "Currently there is no design <$design_name> in project, so creating one..."

   create_bd_design $design_name

   common::send_gid_msg -ssname BD::TCL -id 2004 -severity "INFO" "Making design <$design_name> as current_bd_design."
   current_bd_design $design_name

}

common::send_gid_msg -ssname BD::TCL -id 2005 -severity "INFO" "Currently the variable <design_name> is equal to \"$design_name\"."

if { $nRet != 0 } {
   catch {common::send_gid_msg -ssname BD::TCL -id 2006 -severity "ERROR" $errMsg}
   return $nRet
}

set bCheckIPsPassed 1
##################################################################
# CHECK IPs
##################################################################
set bCheckIPs 1
if { $bCheckIPs == 1 } {
   set list_check_ips "\ 
user:user:CVA5:1.0\
xilinx.com:ip:axi_gpio:2.0\
xilinx.com:ip:axi_uart16550:2.0\
xilinx.com:ip:mdm:3.2\
xilinx.com:ip:ddr4:2.2\
xilinx.com:ip:proc_sys_reset:5.0\
xilinx.com:ip:xlslice:1.0\
user:user:VXU:1.0\
"

   set list_ips_missing ""
   common::send_gid_msg -ssname BD::TCL -id 2011 -severity "INFO" "Checking if the following IPs exist in the project's IP catalog: $list_check_ips ."

   foreach ip_vlnv $list_check_ips {
      set ip_obj [get_ipdefs -all $ip_vlnv]
      if { $ip_obj eq "" } {
         lappend list_ips_missing $ip_vlnv
      }
   }

   if { $list_ips_missing ne "" } {
      catch {common::send_gid_msg -ssname BD::TCL -id 2012 -severity "ERROR" "The following IPs are not found in the IP Catalog:\n  $list_ips_missing\n\nResolution: Please add the repository containing the IP(s) to the project." }
      set bCheckIPsPassed 0
   }

}

if { $bCheckIPsPassed != 1 } {
  common::send_gid_msg -ssname BD::TCL -id 2023 -severity "WARNING" "Will not continue with creation of design due to the error(s) above."
  return 3
}

##################################################################
# DESIGN PROCs
##################################################################



# Procedure to create entire design; Provide argument to make
# procedure reusable. If parentCell is "", will use root.
proc create_root_design { parentCell } {

  variable script_folder
  variable design_name

  if { $parentCell eq "" } {
     set parentCell [get_bd_cells /]
  }

  # Get object for parentCell
  set parentObj [get_bd_cells $parentCell]
  if { $parentObj == "" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2090 -severity "ERROR" "Unable to find parent cell <$parentCell>!"}
     return
  }

  # Make sure parentObj is hier blk
  set parentType [get_property TYPE $parentObj]
  if { $parentType ne "hier" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2091 -severity "ERROR" "Parent <$parentObj> has TYPE = <$parentType>. Expected to be <hier>."}
     return
  }

  # Save current instance; Restore later
  set oldCurInst [current_bd_instance .]

  # Set parent object as current
  current_bd_instance $parentObj


  # Create interface ports
  set dip_switch_4bits [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:gpio_rtl:1.0 dip_switch_4bits ]

  set led_4bits [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:gpio_rtl:1.0 led_4bits ]

  set uart2_pl [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:uart_rtl:1.0 uart2_pl ]

  set diff_clk [ create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:diff_clock_rtl:1.0 diff_clk ]
  set_property -dict [ list \
   CONFIG.FREQ_HZ {300000000} \
   ] $diff_clk

  set ddr4_sdram [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:ddr4_rtl:1.0 ddr4_sdram ]


  # Create ports
  set reset [ create_bd_port -dir I -type rst reset ]
  set_property -dict [ list \
   CONFIG.POLARITY {ACTIVE_HIGH} \
 ] $reset

  # Create instance: CVA5_0, and set properties
  set CVA5_0 [ create_bd_cell -type ip -vlnv user:user:CVA5:1.0 CVA5_0 ]

  # Create instance: axi_gpio_0, and set properties
  set axi_gpio_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_gpio:2.0 axi_gpio_0 ]
  set_property -dict [list \
    CONFIG.C_DOUT_DEFAULT_2 {0x00000001} \
    CONFIG.GPIO2_BOARD_INTERFACE {led_4bits} \
    CONFIG.GPIO_BOARD_INTERFACE {dip_switch_4bits} \
    CONFIG.USE_BOARD_FLOW {true} \
  ] $axi_gpio_0


  # Create instance: axi_interconnect_0, and set properties
  set axi_interconnect_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect:2.1 axi_interconnect_0 ]
  set_property -dict [list \
    CONFIG.NUM_MI {3} \
    CONFIG.NUM_SI {3} \
    CONFIG.S00_HAS_DATA_FIFO {2} \
    CONFIG.S01_HAS_DATA_FIFO {2} \
    CONFIG.S02_HAS_DATA_FIFO {2} \
    CONFIG.STRATEGY {2} \
  ] $axi_interconnect_0


  # Create instance: axi_uart16550_0, and set properties
  set axi_uart16550_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_uart16550:2.0 axi_uart16550_0 ]
  set_property -dict [list \
    CONFIG.UART_BOARD_INTERFACE {uart2_pl} \
    CONFIG.USE_BOARD_FLOW {true} \
  ] $axi_uart16550_0


  # Create instance: mdm_1, and set properties
  set mdm_1 [ create_bd_cell -type ip -vlnv xilinx.com:ip:mdm:3.2 mdm_1 ]
  set_property -dict [list \
    CONFIG.C_ADDR_SIZE {32} \
    CONFIG.C_DBG_MEM_ACCESS {1} \
    CONFIG.C_MB_DBG_PORTS {0} \
    CONFIG.C_M_AXI_ADDR_WIDTH {32} \
  ] $mdm_1


  # Create instance: ddr4_0, and set properties
  set ddr4_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:ddr4:2.2 ddr4_0 ]
  set_property -dict [list \
    CONFIG.ADDN_UI_CLKOUT1_FREQ_HZ {100} \
    CONFIG.ADDN_UI_CLKOUT2_FREQ_HZ {None} \
    CONFIG.C0.DDR4_AxiArbitrationScheme {ROUND_ROBIN} \
    CONFIG.C0.DDR4_AxiIDWidth {15} \
    CONFIG.C0.DDR4_InputClockPeriod {3333} \
    CONFIG.C0.DDR4_MemoryType {SODIMMs} \
    CONFIG.C0.DDR4_TimePeriod {1250} \
    CONFIG.C0_CLOCK_BOARD_INTERFACE {Custom} \
    CONFIG.C0_DDR4_BOARD_INTERFACE {Custom} \
    CONFIG.Debug_Signal {Disable} \
    CONFIG.RESET_BOARD_INTERFACE {Custom} \
    CONFIG.System_Clock {Differential} \
  ] $ddr4_0


  # Create instance: proc_sys_reset_0, and set properties
  set proc_sys_reset_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:proc_sys_reset:5.0 proc_sys_reset_0 ]

  # Create instance: xlslice_0, and set properties
  set xlslice_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:xlslice:1.0 xlslice_0 ]
  set_property CONFIG.DIN_WIDTH {4} $xlslice_0


  # Create instance: VXU_0, and set properties
  set VXU_0 [ create_bd_cell -type ip -vlnv user:user:VXU:1.0 VXU_0 ]

  # Create interface connections
  connect_bd_intf_net -intf_net CVA5_0_m_axi [get_bd_intf_pins CVA5_0/m_axi] [get_bd_intf_pins axi_interconnect_0/S00_AXI]
  connect_bd_intf_net -intf_net VXU_0_m_axi [get_bd_intf_pins VXU_0/m_axi] [get_bd_intf_pins axi_interconnect_0/S02_AXI]
  connect_bd_intf_net -intf_net axi_gpio_0_GPIO [get_bd_intf_ports dip_switch_4bits] [get_bd_intf_pins axi_gpio_0/GPIO]
  connect_bd_intf_net -intf_net axi_gpio_0_GPIO2 [get_bd_intf_ports led_4bits] [get_bd_intf_pins axi_gpio_0/GPIO2]
  connect_bd_intf_net -intf_net axi_interconnect_0_M00_AXI [get_bd_intf_pins axi_interconnect_0/M00_AXI] [get_bd_intf_pins ddr4_0/C0_DDR4_S_AXI]
  connect_bd_intf_net -intf_net axi_interconnect_0_M01_AXI [get_bd_intf_pins axi_interconnect_0/M01_AXI] [get_bd_intf_pins axi_uart16550_0/S_AXI]
  connect_bd_intf_net -intf_net axi_interconnect_0_M02_AXI [get_bd_intf_pins axi_interconnect_0/M02_AXI] [get_bd_intf_pins axi_gpio_0/S_AXI]
  connect_bd_intf_net -intf_net axi_uart16550_0_UART [get_bd_intf_ports uart2_pl] [get_bd_intf_pins axi_uart16550_0/UART]
  connect_bd_intf_net -intf_net ddr4_0_C0_DDR4 [get_bd_intf_ports ddr4_sdram] [get_bd_intf_pins ddr4_0/C0_DDR4]
  connect_bd_intf_net -intf_net diff_clk_1 [get_bd_intf_ports diff_clk] [get_bd_intf_pins ddr4_0/C0_SYS_CLK]
  connect_bd_intf_net -intf_net mdm_1_M_AXI [get_bd_intf_pins mdm_1/M_AXI] [get_bd_intf_pins axi_interconnect_0/S01_AXI]

  # Create port connections
  connect_bd_net -net CVA5_0_cxu_req_cxu [get_bd_pins CVA5_0/cxu_req_cxu] [get_bd_pins VXU_0/cxu_req_cxu]
  connect_bd_net -net CVA5_0_cxu_req_data0 [get_bd_pins CVA5_0/cxu_req_data0] [get_bd_pins VXU_0/cxu_req_data0]
  connect_bd_net -net CVA5_0_cxu_req_data1 [get_bd_pins CVA5_0/cxu_req_data1] [get_bd_pins VXU_0/cxu_req_data1]
  connect_bd_net -net CVA5_0_cxu_req_func [get_bd_pins CVA5_0/cxu_req_func] [get_bd_pins VXU_0/cxu_req_func]
  connect_bd_net -net CVA5_0_cxu_req_id [get_bd_pins CVA5_0/cxu_req_id] [get_bd_pins VXU_0/cxu_req_id]
  connect_bd_net -net CVA5_0_cxu_req_insn [get_bd_pins CVA5_0/cxu_req_insn] [get_bd_pins VXU_0/cxu_req_insn]
  connect_bd_net -net CVA5_0_cxu_req_state [get_bd_pins CVA5_0/cxu_req_state] [get_bd_pins VXU_0/cxu_req_state]
  connect_bd_net -net CVA5_0_cxu_req_valid [get_bd_pins CVA5_0/cxu_req_valid] [get_bd_pins VXU_0/cxu_req_valid]
  connect_bd_net -net CVA5_0_cxu_resp_ready [get_bd_pins CVA5_0/cxu_resp_ready] [get_bd_pins VXU_0/cxu_resp_ready]
  connect_bd_net -net CVA5_0_inv_ack [get_bd_pins CVA5_0/inv_ack] [get_bd_pins VXU_0/inv_ack]
  connect_bd_net -net VXU_0_cxu_req_ready [get_bd_pins VXU_0/cxu_req_ready] [get_bd_pins CVA5_0/cxu_req_ready]
  connect_bd_net -net VXU_0_cxu_resp_data [get_bd_pins VXU_0/cxu_resp_data] [get_bd_pins CVA5_0/cxu_resp_data]
  connect_bd_net -net VXU_0_cxu_resp_id [get_bd_pins VXU_0/cxu_resp_id] [get_bd_pins CVA5_0/cxu_resp_id]
  connect_bd_net -net VXU_0_cxu_resp_status [get_bd_pins VXU_0/cxu_resp_status] [get_bd_pins CVA5_0/cxu_resp_status]
  connect_bd_net -net VXU_0_cxu_resp_valid [get_bd_pins VXU_0/cxu_resp_valid] [get_bd_pins CVA5_0/cxu_resp_valid]
  connect_bd_net -net VXU_0_inv_addr [get_bd_pins VXU_0/inv_addr] [get_bd_pins CVA5_0/inv_addr]
  connect_bd_net -net VXU_0_inv_valid [get_bd_pins VXU_0/inv_valid] [get_bd_pins CVA5_0/inv_valid]
  connect_bd_net -net axi_gpio_0_gpio2_io_o [get_bd_pins axi_gpio_0/gpio2_io_o] [get_bd_pins xlslice_0/Din]
  connect_bd_net -net ddr4_0_c0_ddr4_ui_clk [get_bd_pins ddr4_0/c0_ddr4_ui_clk] [get_bd_pins axi_interconnect_0/ACLK] [get_bd_pins axi_interconnect_0/S00_ACLK] [get_bd_pins axi_interconnect_0/M00_ACLK] [get_bd_pins axi_interconnect_0/M01_ACLK] [get_bd_pins axi_interconnect_0/S01_ACLK] [get_bd_pins axi_interconnect_0/S02_ACLK] [get_bd_pins axi_interconnect_0/M02_ACLK] [get_bd_pins axi_uart16550_0/s_axi_aclk] [get_bd_pins CVA5_0/clk] [get_bd_pins axi_gpio_0/s_axi_aclk] [get_bd_pins mdm_1/M_AXI_ACLK] [get_bd_pins proc_sys_reset_0/slowest_sync_clk] [get_bd_pins VXU_0/clk]
  connect_bd_net -net ddr4_0_c0_ddr4_ui_clk_sync_rst [get_bd_pins ddr4_0/c0_ddr4_ui_clk_sync_rst] [get_bd_pins proc_sys_reset_0/ext_reset_in]
  connect_bd_net -net mdm_1_Debug_SYS_Rst [get_bd_pins mdm_1/Debug_SYS_Rst] [get_bd_pins proc_sys_reset_0/mb_debug_sys_rst]
  connect_bd_net -net proc_sys_reset_0_interconnect_aresetn [get_bd_pins proc_sys_reset_0/interconnect_aresetn] [get_bd_pins axi_interconnect_0/ARESETN]
  connect_bd_net -net proc_sys_reset_0_peripheral_aresetn [get_bd_pins proc_sys_reset_0/peripheral_aresetn] [get_bd_pins axi_interconnect_0/S00_ARESETN] [get_bd_pins axi_interconnect_0/M00_ARESETN] [get_bd_pins axi_interconnect_0/M01_ARESETN] [get_bd_pins axi_interconnect_0/S01_ARESETN] [get_bd_pins axi_interconnect_0/S02_ARESETN] [get_bd_pins axi_interconnect_0/M02_ARESETN] [get_bd_pins mdm_1/M_AXI_ARESETN] [get_bd_pins ddr4_0/c0_ddr4_aresetn] [get_bd_pins axi_uart16550_0/s_axi_aresetn] [get_bd_pins axi_gpio_0/s_axi_aresetn]
  connect_bd_net -net reset_1 [get_bd_ports reset] [get_bd_pins ddr4_0/sys_rst]
  connect_bd_net -net xlslice_0_Dout [get_bd_pins xlslice_0/Dout] [get_bd_pins CVA5_0/rst] [get_bd_pins VXU_0/rst]

  # Create address segments
  assign_bd_address -offset 0x88100000 -range 0x00010000 -target_address_space [get_bd_addr_spaces CVA5_0/m_axi] [get_bd_addr_segs axi_gpio_0/S_AXI/Reg] -force
  assign_bd_address -offset 0x88000000 -range 0x00010000 -target_address_space [get_bd_addr_spaces CVA5_0/m_axi] [get_bd_addr_segs axi_uart16550_0/S_AXI/Reg] -force
  assign_bd_address -offset 0x80000000 -range 0x08000000 -target_address_space [get_bd_addr_spaces CVA5_0/m_axi] [get_bd_addr_segs ddr4_0/C0_DDR4_MEMORY_MAP/C0_DDR4_ADDRESS_BLOCK] -force
  assign_bd_address -offset 0x88100000 -range 0x00010000 -target_address_space [get_bd_addr_spaces mdm_1/Data] [get_bd_addr_segs axi_gpio_0/S_AXI/Reg] -force
  assign_bd_address -offset 0x88000000 -range 0x00010000 -target_address_space [get_bd_addr_spaces mdm_1/Data] [get_bd_addr_segs axi_uart16550_0/S_AXI/Reg] -force
  assign_bd_address -offset 0x80000000 -range 0x08000000 -target_address_space [get_bd_addr_spaces mdm_1/Data] [get_bd_addr_segs ddr4_0/C0_DDR4_MEMORY_MAP/C0_DDR4_ADDRESS_BLOCK] -force
  assign_bd_address -offset 0x88100000 -range 0x00010000 -target_address_space [get_bd_addr_spaces VXU_0/m_axi] [get_bd_addr_segs axi_gpio_0/S_AXI/Reg] -force
  assign_bd_address -offset 0x88000000 -range 0x00010000 -target_address_space [get_bd_addr_spaces VXU_0/m_axi] [get_bd_addr_segs axi_uart16550_0/S_AXI/Reg] -force
  assign_bd_address -offset 0x80000000 -range 0x08000000 -target_address_space [get_bd_addr_spaces VXU_0/m_axi] [get_bd_addr_segs ddr4_0/C0_DDR4_MEMORY_MAP/C0_DDR4_ADDRESS_BLOCK] -force


  # Restore current instance
  current_bd_instance $oldCurInst

  validate_bd_design
  save_bd_design
}
# End of create_root_design()


##################################################################
# MAIN FLOW
##################################################################

create_root_design ""

make_wrapper -files [get_files $script_folder/${_xil_proj_name_}/${_xil_proj_name_}.srcs/sources_1/bd/soc/soc.bd] -top
add_files -norecurse $script_folder/${_xil_proj_name_}/${_xil_proj_name_}.gen/sources_1/bd/soc/hdl/soc_wrapper.v
update_compile_order -fileset sources_1

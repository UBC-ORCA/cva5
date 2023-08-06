/*
 * Copyright © 2017 Eric Matthews,  Lesley Shannon
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Initial code developed under the supervision of Dr. Lesley Shannon,
 * Reconfigurable Computing Lab, Simon Fraser University.
 *
 * Author(s):
 *             Eric Matthews <ematthew@sfu.ca>
 */

module cva5_sim 

    import cva5_config::*;
    import l2_config_and_types::*;
    import riscv_types::*;
    import cva5_types::*;
    import cfu_types::*;

    # (
        parameter MEMORY_FILE = "/home/brumaire/RISCV/cva5pr/embench/build/bin/crc32.hw_init"
    )
    (
        input logic clk,
        input logic rst,

        //DDR AXI
        output logic [31:0]ddr_axi_araddr,
        output logic [1:0]ddr_axi_arburst,
        output logic [3:0]ddr_axi_arcache,
        output logic [6:0]ddr_axi_arid,
        output logic [7:0]ddr_axi_arlen,
        output logic [0:0]ddr_axi_arlock,
        output logic [2:0]ddr_axi_arprot,
        output logic [3:0]ddr_axi_arqos,
        input logic ddr_axi_arready,
        output logic [3:0]ddr_axi_arregion,
        output logic [2:0]ddr_axi_arsize,
        output logic ddr_axi_arvalid,
        output logic [31:0]ddr_axi_awaddr,
        output logic [1:0]ddr_axi_awburst,
        output logic [3:0]ddr_axi_awcache,
        output logic [6:0]ddr_axi_awid,
        output logic [7:0]ddr_axi_awlen,
        output logic [0:0]ddr_axi_awlock,
        output logic [2:0]ddr_axi_awprot,
        output logic [3:0]ddr_axi_awqos,
        input logic ddr_axi_awready,
        output logic [3:0]ddr_axi_awregion,
        output logic [2:0]ddr_axi_awsize,
        output logic ddr_axi_awvalid,
        input logic [6:0]ddr_axi_bid,
        input logic [1:0]ddr_axi_bresp,
        input logic ddr_axi_bvalid,
        output logic ddr_axi_bready,
        input logic [31:0]ddr_axi_rdata,
        input logic [6:0]ddr_axi_rid,
        input logic ddr_axi_rlast,
        output logic ddr_axi_rready,
        input logic [1:0]ddr_axi_rresp,
        input logic ddr_axi_rvalid,
        output logic [31:0]ddr_axi_wdata,
        output logic ddr_axi_wlast,
        input logic ddr_axi_wready,
        output logic [3:0]ddr_axi_wstrb,
        output logic ddr_axi_wvalid,
        output logic [6:0]ddr_axi_wid,

        //Local Memory
        output logic [29:0] instruction_bram_addr,
        output logic instruction_bram_en,
        output logic [3:0] instruction_bram_be,
        output logic [31:0] instruction_bram_data_in,
        input logic [31:0] instruction_bram_data_out,

        output logic [29:0] data_bram_addr,
        output logic data_bram_en,
        output logic [3:0] data_bram_be,
        output logic [31:0] data_bram_data_in,
        input logic [31:0] data_bram_data_out,

        //Used by verilator
        output logic write_uart,
        output logic [7:0] uart_byte,

        //Trace Interface
        output integer NUM_RETIRE_PORTS,
        output logic [31:0] retire_ports_instruction [RETIRE_PORTS],
        output logic [31:0] retire_ports_pc [RETIRE_PORTS],
        output logic retire_ports_valid [RETIRE_PORTS],
        output logic store_queue_empty
    );

    localparam cpu_config_t NEXYS_CONFIG = '{
        //ISA options
        INCLUDE_M_MODE : 1,
        INCLUDE_S_MODE : 0,
        INCLUDE_U_MODE : 0,
        INCLUDE_MUL : 1,
        INCLUDE_DIV : 1,
        INCLUDE_IFENCE : 1,
        INCLUDE_CSRS : 1,
        INCLUDE_AMO : 0,
        //CSR constants
        CSRS : '{
            MACHINE_IMPLEMENTATION_ID : 0,
            CPU_ID : 0,
            RESET_VEC : 32'h80000000,
            RESET_MTVEC : 32'h80000000,
            NON_STANDARD_OPTIONS : '{
                COUNTER_W : 33,
                MCYCLE_WRITEABLE : 0,
                MINSTR_WRITEABLE : 0,
                MTVEC_WRITEABLE : 1,
                INCLUDE_MSCRATCH : 0,
                INCLUDE_MCAUSE : 1,
                INCLUDE_MTVAL : 1
            }
        },
        //Memory Options
        SQ_DEPTH : 4,
        INCLUDE_ICACHE : 1,
        ICACHE_ADDR : '{
            L : 32'h80000000, 
            H : 32'h87FFFFFF
        },
        ICACHE : '{
            LINES : 512,
            LINE_W : 4,
            WAYS : 2,
            USE_EXTERNAL_INVALIDATIONS : 0,
            USE_NON_CACHEABLE : 0,
            NON_CACHEABLE : '{
				L : 32'h88000000, 
				H : 32'h8FFFFFFF
            }
        },
        ITLB : '{
            WAYS : 2,
            DEPTH : 64
        },
        INCLUDE_DCACHE : 1,
        DCACHE_ADDR : '{
            L : 32'h80000000, 
            H : 32'h8FFFFFFF
        },
        DCACHE : '{
            LINES : 1024,
            LINE_W : 4,
            WAYS : 1,
            USE_EXTERNAL_INVALIDATIONS : 0,
            USE_NON_CACHEABLE : 1,
            NON_CACHEABLE : '{
				L : 32'h88000000, 
				H : 32'h8FFFFFFF
            }
        },
        DTLB : '{
            WAYS : 2,
            DEPTH : 64
        },
        INCLUDE_ILOCAL_MEM : 0,
        ILOCAL_MEM_ADDR : '{
            L : 32'h80000000, 
            H : 32'h8FFFFFFF
        },
        INCLUDE_DLOCAL_MEM : 0,
        DLOCAL_MEM_ADDR : '{
            L : 32'h80000000,
            H : 32'h8FFFFFFF
        },
        INCLUDE_IBUS : 0,
        IBUS_ADDR : '{
            L : 32'h00000000, 
            H : 32'hFFFFFFFF
        },
        INCLUDE_PERIPHERAL_BUS : 0,
        PERIPHERAL_BUS_ADDR : '{
            L : 32'h88000000,
            H : 32'h8FFFFFFF
        },
        PERIPHERAL_BUS_TYPE : AXI_BUS,
        //Branch Predictor Options
        INCLUDE_BRANCH_PREDICTOR : 1,
        BP : '{
            WAYS : 2,
            ENTRIES : 512,
            RAS_ENTRIES : 8
        },
        //Writeback Options
        NUM_WB_GROUPS : 2
    };

    parameter SCRATCH_MEM_KB = 128;
    parameter MEM_LINES = (SCRATCH_MEM_KB*1024)/4;
    parameter UART_ADDR = 32'h88001000;
    parameter UART_ADDR_LINE_STATUS = 32'h88001014;

    interrupt_t s_interrupt;
    interrupt_t m_interrupt;

    assign s_interrupt = '{default: 0};
    assign m_interrupt = '{default: 0};

    local_memory_interface instruction_bram();
    local_memory_interface data_bram();
    axi_interface m_axi ();
    avalon_interface m_avalon();
    wishbone_interface dwishbone();
    wishbone_interface iwishbone();

    //L2 and AXI
    axi_interface axi ();
    l2_requester_interface l2 ();

    // AXI64
    axi64_interface axi64 ();

    // CFU
    cfu_interface cfu ();

    // INVALIDATION
    /* 
    logic inv_ack;
    logic inv_valid;
    logic [32-1:0] inv_addr;
    */

    assign instruction_bram_addr = instruction_bram.addr;
    assign instruction_bram_en = instruction_bram.en;
    assign instruction_bram_be = instruction_bram.be;
    assign instruction_bram_data_in = instruction_bram.data_in;
    assign instruction_bram.data_out = instruction_bram_data_out;

    assign data_bram_addr = data_bram.addr;
    assign data_bram_en = data_bram.en;
    assign data_bram_be = data_bram.be;
    assign data_bram_data_in = data_bram.data_in;
    assign data_bram.data_out = data_bram_data_out;

    l1_to_axi  arb(.*, .cpu(l2), .axi(axi));
    cva5 #(.CONFIG(NEXYS_CONFIG)) cpu(.*);

    /*
    * CFU CRC
    crc crc_block(.*);
    */

    /* 
    * VFU
    */
    //vfu vfu_block(.*);

     /*cfu block*/
    cfu cfu_block(.*);


    ////////////////////////////////////////////////////
    //AXI adapter

    localparam ADDR_WIDTH_ADAPT = 32;
    localparam S_DATA_WIDTH_ADAPT = 64;
    localparam S_STRB_WIDTH_ADAPT = (S_DATA_WIDTH_ADAPT/8);
    localparam M_DATA_WIDTH_ADAPT = 32;
    localparam M_STRB_WIDTH_ADAPT = (M_DATA_WIDTH_ADAPT/8);
    localparam ID_WIDTH_ADAPT = 6;
    localparam AWUSER_ENABLE_ADAPT = 0;
    localparam AWUSER_WIDTH_ADAPT = 1;
    localparam WUSER_ENABLE_ADAPT = 0;
    localparam WUSER_WIDTH_ADAPT = 1;
    localparam BUSER_ENABLE_ADAPT = 0;
    localparam BUSER_WIDTH_ADAPT = 1;
    localparam ARUSER_ENABLE_ADAPT = 0;
    localparam ARUSER_WIDTH_ADAPT = 1;
    localparam RUSER_ENABLE_ADAPT = 0;
    localparam RUSER_WIDTH_ADAPT = 1;
    localparam CONVERT_BURST_ADAPT = 1;
    localparam CONVERT_NARROW_BURST_ADAPT = 0;
    localparam FORWARD_ID_ADAPT = 1;

    /*
     * AXI slave interface
     */
    wire [ID_WIDTH_ADAPT-1:0]      s_axi_awid_adapt;
    wire [ADDR_WIDTH_ADAPT-1:0]    s_axi_awaddr_adapt;
    wire [7:0]               s_axi_awlen_adapt;
    wire [2:0]               s_axi_awsize_adapt;
    wire [1:0]               s_axi_awburst_adapt;
    wire                     s_axi_awlock_adapt;
    wire [3:0]               s_axi_awcache_adapt;
    wire [2:0]               s_axi_awprot_adapt;
    wire [3:0]               s_axi_awqos_adapt;
    wire [3:0]               s_axi_awregion_adapt;
    wire [AWUSER_WIDTH_ADAPT-1:0]  s_axi_awuser_adapt;
    wire                     s_axi_awvalid_adapt;
    wire                     s_axi_awready_adapt;
    wire [S_DATA_WIDTH_ADAPT-1:0]  s_axi_wdata_adapt;
    wire [S_STRB_WIDTH_ADAPT-1:0]  s_axi_wstrb_adapt;
    wire                     s_axi_wlast_adapt;
    wire [WUSER_WIDTH_ADAPT-1:0]   s_axi_wuser_adapt;
    wire                     s_axi_wvalid_adapt;
    wire                     s_axi_wready_adapt;
    wire [ID_WIDTH_ADAPT-1:0]      s_axi_bid_adapt;
    wire [1:0]               s_axi_bresp_adapt;
    wire [BUSER_WIDTH_ADAPT-1:0]   s_axi_buser_adapt;
    wire                     s_axi_bvalid_adapt;
    wire                     s_axi_bready_adapt;
    wire [ID_WIDTH_ADAPT-1:0]      s_axi_arid_adapt;
    wire [ADDR_WIDTH_ADAPT-1:0]    s_axi_araddr_adapt;
    wire [7:0]               s_axi_arlen_adapt;
    wire [2:0]               s_axi_arsize_adapt;
    wire [1:0]               s_axi_arburst_adapt;
    wire                     s_axi_arlock_adapt;
    wire [3:0]               s_axi_arcache_adapt;
    wire [2:0]               s_axi_arprot_adapt;
    wire [3:0]               s_axi_arqos_adapt;
    wire [3:0]               s_axi_arregion_adapt;
    wire [ARUSER_WIDTH_ADAPT-1:0]  s_axi_aruser_adapt;
    wire                     s_axi_arvalid_adapt;
    wire                     s_axi_arready_adapt;
    wire [ID_WIDTH_ADAPT-1:0]      s_axi_rid_adapt;
    wire [S_DATA_WIDTH_ADAPT-1:0]  s_axi_rdata_adapt;
    wire [1:0]               s_axi_rresp_adapt;
    wire                     s_axi_rlast_adapt;
    wire [RUSER_WIDTH_ADAPT-1:0]   s_axi_ruser_adapt;
    wire                     s_axi_rvalid_adapt;
    wire                     s_axi_rready_adapt;

    /*
     * AXI master interface
     */
    wire [ID_WIDTH_ADAPT-1:0]      m_axi_awid_adapt;
    wire [ADDR_WIDTH_ADAPT-1:0]    m_axi_awaddr_adapt;
    wire [7:0]               m_axi_awlen_adapt;
    wire [2:0]               m_axi_awsize_adapt;
    wire [1:0]               m_axi_awburst_adapt;
    wire                     m_axi_awlock_adapt;
    wire [3:0]               m_axi_awcache_adapt;
    wire [2:0]               m_axi_awprot_adapt;
    wire [3:0]               m_axi_awqos_adapt;
    wire [3:0]               m_axi_awregion_adapt;
    wire [AWUSER_WIDTH_ADAPT-1:0]  m_axi_awuser_adapt;
    wire                     m_axi_awvalid_adapt;
    wire                     m_axi_awready_adapt;
    wire [M_DATA_WIDTH_ADAPT-1:0]  m_axi_wdata_adapt;
    wire [M_STRB_WIDTH_ADAPT-1:0]  m_axi_wstrb_adapt;
    wire                     m_axi_wlast_adapt;
    wire [WUSER_WIDTH_ADAPT-1:0]   m_axi_wuser_adapt;
    wire                     m_axi_wvalid_adapt;
    wire                     m_axi_wready_adapt;
    wire [ID_WIDTH_ADAPT-1:0]      m_axi_bid_adapt;
    wire [1:0]               m_axi_bresp_adapt;
    wire [BUSER_WIDTH_ADAPT-1:0]   m_axi_buser_adapt;
    wire                     m_axi_bvalid_adapt;
    wire                     m_axi_bready_adapt;
    wire [ID_WIDTH_ADAPT-1:0]      m_axi_arid_adapt;
    wire [ADDR_WIDTH_ADAPT-1:0]    m_axi_araddr_adapt;
    wire [7:0]               m_axi_arlen_adapt;
    wire [2:0]               m_axi_arsize_adapt;
    wire [1:0]               m_axi_arburst_adapt;
    wire                     m_axi_arlock_adapt;
    wire [3:0]               m_axi_arcache_adapt;
    wire [2:0]               m_axi_arprot_adapt;
    wire [3:0]               m_axi_arqos_adapt;
    wire [3:0]               m_axi_arregion_adapt;
    wire [ARUSER_WIDTH_ADAPT-1:0]  m_axi_aruser_adapt;
    wire                     m_axi_arvalid_adapt;
    wire                     m_axi_arready_adapt;
    wire [ID_WIDTH_ADAPT-1:0]      m_axi_rid_adapt;
    wire [M_DATA_WIDTH_ADAPT-1:0]  m_axi_rdata_adapt;
    wire [1:0]               m_axi_rresp_adapt;
    wire                     m_axi_rlast_adapt;
    wire [RUSER_WIDTH_ADAPT-1:0]   m_axi_ruser_adapt;
    wire                     m_axi_rvalid_adapt;
    wire                     m_axi_rready_adapt;


    axi_adapter #(
      .ADDR_WIDTH(ADDR_WIDTH_ADAPT),
      .S_DATA_WIDTH(S_DATA_WIDTH_ADAPT),
      .S_STRB_WIDTH(S_STRB_WIDTH_ADAPT),
      .M_DATA_WIDTH(M_DATA_WIDTH_ADAPT),
      .M_STRB_WIDTH(M_STRB_WIDTH_ADAPT),
      .ID_WIDTH(ID_WIDTH_ADAPT),
      .AWUSER_ENABLE(AWUSER_ENABLE_ADAPT),
      .AWUSER_WIDTH(AWUSER_WIDTH_ADAPT),
      .WUSER_ENABLE(WUSER_ENABLE_ADAPT),
      .WUSER_WIDTH(WUSER_WIDTH_ADAPT),
      .BUSER_ENABLE(BUSER_ENABLE_ADAPT),
      .BUSER_WIDTH(BUSER_WIDTH_ADAPT),
      .ARUSER_ENABLE(ARUSER_ENABLE_ADAPT),
      .ARUSER_WIDTH(ARUSER_WIDTH_ADAPT),
      .RUSER_ENABLE(RUSER_ENABLE_ADAPT),
      .RUSER_WIDTH(RUSER_WIDTH_ADAPT),
      .CONVERT_BURST(CONVERT_BURST_ADAPT),
      .CONVERT_NARROW_BURST(CONVERT_NARROW_BURST_ADAPT),
      .FORWARD_ID(FORWARD_ID_ADAPT)
      ) 
      x_axi_adapter (
        .s_axi_awid(s_axi_awid_adapt),
        .s_axi_awaddr(s_axi_awaddr_adapt),
        .s_axi_awlen(s_axi_awlen_adapt),
        .s_axi_awsize(s_axi_awsize_adapt),
        .s_axi_awburst(s_axi_awburst_adapt),
        .s_axi_awlock(s_axi_awlock_adapt),
        .s_axi_awcache(s_axi_awcache_adapt),
        .s_axi_awprot(s_axi_awprot_adapt),
        .s_axi_awqos(s_axi_awqos_adapt),
        .s_axi_awregion(s_axi_awregion_adapt),
        .s_axi_awuser(s_axi_awuser_adapt),
        .s_axi_awvalid(s_axi_awvalid_adapt),
        .s_axi_awready(s_axi_awready_adapt),
        .s_axi_wdata(s_axi_wdata_adapt),
        .s_axi_wstrb(s_axi_wstrb_adapt),
        .s_axi_wlast(s_axi_wlast_adapt),
        .s_axi_wuser(s_axi_wuser_adapt),
        .s_axi_wvalid(s_axi_wvalid_adapt),
        .s_axi_wready(s_axi_wready_adapt),
        .s_axi_bid(s_axi_bid_adapt),
        .s_axi_bresp(s_axi_bresp_adapt),
        .s_axi_buser(s_axi_buser_adapt),
        .s_axi_bvalid(s_axi_bvalid_adapt),
        .s_axi_bready(s_axi_bready_adapt),
        .s_axi_arid(s_axi_arid_adapt),
        .s_axi_araddr(s_axi_araddr_adapt),
        .s_axi_arlen(s_axi_arlen_adapt),
        .s_axi_arsize(s_axi_arsize_adapt),
        .s_axi_arburst(s_axi_arburst_adapt),
        .s_axi_arlock(s_axi_arlock_adapt),
        .s_axi_arcache(s_axi_arcache_adapt),
        .s_axi_arprot(s_axi_arprot_adapt),
        .s_axi_arqos(s_axi_arqos_adapt),
        .s_axi_arregion(s_axi_arregion_adapt),
        .s_axi_aruser(s_axi_aruser_adapt),
        .s_axi_arvalid(s_axi_arvalid_adapt),
        .s_axi_arready(s_axi_arready_adapt),
        .s_axi_rid(s_axi_rid_adapt),
        .s_axi_rdata(s_axi_rdata_adapt),
        .s_axi_rresp(s_axi_rresp_adapt),
        .s_axi_rlast(s_axi_rlast_adapt),
        .s_axi_ruser(s_axi_ruser_adapt),
        .s_axi_rvalid(s_axi_rvalid_adapt),
        .s_axi_rready(s_axi_rready_adapt),
        .m_axi_awid(m_axi_awid_adapt),
        .m_axi_awaddr(m_axi_awaddr_adapt),
        .m_axi_awlen(m_axi_awlen_adapt),
        .m_axi_awsize(m_axi_awsize_adapt),
        .m_axi_awburst(m_axi_awburst_adapt),
        .m_axi_awlock(m_axi_awlock_adapt),
        .m_axi_awcache(m_axi_awcache_adapt),
        .m_axi_awprot(m_axi_awprot_adapt),
        .m_axi_awqos(m_axi_awqos_adapt),
        .m_axi_awregion(m_axi_awregion_adapt),
        .m_axi_awuser(m_axi_awuser_adapt),
        .m_axi_awvalid(m_axi_awvalid_adapt),
        .m_axi_awready(m_axi_awready_adapt),
        .m_axi_wdata(m_axi_wdata_adapt),
        .m_axi_wstrb(m_axi_wstrb_adapt),
        .m_axi_wlast(m_axi_wlast_adapt),
        .m_axi_wuser(m_axi_wuser_adapt),
        .m_axi_wvalid(m_axi_wvalid_adapt),
        .m_axi_wready(m_axi_wready_adapt),
        .m_axi_bid(m_axi_bid_adapt),
        .m_axi_bresp(m_axi_bresp_adapt),
        .m_axi_buser(m_axi_buser_adapt),
        .m_axi_bvalid(m_axi_bvalid_adapt),
        .m_axi_bready(m_axi_bready_adapt),
        .m_axi_arid(m_axi_arid_adapt),
        .m_axi_araddr(m_axi_araddr_adapt),
        .m_axi_arlen(m_axi_arlen_adapt),
        .m_axi_arsize(m_axi_arsize_adapt),
        .m_axi_arburst(m_axi_arburst_adapt),
        .m_axi_arlock(m_axi_arlock_adapt),
        .m_axi_arcache(m_axi_arcache_adapt),
        .m_axi_arprot(m_axi_arprot_adapt),
        .m_axi_arqos(m_axi_arqos_adapt),
        .m_axi_arregion(m_axi_arregion_adapt),
        .m_axi_aruser(m_axi_aruser_adapt),
        .m_axi_arvalid(m_axi_arvalid_adapt),
        .m_axi_arready(m_axi_arready_adapt),
        .m_axi_rid(m_axi_rid_adapt),
        .m_axi_rdata(m_axi_rdata_adapt),
        .m_axi_rresp(m_axi_rresp_adapt),
        .m_axi_rlast(m_axi_rlast_adapt),
        .m_axi_ruser(m_axi_ruser_adapt),
        .m_axi_rvalid(m_axi_rvalid_adapt),
        .m_axi_rready(m_axi_rready_adapt),
        .*
        );

    // Read address channel
    assign s_axi_arid_adapt = axi64.arid;
    assign s_axi_arcache_adapt = axi64.arcache;
    assign s_axi_araddr_adapt = axi64.araddr;
    assign s_axi_arlen_adapt = axi64.arlen;
    assign s_axi_arsize_adapt = axi64.arsize;
    assign s_axi_arburst_adapt = axi64.arburst;
    assign s_axi_arvalid_adapt = axi64.arvalid;
    assign axi64.arready = s_axi_arready_adapt;

    // Read data channel
    assign axi64.rid = s_axi_rid_adapt;
    assign axi64.rdata = s_axi_rdata_adapt;
    assign axi64.rresp = s_axi_rresp_adapt;
    assign axi64.rlast = s_axi_rlast_adapt;
    assign axi64.rvalid = s_axi_rvalid_adapt;
    assign s_axi_rready_adapt = axi64.rready;

    // Write address channel
    assign s_axi_awid_adapt = axi64.awid;
    assign s_axi_awcache_adapt = axi64.awcache;
    assign s_axi_awaddr_adapt = axi64.awaddr;
    assign s_axi_awlen_adapt = axi64.awlen;
    assign s_axi_awsize_adapt = axi64.awsize;
    assign s_axi_awburst_adapt = axi64.awburst;
    assign s_axi_awvalid_adapt = axi64.awvalid;
    assign axi64.awready = s_axi_awready_adapt;

    // Write data channel
    assign s_axi_wvalid_adapt = axi64.wvalid;
    assign s_axi_wdata_adapt = axi64.wdata;
    assign s_axi_wstrb_adapt = axi64.wstrb;
    assign s_axi_wlast_adapt = axi64.wlast;
    assign axi64.wready = s_axi_wready_adapt;

    // Write response channel
    assign axi64.bid = s_axi_bid_adapt;
    assign axi64.bresp = s_axi_bresp_adapt;
    assign axi64.bvalid = s_axi_bvalid_adapt;
    assign s_axi_bready_adapt = axi64.bready;

    ////////////////////////////////////////////////////
    //AXI crossbar

    localparam S_COUNT_XBAR = 2;
    localparam M_COUNT_XBAR = 1;
    localparam DATA_WIDTH_XBAR = 32;
    localparam ADDR_WIDTH_XBAR = 32;
    localparam STRB_WIDTH_XBAR = (DATA_WIDTH_XBAR/8);
    localparam S_ID_WIDTH_XBAR = 6;
    localparam M_ID_WIDTH_XBAR = S_ID_WIDTH_XBAR+$clog2(S_COUNT_XBAR);
    localparam AWUSER_ENABLE_XBAR = 0;
    localparam AWUSER_WIDTH_XBAR = 1;
    localparam WUSER_ENABLE_XBAR = 0;
    localparam WUSER_WIDTH_XBAR = 1;
    localparam BUSER_ENABLE_XBAR = 0;
    localparam BUSER_WIDTH_XBAR = 1;
    localparam ARUSER_ENABLE_XBAR = 0;
    localparam ARUSER_WIDTH_XBAR = 1;
    localparam RUSER_ENABLE_XBAR = 0;
    localparam RUSER_WIDTH_XBAR = 1;
    localparam S_THREADS_XBAR = {S_COUNT_XBAR{32'd2}};
    localparam S_ACCEPT_XBAR = {S_COUNT_XBAR{32'd16}};
    localparam M_REGIONS_XBAR = 1;
    localparam M_BASE_ADDR_XBAR = 32'h80000000;
    localparam M_ADDR_WIDTH_XBAR = {M_COUNT_XBAR{{M_REGIONS_XBAR{32'd28}}}};
    localparam M_CONNECT_READ_XBAR = {M_COUNT_XBAR{{S_COUNT_XBAR{1'b1}}}};
    localparam M_CONNECT_WRITE_XBAR = {M_COUNT_XBAR{{S_COUNT_XBAR{1'b1}}}};
    localparam M_ISSUE_XBAR = {M_COUNT_XBAR{32'd4}};
    localparam M_SECURE_XBAR = {M_COUNT_XBAR{1'b0}};
    localparam S_AW_REG_TYPE_XBAR = {S_COUNT_XBAR{2'd0}};
    localparam S_W_REG_TYPE_XBAR = {S_COUNT_XBAR{2'd0}};
    localparam S_B_REG_TYPE_XBAR = {S_COUNT_XBAR{2'd1}};
    localparam S_AR_REG_TYPE_XBAR = {S_COUNT_XBAR{2'd0}};
    localparam S_R_REG_TYPE_XBAR = {S_COUNT_XBAR{2'd2}};
    localparam M_AW_REG_TYPE_XBAR = {M_COUNT_XBAR{2'd1}};
    localparam M_W_REG_TYPE_XBAR = {M_COUNT_XBAR{2'd2}};
    localparam M_B_REG_TYPE_XBAR = {M_COUNT_XBAR{2'd0}};
    localparam M_AR_REG_TYPE_XBAR = {M_COUNT_XBAR{2'd1}};
    localparam M_R_REG_TYPE_XBAR = {M_COUNT_XBAR{2'd0}};

    /*
     * AXI slave interfaces
     */
    wire [S_COUNT_XBAR*S_ID_WIDTH_XBAR-1:0]    s_axi_awid_xbar;
    wire [S_COUNT_XBAR*ADDR_WIDTH_XBAR-1:0]    s_axi_awaddr_xbar;
    wire [S_COUNT_XBAR*8-1:0]             s_axi_awlen_xbar;
    wire [S_COUNT_XBAR*3-1:0]             s_axi_awsize_xbar;
    wire [S_COUNT_XBAR*2-1:0]             s_axi_awburst_xbar;
    wire [S_COUNT_XBAR-1:0]               s_axi_awlock_xbar;
    wire [S_COUNT_XBAR*4-1:0]             s_axi_awcache_xbar;
    wire [S_COUNT_XBAR*3-1:0]             s_axi_awprot_xbar;
    wire [S_COUNT_XBAR*4-1:0]             s_axi_awqos_xbar;
    wire [S_COUNT_XBAR*AWUSER_WIDTH_XBAR-1:0]  s_axi_awuser_xbar;
    wire [S_COUNT_XBAR-1:0]               s_axi_awvalid_xbar;
    wire [S_COUNT_XBAR-1:0]               s_axi_awready_xbar;
    wire [S_COUNT_XBAR*DATA_WIDTH_XBAR-1:0]    s_axi_wdata_xbar;
    wire [S_COUNT_XBAR*STRB_WIDTH_XBAR-1:0]    s_axi_wstrb_xbar;
    wire [S_COUNT_XBAR-1:0]               s_axi_wlast_xbar;
    wire [S_COUNT_XBAR*WUSER_WIDTH_XBAR-1:0]   s_axi_wuser_xbar;
    wire [S_COUNT_XBAR-1:0]               s_axi_wvalid_xbar;
    wire [S_COUNT_XBAR-1:0]               s_axi_wready_xbar;
    wire [S_COUNT_XBAR*S_ID_WIDTH_XBAR-1:0]    s_axi_bid_xbar;
    wire [S_COUNT_XBAR*2-1:0]             s_axi_bresp_xbar;
    wire [S_COUNT_XBAR*BUSER_WIDTH_XBAR-1:0]   s_axi_buser_xbar;
    wire [S_COUNT_XBAR-1:0]               s_axi_bvalid_xbar;
    wire [S_COUNT_XBAR-1:0]               s_axi_bready_xbar;
    wire [S_COUNT_XBAR*S_ID_WIDTH_XBAR-1:0]    s_axi_arid_xbar;
    wire [S_COUNT_XBAR*ADDR_WIDTH_XBAR-1:0]    s_axi_araddr_xbar;
    wire [S_COUNT_XBAR*8-1:0]             s_axi_arlen_xbar;
    wire [S_COUNT_XBAR*3-1:0]             s_axi_arsize_xbar;
    wire [S_COUNT_XBAR*2-1:0]             s_axi_arburst_xbar;
    wire [S_COUNT_XBAR-1:0]               s_axi_arlock_xbar;
    wire [S_COUNT_XBAR*4-1:0]             s_axi_arcache_xbar;
    wire [S_COUNT_XBAR*3-1:0]             s_axi_arprot_xbar;
    wire [S_COUNT_XBAR*4-1:0]             s_axi_arqos_xbar;
    wire [S_COUNT_XBAR*ARUSER_WIDTH_XBAR-1:0]  s_axi_aruser_xbar;
    wire [S_COUNT_XBAR-1:0]               s_axi_arvalid_xbar;
    wire [S_COUNT_XBAR-1:0]               s_axi_arready_xbar;
    wire [S_COUNT_XBAR*S_ID_WIDTH_XBAR-1:0]    s_axi_rid_xbar;
    wire [S_COUNT_XBAR*DATA_WIDTH_XBAR-1:0]    s_axi_rdata_xbar;
    wire [S_COUNT_XBAR*2-1:0]             s_axi_rresp_xbar;
    wire [S_COUNT_XBAR-1:0]               s_axi_rlast_xbar;
    wire [S_COUNT_XBAR*RUSER_WIDTH_XBAR-1:0]   s_axi_ruser_xbar;
    wire [S_COUNT_XBAR-1:0]               s_axi_rvalid_xbar;
    wire [S_COUNT_XBAR-1:0]               s_axi_rready_xbar;

    /*
     * AXI master interfaces
     */
    wire [M_COUNT_XBAR*M_ID_WIDTH_XBAR-1:0]    m_axi_awid_xbar;
    wire [M_COUNT_XBAR*ADDR_WIDTH_XBAR-1:0]    m_axi_awaddr_xbar;
    wire [M_COUNT_XBAR*8-1:0]             m_axi_awlen_xbar;
    wire [M_COUNT_XBAR*3-1:0]             m_axi_awsize_xbar;
    wire [M_COUNT_XBAR*2-1:0]             m_axi_awburst_xbar;
    wire [M_COUNT_XBAR-1:0]               m_axi_awlock_xbar;
    wire [M_COUNT_XBAR*4-1:0]             m_axi_awcache_xbar;
    wire [M_COUNT_XBAR*3-1:0]             m_axi_awprot_xbar;
    wire [M_COUNT_XBAR*4-1:0]             m_axi_awqos_xbar;
    wire [M_COUNT_XBAR*4-1:0]             m_axi_awregion_xbar;
    wire [M_COUNT_XBAR*AWUSER_WIDTH_XBAR-1:0]  m_axi_awuser_xbar;
    wire [M_COUNT_XBAR-1:0]               m_axi_awvalid_xbar;
    wire [M_COUNT_XBAR-1:0]               m_axi_awready_xbar;
    wire [M_COUNT_XBAR*DATA_WIDTH_XBAR-1:0]    m_axi_wdata_xbar;
    wire [M_COUNT_XBAR*STRB_WIDTH_XBAR-1:0]    m_axi_wstrb_xbar;
    wire [M_COUNT_XBAR-1:0]               m_axi_wlast_xbar;
    wire [M_COUNT_XBAR*WUSER_WIDTH_XBAR-1:0]   m_axi_wuser_xbar;
    wire [M_COUNT_XBAR-1:0]               m_axi_wvalid_xbar;
    wire [M_COUNT_XBAR-1:0]               m_axi_wready_xbar;
    wire [M_COUNT_XBAR*M_ID_WIDTH_XBAR-1:0]    m_axi_bid_xbar;
    wire [M_COUNT_XBAR*2-1:0]             m_axi_bresp_xbar;
    wire [M_COUNT_XBAR*BUSER_WIDTH_XBAR-1:0]   m_axi_buser_xbar;
    wire [M_COUNT_XBAR-1:0]               m_axi_bvalid_xbar;
    wire [M_COUNT_XBAR-1:0]               m_axi_bready_xbar;
    wire [M_COUNT_XBAR*M_ID_WIDTH_XBAR-1:0]    m_axi_arid_xbar;
    wire [M_COUNT_XBAR*ADDR_WIDTH_XBAR-1:0]    m_axi_araddr_xbar;
    wire [M_COUNT_XBAR*8-1:0]             m_axi_arlen_xbar;
    wire [M_COUNT_XBAR*3-1:0]             m_axi_arsize_xbar;
    wire [M_COUNT_XBAR*2-1:0]             m_axi_arburst_xbar;
    wire [M_COUNT_XBAR-1:0]               m_axi_arlock_xbar;
    wire [M_COUNT_XBAR*4-1:0]             m_axi_arcache_xbar;
    wire [M_COUNT_XBAR*3-1:0]             m_axi_arprot_xbar;
    wire [M_COUNT_XBAR*4-1:0]             m_axi_arqos_xbar;
    wire [M_COUNT_XBAR*4-1:0]             m_axi_arregion_xbar;
    wire [M_COUNT_XBAR*ARUSER_WIDTH_XBAR-1:0]  m_axi_aruser_xbar;
    wire [M_COUNT_XBAR-1:0]               m_axi_arvalid_xbar;
    wire [M_COUNT_XBAR-1:0]               m_axi_arready_xbar;
    wire [M_COUNT_XBAR*M_ID_WIDTH_XBAR-1:0]    m_axi_rid_xbar;
    wire [M_COUNT_XBAR*DATA_WIDTH_XBAR-1:0]    m_axi_rdata_xbar;
    wire [M_COUNT_XBAR*2-1:0]             m_axi_rresp_xbar;
    wire [M_COUNT_XBAR-1:0]               m_axi_rlast_xbar;
    wire [M_COUNT_XBAR*RUSER_WIDTH_XBAR-1:0]   m_axi_ruser_xbar;
    wire [M_COUNT_XBAR-1:0]               m_axi_rvalid_xbar;
    wire [M_COUNT_XBAR-1:0]               m_axi_rready_xbar;

    axi_crossbar #(
      .S_COUNT(S_COUNT_XBAR),
      .M_COUNT(M_COUNT_XBAR),
      .DATA_WIDTH(DATA_WIDTH_XBAR),
      .ADDR_WIDTH(ADDR_WIDTH_XBAR),
      .STRB_WIDTH(STRB_WIDTH_XBAR),
      .S_ID_WIDTH(S_ID_WIDTH_XBAR),
      .M_ID_WIDTH(M_ID_WIDTH_XBAR),
      .AWUSER_ENABLE(AWUSER_ENABLE_XBAR),
      .AWUSER_WIDTH(AWUSER_WIDTH_XBAR),
      .WUSER_ENABLE(WUSER_ENABLE_XBAR),
      .WUSER_WIDTH(WUSER_WIDTH_XBAR),
      .BUSER_ENABLE(BUSER_ENABLE_XBAR),
      .BUSER_WIDTH(BUSER_WIDTH_XBAR),
      .ARUSER_ENABLE(ARUSER_ENABLE_XBAR),
      .ARUSER_WIDTH(ARUSER_WIDTH_XBAR),
      .RUSER_ENABLE(RUSER_ENABLE_XBAR),
      .RUSER_WIDTH(RUSER_WIDTH_XBAR),
      .S_THREADS(S_THREADS_XBAR),
      .S_ACCEPT(S_ACCEPT_XBAR),
      .M_REGIONS(M_REGIONS_XBAR),
      .M_BASE_ADDR(M_BASE_ADDR_XBAR),
      .M_ADDR_WIDTH(M_ADDR_WIDTH_XBAR),
      .M_CONNECT_READ(M_CONNECT_READ_XBAR),
      .M_CONNECT_WRITE(M_CONNECT_WRITE_XBAR),
      .M_ISSUE(M_ISSUE_XBAR),
      .M_SECURE(M_SECURE_XBAR),
      .S_AW_REG_TYPE(S_AW_REG_TYPE_XBAR),
      .S_W_REG_TYPE(S_W_REG_TYPE_XBAR),
      .S_B_REG_TYPE(S_B_REG_TYPE_XBAR),
      .S_AR_REG_TYPE(S_AR_REG_TYPE_XBAR),
      .S_R_REG_TYPE(S_R_REG_TYPE_XBAR),
      .M_AW_REG_TYPE(M_AW_REG_TYPE_XBAR),
      .M_W_REG_TYPE(M_W_REG_TYPE_XBAR),
      .M_B_REG_TYPE(M_B_REG_TYPE_XBAR),
      .M_AR_REG_TYPE(M_AR_REG_TYPE_XBAR),
      .M_R_REG_TYPE(M_R_REG_TYPE_XBAR)
      ) 
      x_axi_crossbar (
        .s_axi_awid(s_axi_awid_xbar),
        .s_axi_awaddr(s_axi_awaddr_xbar),
        .s_axi_awlen(s_axi_awlen_xbar),
        .s_axi_awsize(s_axi_awsize_xbar),
        .s_axi_awburst(s_axi_awburst_xbar),
        .s_axi_awlock(s_axi_awlock_xbar),
        .s_axi_awcache(s_axi_awcache_xbar),
        .s_axi_awprot(s_axi_awprot_xbar),
        .s_axi_awqos(s_axi_awqos_xbar),
        .s_axi_awuser(s_axi_awuser_xbar),
        .s_axi_awvalid(s_axi_awvalid_xbar),
        .s_axi_awready(s_axi_awready_xbar),
        .s_axi_wdata(s_axi_wdata_xbar),
        .s_axi_wstrb(s_axi_wstrb_xbar),
        .s_axi_wlast(s_axi_wlast_xbar),
        .s_axi_wuser(s_axi_wuser_xbar),
        .s_axi_wvalid(s_axi_wvalid_xbar),
        .s_axi_wready(s_axi_wready_xbar),
        .s_axi_bid(s_axi_bid_xbar),
        .s_axi_bresp(s_axi_bresp_xbar),
        .s_axi_buser(s_axi_buser_xbar),
        .s_axi_bvalid(s_axi_bvalid_xbar),
        .s_axi_bready(s_axi_bready_xbar),
        .s_axi_arid(s_axi_arid_xbar),
        .s_axi_araddr(s_axi_araddr_xbar),
        .s_axi_arlen(s_axi_arlen_xbar),
        .s_axi_arsize(s_axi_arsize_xbar),
        .s_axi_arburst(s_axi_arburst_xbar),
        .s_axi_arlock(s_axi_arlock_xbar),
        .s_axi_arcache(s_axi_arcache_xbar),
        .s_axi_arprot(s_axi_arprot_xbar),
        .s_axi_arqos(s_axi_arqos_xbar),
        .s_axi_aruser(s_axi_aruser_xbar),
        .s_axi_arvalid(s_axi_arvalid_xbar),
        .s_axi_arready(s_axi_arready_xbar),
        .s_axi_rid(s_axi_rid_xbar),
        .s_axi_rdata(s_axi_rdata_xbar),
        .s_axi_rresp(s_axi_rresp_xbar),
        .s_axi_rlast(s_axi_rlast_xbar),
        .s_axi_ruser(s_axi_ruser_xbar),
        .s_axi_rvalid(s_axi_rvalid_xbar),
        .s_axi_rready(s_axi_rready_xbar),
        .m_axi_awid(m_axi_awid_xbar),
        .m_axi_awaddr(m_axi_awaddr_xbar),
        .m_axi_awlen(m_axi_awlen_xbar),
        .m_axi_awsize(m_axi_awsize_xbar),
        .m_axi_awburst(m_axi_awburst_xbar),
        .m_axi_awlock(m_axi_awlock_xbar),
        .m_axi_awcache(m_axi_awcache_xbar),
        .m_axi_awprot(m_axi_awprot_xbar),
        .m_axi_awqos(m_axi_awqos_xbar),
        .m_axi_awregion(m_axi_awregion_xbar),
        .m_axi_awuser(m_axi_awuser_xbar),
        .m_axi_awvalid(m_axi_awvalid_xbar),
        .m_axi_awready(m_axi_awready_xbar),
        .m_axi_wdata(m_axi_wdata_xbar),
        .m_axi_wstrb(m_axi_wstrb_xbar),
        .m_axi_wlast(m_axi_wlast_xbar),
        .m_axi_wuser(m_axi_wuser_xbar),
        .m_axi_wvalid(m_axi_wvalid_xbar),
        .m_axi_wready(m_axi_wready_xbar),
        .m_axi_bid(m_axi_bid_xbar),
        .m_axi_bresp(m_axi_bresp_xbar),
        .m_axi_buser(m_axi_buser_xbar),
        .m_axi_bvalid(m_axi_bvalid_xbar),
        .m_axi_bready(m_axi_bready_xbar),
        .m_axi_arid(m_axi_arid_xbar),
        .m_axi_araddr(m_axi_araddr_xbar),
        .m_axi_arlen(m_axi_arlen_xbar),
        .m_axi_arsize(m_axi_arsize_xbar),
        .m_axi_arburst(m_axi_arburst_xbar),
        .m_axi_arlock(m_axi_arlock_xbar),
        .m_axi_arcache(m_axi_arcache_xbar),
        .m_axi_arprot(m_axi_arprot_xbar),
        .m_axi_arqos(m_axi_arqos_xbar),
        .m_axi_arregion(m_axi_arregion_xbar),
        .m_axi_aruser(m_axi_aruser_xbar),
        .m_axi_arvalid(m_axi_arvalid_xbar),
        .m_axi_arready(m_axi_arready_xbar),
        .m_axi_rid(m_axi_rid_xbar),
        .m_axi_rdata(m_axi_rdata_xbar),
        .m_axi_rresp(m_axi_rresp_xbar),
        .m_axi_rlast(m_axi_rlast_xbar),
        .m_axi_ruser(m_axi_ruser_xbar),
        .m_axi_rvalid(m_axi_rvalid_xbar),
        .m_axi_rready(m_axi_rready_xbar),
        .*
        );
    
    // Read address channel
    assign s_axi_arid_xbar = {m_axi_arid_adapt, axi.arid};
    assign s_axi_arcache_xbar = {m_axi_arcache_adapt, axi.arcache};
    assign s_axi_araddr_xbar = {m_axi_araddr_adapt, axi.araddr};
    assign s_axi_arlen_xbar = {m_axi_arlen_adapt, axi.arlen};
    assign s_axi_arsize_xbar = {m_axi_arsize_adapt, axi.arsize};
    assign s_axi_arburst_xbar = {m_axi_arburst_adapt, axi.arburst};
    assign s_axi_arvalid_xbar = {m_axi_arvalid_adapt, axi.arvalid};
    assign {m_axi_arready_adapt, axi.arready} = s_axi_arready_xbar;

    // Read data channel
    assign {m_axi_rid_adapt, axi.rid} = s_axi_rid_xbar;
    assign {m_axi_rdata_adapt, axi.rdata} = s_axi_rdata_xbar;
    assign {m_axi_rresp_adapt, axi.rresp} = s_axi_rresp_xbar;
    assign {m_axi_rlast_adapt, axi.rlast} = s_axi_rlast_xbar;
    assign {m_axi_rvalid_adapt, axi.rvalid} = s_axi_rvalid_xbar;
    assign s_axi_rready_xbar = {m_axi_rready_adapt, axi.rready};

    // Write address channel
    assign s_axi_awid_xbar = {m_axi_awid_adapt, axi.awid};
    assign s_axi_awcache_xbar = {m_axi_awcache_adapt, axi.awcache};
    assign s_axi_awaddr_xbar = {m_axi_awaddr_adapt, axi.awaddr};
    assign s_axi_awlen_xbar = {m_axi_awlen_adapt, axi.awlen};
    assign s_axi_awsize_xbar = {m_axi_awsize_adapt, axi.awsize};
    assign s_axi_awburst_xbar = {m_axi_awburst_adapt, axi.awburst};
    assign s_axi_awvalid_xbar = {m_axi_awvalid_adapt, axi.awvalid};
    assign {m_axi_awready_adapt, axi.awready} = s_axi_awready_xbar;

    // Write data channel
    assign s_axi_wvalid_xbar = {m_axi_wvalid_adapt, axi.wvalid};
    assign s_axi_wdata_xbar = {m_axi_wdata_adapt, axi.wdata};
    assign s_axi_wstrb_xbar = {m_axi_wstrb_adapt, axi.wstrb};
    assign s_axi_wlast_xbar = {m_axi_wlast_adapt, axi.wlast};
    assign {m_axi_wready_adapt, axi.wready} = s_axi_wready_xbar;

    // Write response channel
    assign {m_axi_bid_adapt, axi.bid} = s_axi_bid_xbar;
    assign {m_axi_bresp_adapt, axi.bresp} = s_axi_bresp_xbar;
    assign {m_axi_bvalid_adapt, axi.bvalid} = s_axi_bvalid_xbar;
    assign s_axi_bready_xbar = {m_axi_bready_adapt, axi.bready};

    ////////////////////////////////////////////////////
    //UART
    initial begin
        write_uart = 0;
        uart_byte = 0;
    end

    //Capture writes to UART
    always_ff @(posedge clk) begin
        write_uart <= (m_axi_wvalid_xbar[0] && m_axi_wready_xbar[0] && m_axi_awaddr_xbar == UART_ADDR);
        uart_byte <= m_axi_wdata_xbar[7:0];
    end

    ////////////////////////////////////////////////////
    //DDR AXI interface
    assign ddr_axi_araddr = m_axi_araddr_xbar;
    assign ddr_axi_arburst = m_axi_arburst_xbar;
    assign ddr_axi_arcache = m_axi_arcache_xbar;
    assign ddr_axi_arid = m_axi_arid_xbar;
    assign ddr_axi_arlen = m_axi_arlen_xbar;
    assign m_axi_arready_xbar = ddr_axi_arready;
    assign ddr_axi_arsize = m_axi_arsize_xbar;
    assign ddr_axi_arvalid = m_axi_arvalid_xbar[0];

    assign ddr_axi_awaddr = m_axi_awaddr_xbar;
    assign ddr_axi_awburst = m_axi_awburst_xbar;
    assign ddr_axi_awcache = m_axi_awcache_xbar;
    assign ddr_axi_awid = m_axi_awid_xbar;
    assign ddr_axi_awlen =  m_axi_awlen_xbar;
    assign m_axi_awready_xbar = ddr_axi_awready;
    assign ddr_axi_awsize = m_axi_awsize_xbar;
    assign ddr_axi_awvalid = m_axi_awvalid_xbar[0];
    
    assign m_axi_bid_xbar = ddr_axi_bid;
    assign ddr_axi_bready = m_axi_bready_xbar[0];
    assign m_axi_bresp_xbar = ddr_axi_bresp;
    assign m_axi_bvalid_xbar[0] = ddr_axi_bvalid;

    assign m_axi_rdata_xbar = ddr_axi_rdata;
    assign m_axi_rid_xbar = ddr_axi_rid;
    assign m_axi_rlast_xbar[0] = ddr_axi_rlast;
    assign ddr_axi_rready = m_axi_rready_xbar[0];
    assign m_axi_rresp_xbar = ddr_axi_rresp;
    assign m_axi_rvalid_xbar[0] = ddr_axi_rvalid;

    assign ddr_axi_wdata = m_axi_wdata_xbar;
    assign ddr_axi_wlast = m_axi_wlast_xbar[0];
    assign m_axi_wready_xbar[0] = ddr_axi_wready;
    assign ddr_axi_wstrb = m_axi_wstrb_xbar;
    assign ddr_axi_wvalid = m_axi_wvalid_xbar[0];

    ////////////////////////////////////////////////////
    //Trace Interface
    localparam BENCHMARK_START_COLLECTION_NOP = 32'h00C00013;
    localparam BENCHMARK_END_COLLECTION_NOP = 32'h00D00013;

    logic start_collection;
    logic end_collection;

    //NOP detection
    always_comb begin
        start_collection = 0;
        end_collection = 0;
        foreach(retire_ports_valid[i]) begin
            start_collection |= retire_ports_valid[i] & (retire_ports_instruction[i] == BENCHMARK_START_COLLECTION_NOP);
            end_collection |= retire_ports_valid[i] & (retire_ports_instruction[i] == BENCHMARK_END_COLLECTION_NOP);
        end
    end

    //Hierarchy paths for major components 
    `define FETCH_P cpu.fetch_block
    `define ICACHE_P cpu.fetch_block.gen_fetch_icache.i_cache
    `define BRANCH_P cpu.branch_unit_block
    `define ISSUE_P cpu.decode_and_issue_block
    `define RENAME_P cpu.renamer_block
    `define METADATA_P cpu.id_block
    `define LS_P cpu.load_store_unit_block
    `define LSQ_P cpu.load_store_unit_block.lsq_block
    `define DCACHE_P cpu.load_store_unit_block.gen_ls_dcache.data_cache

    stats_t stats_enum;
    instruction_mix_stats_t instruction_mix_enum;
    localparam NUM_STATS = stats_enum.num();
    localparam NUM_INSTRUCTION_MIX_STATS = instruction_mix_enum.num();

    logic stats [NUM_STATS];
    logic is_mul [RETIRE_PORTS];
    logic is_div [RETIRE_PORTS];
    logic [NUM_INSTRUCTION_MIX_STATS-1:0] instruction_mix_stats [RETIRE_PORTS];

    logic icache_hit;
    logic icache_miss;
    logic iarb_stall;
    logic dcache_hit;
    logic dcache_miss;
    logic darb_stall;

    //Issue stalls
    logic base_no_instruction_stall;
    logic base_no_id_sub_stall;
    logic base_flush_sub_stall;
    logic base_unit_busy_stall;
    logic base_operands_stall;
    logic base_hold_stall;
    logic single_source_issue_stall;

    logic [3:0] stall_source_count;
    ///////////////

    //Issue phys_rd to unit mem
    //Used for determining what outputs an operand stall is waiting on
    logic [`ISSUE_P.NUM_UNITS-1:0] phys_addr_table [64];

    always_ff @(posedge clk) begin
        if (cpu.instruction_issued_with_rd)
            phys_addr_table[`ISSUE_P.issue.phys_rd_addr] <= `ISSUE_P.unit_needed_issue_stage;
    end

    generate if (NEXYS_CONFIG.INCLUDE_ICACHE) begin
        assign icache_hit = `ICACHE_P.tag_hit;
        assign icache_miss = `ICACHE_P.second_cycle & ~`ICACHE_P.tag_hit;
        assign iarb_stall = `ICACHE_P.request_r & ~cpu.l1_request[L1_ICACHE_ID].ack;
    end endgenerate

    generate if (NEXYS_CONFIG.INCLUDE_DCACHE) begin
        assign dcache_hit = `DCACHE_P.load_hit;
        assign dcache_miss = `DCACHE_P.line_complete;
        assign darb_stall = cpu.l1_request[L1_DCACHE_ID].request & ~cpu.l1_request[L1_DCACHE_ID].ack;
    end endgenerate

    always_comb begin
        stats = '{default: '0};
        //Fetch
        stats[FETCH_EARLY_BR_CORRECTION_STAT] = `FETCH_P.early_branch_flush;
        stats[FETCH_SUB_UNIT_STALL_STAT] = `METADATA_P.pc_id_available & ~`FETCH_P.units_ready;
        stats[FETCH_ID_STALL_STAT] = ~`METADATA_P.pc_id_available;
        stats[FETCH_IC_HIT_STAT] = icache_hit;
        stats[FETCH_IC_MISS_STAT] = icache_miss;
        stats[FETCH_IC_ARB_STALL_STAT] = iarb_stall;

        //Branch predictor
        stats[FETCH_BP_BR_CORRECT_STAT] = `BRANCH_P.instruction_is_completing & ~`BRANCH_P.is_return & ~`BRANCH_P.branch_flush;
        stats[FETCH_BP_BR_MISPREDICT_STAT] = `BRANCH_P.instruction_is_completing & ~`BRANCH_P.is_return & `BRANCH_P.branch_flush;
        stats[FETCH_BP_RAS_CORRECT_STAT] = `BRANCH_P.instruction_is_completing & `BRANCH_P.is_return & ~`BRANCH_P.branch_flush;
        stats[FETCH_BP_RAS_MISPREDICT_STAT] = `BRANCH_P.instruction_is_completing & `BRANCH_P.is_return & `BRANCH_P.branch_flush;

        //Issue stalls
        base_no_instruction_stall = ~`ISSUE_P.issue.stage_valid | cpu.gc.fetch_flush;
            base_no_id_sub_stall = (`METADATA_P.post_issue_count == MAX_IDS);
            base_flush_sub_stall = cpu.gc.fetch_flush;
        base_unit_busy_stall = `ISSUE_P.issue.stage_valid & ~|`ISSUE_P.issue_ready;
        base_operands_stall = `ISSUE_P.issue.stage_valid & ~`ISSUE_P.operands_ready;
        base_hold_stall = `ISSUE_P.issue.stage_valid & (cpu.gc.issue_hold | `ISSUE_P.pre_issue_exception_pending);

        stall_source_count = 4'(base_no_instruction_stall) + 4'(base_unit_busy_stall) + 4'(base_operands_stall) + 4'(base_hold_stall);
        single_source_issue_stall = (stall_source_count == 1);

        //Issue stall determination
        stats[ISSUE_NO_INSTRUCTION_STAT] = base_no_instruction_stall & single_source_issue_stall;
        stats[ISSUE_NO_ID_STAT] = base_no_instruction_stall & base_no_id_sub_stall & single_source_issue_stall;
        stats[ISSUE_FLUSH_STAT] = base_no_instruction_stall & base_flush_sub_stall & single_source_issue_stall;
        stats[ISSUE_UNIT_BUSY_STAT] = base_unit_busy_stall & single_source_issue_stall;
        stats[ISSUE_OPERANDS_NOT_READY_STAT] = base_operands_stall & single_source_issue_stall;
        stats[ISSUE_HOLD_STAT] = base_hold_stall & single_source_issue_stall;
        stats[ISSUE_MULTI_SOURCE_STAT] = (base_no_instruction_stall | base_unit_busy_stall | base_operands_stall | base_hold_stall) & ~single_source_issue_stall;

        //Misc Issue stats
        stats[ISSUE_OPERAND_STALL_FOR_BRANCH_STAT] = stats[ISSUE_OPERANDS_NOT_READY_STAT] & `ISSUE_P.unit_needed_issue_stage[`ISSUE_P.UNIT_IDS.BR];
        stats[ISSUE_STORE_WITH_FORWARDED_DATA_STAT] = `ISSUE_P.issue_to[`ISSUE_P.UNIT_IDS.LS] & `ISSUE_P.is_store_r & `ISSUE_P.ls_inputs.forwarded_store;
        stats[ISSUE_DIVIDER_RESULT_REUSE_STAT] = `ISSUE_P.issue_to[`ISSUE_P.UNIT_IDS.DIV] & `ISSUE_P.gen_decode_div_inputs.div_op_reuse;

        //Issue Stall Source
        for (int i = 0; i < REGFILE_READ_PORTS; i++) begin
            stats[ISSUE_OPERAND_STALL_ON_LOAD_STAT] |= `ISSUE_P.issue.stage_valid & phys_addr_table[`ISSUE_P.issue_phys_rs_addr[i]][`ISSUE_P.UNIT_IDS.LS] & `ISSUE_P.rs_conflict[i] ;
            stats[ISSUE_OPERAND_STALL_ON_MULTIPLY_STAT] |= EXAMPLE_CONFIG.INCLUDE_MUL & `ISSUE_P.issue.stage_valid & phys_addr_table[`ISSUE_P.issue_phys_rs_addr[i]][`ISSUE_P.UNIT_IDS.MUL] & `ISSUE_P.rs_conflict[i] ;
            stats[ISSUE_OPERAND_STALL_ON_DIVIDE_STAT] |= EXAMPLE_CONFIG.INCLUDE_DIV & `ISSUE_P.issue.stage_valid & phys_addr_table[`ISSUE_P.issue_phys_rs_addr[i]][`ISSUE_P.UNIT_IDS.DIV] & `ISSUE_P.rs_conflict[i] ;
        end

        //LS Stats
        stats[LSU_LOAD_BLOCKED_BY_STORE_STAT] = `LSQ_P.lq.valid & `LSQ_P.store_conflict;
        stats[LSU_SUB_UNIT_STALL_STAT] = (`LS_P.lsq.load_valid | `LS_P.lsq.store_valid) & ~`LS_P.sub_unit_ready;
        stats[LSU_DC_HIT_STAT] = dcache_hit;
        stats[LSU_DC_MISS_STAT] = dcache_miss;
        stats[LSU_DC_ARB_STALL_STAT] = darb_stall;

        //Retire Instruction Mix
        for (int i = 0; i < RETIRE_PORTS; i++) begin
                is_mul[i] = retire_ports_instruction[i][25] & ~retire_ports_instruction[i][14];
                is_div[i] = retire_ports_instruction[i][25] & retire_ports_instruction[i][14];
                instruction_mix_stats[i][ALU_STAT] = cpu.retire_port_valid[i] & (retire_ports_instruction[i][6:2] inside {ARITH_T, ARITH_IMM_T, AUIPC_T, LUI_T}) & ~(is_mul[i] | is_div[i]);
                instruction_mix_stats[i][BR_STAT] = cpu.retire_port_valid[i] & (retire_ports_instruction[i][6:2] inside {BRANCH_T, JAL_T, JALR_T});
                instruction_mix_stats[i][MUL_STAT] = cpu.retire_port_valid[i] & (retire_ports_instruction[i][6:2] inside {ARITH_T}) & is_mul[i];
                instruction_mix_stats[i][DIV_STAT] = cpu.retire_port_valid[i] & (retire_ports_instruction[i][6:2] inside {ARITH_T}) & is_div[i];
                instruction_mix_stats[i][LOAD_STAT] = cpu.retire_port_valid[i] & (retire_ports_instruction[i][6:2] inside {LOAD_T, AMO_T});// & retire_ports_instruction[i][14:12] inside {LS_B_fn3, L_BU_fn3};
                instruction_mix_stats[i][STORE_STAT] = cpu.retire_port_valid[i] & (retire_ports_instruction[i][6:2] inside {STORE_T, AMO_T});
                instruction_mix_stats[i][MISC_STAT] = cpu.retire_port_valid[i] & (retire_ports_instruction[i][6:2] inside {SYSTEM_T, FENCE_T});
        end
    end

    sim_stats #(.NUM_OF_STATS(NUM_STATS), .NUM_INSTRUCTION_MIX_STATS(NUM_INSTRUCTION_MIX_STATS)) stats_block (
        .clk (clk),
        .rst (rst),
        .start_collection (start_collection),
        .end_collection (end_collection),
        .stats (stats),
        .instruction_mix_stats (instruction_mix_stats),
        .retire (cpu.retire)
    );

    ////////////////////////////////////////////////////
    //Performs the lookups to provide the speculative architectural register file with
    //standard register names for simulation purposes
    logic [31:0][31:0] sim_registers_unamed_groups[NEXYS_CONFIG.NUM_WB_GROUPS];
    logic [31:0][31:0] sim_registers_unamed;

    simulation_named_regfile sim_register;
    typedef struct packed{
        phys_addr_t phys_addr;
        logic [$clog2(NEXYS_CONFIG.NUM_WB_GROUPS)-1:0] wb_group;
    } spec_table_t;
    spec_table_t translation [32];
    genvar i, j;
    generate  for (i = 0; i < 32; i++) begin : gen_reg_file_sim
        for (j = 0; j < NEXYS_CONFIG.NUM_WB_GROUPS; j++) begin
            if (FPGA_VENDOR == XILINX)
                assign translation[i] = cpu.renamer_block.spec_table_ram.xilinx_gen.ram[i];
            else if (FPGA_VENDOR == INTEL)
                assign translation[i] = cpu.renamer_block.spec_table_ram.intel_gen.lutrams[0].write_port.ram[i];

            assign sim_registers_unamed_groups[j][i] = 
            cpu.register_file_block.register_file_gen[j].reg_group.register_file_bank[translation[i].phys_addr];
        end
        assign sim_registers_unamed[31-i] = sim_registers_unamed_groups[translation[i].wb_group][i];
    end
    endgenerate

    assign NUM_RETIRE_PORTS = RETIRE_PORTS;
    generate for (genvar i = 0; i < RETIRE_PORTS; i++) begin
        assign retire_ports_pc[i] = cpu.id_block.pc_table[cpu.retire_ids[i]];
        assign retire_ports_instruction[i] = cpu.id_block.instruction_table[cpu.retire_ids[i]];
        assign retire_ports_valid[i] = cpu.retire_port_valid[i];
    end endgenerate

    assign store_queue_empty = cpu.load_store_status.sq_empty;

    ////////////////////////////////////////////////////
    //Assertion Binding

endmodule


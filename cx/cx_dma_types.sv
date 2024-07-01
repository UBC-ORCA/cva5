package cx_dma_types;

  localparam MEM_PORTS      = 2;
  localparam MEM_ADDR_WIDTH = 32;
  localparam MEM_DATA_WIDTH = 64;
  localparam TRACK_ID_WIDTH = 4;
  localparam STATE_ID_WIDTH = 8;
  localparam MEM_ID_WIDTH   = TRACK_ID_WIDTH + STATE_ID_WIDTH;

  typedef logic [MEM_ADDR_WIDTH-1:0] virt_addr_t;
  typedef logic [TRACK_ID_WIDTH-1:0] track_id_t;
  typedef logic [STATE_ID_WIDTH-1:0] state_id_t;
  typedef logic [3-1:0]              mem_size_t;
  typedef logic [32-1:0]             mem_stride_t;

  typedef struct packed {
    logic rw;
    virt_addr_t base_address;
    virt_addr_t end_address;
  } track_entry_t;

  typedef struct packed {
    virt_addr_t base_address;
    virt_addr_t end_address;
    mem_size_t size;
    mem_stride_t stride;
  } mem_packet_t;

  typedef struct packed {
    state_id_t state;
    track_id_t track;
  } mem_id_t;

  typedef enum bit {
    READ  = 0,
    WRITE = 1
  } mem_port_t;

endpackage

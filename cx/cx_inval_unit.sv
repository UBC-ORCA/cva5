module cx_inval_unit
  (
    input  logic i_clk,
    input  logic i_rst,
    output logic o_ready,
    input  logic i_valid,
    input  logic [32-1:0] i_base_address,
    input  logic [32-1:0] i_end_address,

    input  logic inv_ack,
    output logic inv_valid,
    output logic [32-1:0] inv_addr
  );

  logic [32-1:0] end_address;
  logic [32-1:0] cur_address;

  enum int unsigned {S_START, S_PROCESS} state;

  always_ff @(posedge i_clk) begin
    unique case (state)

      S_START: begin
        if (i_valid) begin
          state <= S_PROCESS;
          cur_address <= i_base_address;
          end_address <= i_end_address;
        end
      end

      S_PROCESS: begin
        if (inv_ack) begin
          cur_address <= cur_address + 8;
          if ((cur_address + 8) > end_address) begin
            state <= S_START;
          end
        end
      end

    endcase

    if (i_rst) begin
      state <= S_START;
      cur_address <= '0;
      end_address <= '0;
    end
  end

  assign inv_valid = state == S_PROCESS;
  assign inv_addr  = cur_address;

  assign o_ready = state == S_START;

endmodule

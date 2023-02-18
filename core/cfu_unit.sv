module cfu_unit
    (
      input logic clk,
      input logic rst,
      cfu_interface cfu
    );

    logic cfu_busy;

    always_ff @(posedge clk) begin
        if (rst)
            cfu_busy <= 0;
        else
            cfu_busy <= (cfu_busy & ~cfu.resp_ready) | cfu.req_valid;
    end

    always_ff @(posedge clk) begin
      if (cfu.resp_valid & cfu.resp_ready)
        cfu.resp_valid  <= 0;

      if (cfu.req_valid & ~cfu_busy) begin
        cfu.resp_id     <= cfu.req_id;
        cfu.resp_data   <= (~cfu.req_data0 & ~cfu.req_data1) | (cfu.req_data0 & cfu.req_data1);
        cfu.resp_status <= 0;
        cfu.resp_valid  <= 1;
      end

      if (rst)
        cfu.resp_valid  <= 0;
    end

    assign cfu.req_ready = ~cfu_busy;
    
endmodule


interface cfu_fifo_interface #(parameter DATA_WIDTH = 42);//#(parameter type data_type = logic[31:0]);
    logic push;
    logic pop;
    logic [DATA_WIDTH-1:0] data_in;
    logic [DATA_WIDTH-1:0] data_out;
    logic valid;
    logic full;
    logic potential_push;
    //modport enqueue (input full, output data_in, push, potential_push);
    //modport dequeue (input valid, data_out, output pop);
    //modport structure(input push, pop, data_in, potential_push, output data_out, valid, full);

    modport master(output push, pop, data_in, potential_push,
                   input valid, full, data_out);
     modport slave(input push, pop, data_in, potential_push,
                   output valid, full, data_out);

endinterface
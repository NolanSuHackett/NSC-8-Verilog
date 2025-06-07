module accumulator #(parameter X = 8)(
    input wire [X-1:0] data_in,
    input wire load_immediate_a,
    input wire clk,
    input wire load_a,
    input wire output_enable,
    output wire [X-1:0] data_out
);


wire write_enable_upper = load_a;

wire write_enable_lower = load_a | load_immediate_a;

wire [X-1:0] a_reg_out;

n_bit_register #(X/2) upper_nibble_a(
    .data_in(data_in[(X-1):(X/2)]),
    .clk(clk),
    .clear(load_immediate_a),
    .write_enable(write_enable_upper),
    .data_out(a_reg_out[(X-1):(X/2)]) //upper bit output
);

n_bit_register #(X/2) lower_nibble_a(
    .data_in(data_in[(X/2)-1:0]),
    .clear(1'b0),
    .clk(clk),
    .write_enable(write_enable_lower),
    .data_out(a_reg_out[(X/2)-1:0])
);

n_tristate_buffer #(X) tristate_buffer(
    .in_data(a_reg_out[X-1:0]),
    .control_bit(output_enable),
    .out_data(data_out)
);

endmodule


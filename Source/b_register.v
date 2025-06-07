
module b_register #(parameter N = 8) (
    input wire [N-1:0] data_in,
    input wire clk,
    input wire load_b,
    input wire load_immediate_b,
    output wire [N-1:0] data_out
);

wire write_enable_upper = load_b;

wire write_enable_lower = load_immediate_b | load_b;



n_bit_register #(N/2) upper_nibble_b (
    .data_in(data_in[N-1:N/2]),
    .clk(clk),
    .clear(load_immediate_b),
    .write_enable(write_enable_upper),
    .data_out(data_out[N-1:N/2])

);

n_bit_register #(N/2) lower_nibble_b (
    .data_in(data_in[(N/2)-1:0]),
    .clk(clk),
    .write_enable(write_enable_lower),
    .clear(1'b0),
    .data_out(data_out[(N/2)-1:0])

);


endmodule



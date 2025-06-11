module output_register #(parameter N=8) (
    input wire [N-1:0] data_in,
    input wire clk,
    input wire write_enable_output,
    output [N-1:0] data_out
);

n_bit_register #(N) output_reg (
    .data_in(data_in),
    .data_out(data_out),
    .clk(clk),
    .write_enable(write_enable_output),
    .clear(0)

);
endmodule
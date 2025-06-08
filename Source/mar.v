module mar #(parameter N = 4) (
    input wire load_mar,
    input wire clk,
    input wire [N-1:0] data_in,
    output wire [N-1:0] data_out

);

n_bit_register #(N) mar_register (
    .write_enable(load_mar),
    .clk(clk),
    .data_in(data_in),
    .data_out(data_out),
    .clear(1'b0)
);

endmodule
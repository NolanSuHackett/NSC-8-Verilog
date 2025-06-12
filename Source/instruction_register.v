module instruction_register #(parameter N = 8) (
    input wire [N-1:0] data_in,
    input wire clk,
    input wire output_enable_ir,
    input wire load_ir,
    input wire clear_ir,
    output wire [(N/2)-1:0] bus_output,
    output wire [(N/2)-1:0] controller_output

);

wire [(N/2)-1:0] buffer_input;

n_bit_register #(N/2) upper_nibble_ir (
    .clk(clk),
    .write_enable(load_ir),
    .data_in(data_in[N-1:N/2]),
    .data_out(controller_output),
    .clear(clear_ir)

);

n_bit_register #(N/2) lower_nibble_ir (
    .clk(clk),
    .write_enable(load_ir),
    .data_in(data_in[(N/2)-1:0]),
    .data_out(buffer_input),
    .clear(clear_ir)
);


n_tristate_buffer #(N/2) bus_buffer (
    .control_bit(output_enable_ir),
    .in_data(buffer_input),
    .out_data(bus_output)

);

endmodule
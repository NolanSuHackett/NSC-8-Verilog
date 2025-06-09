module alu #(parameter N = 8) (
    input wire output_alu,
    input wire subtract_enable, //if off assume add instruction
    input wire [N-1:0] data_in_a,
    input wire [N-1:0] data_in_b,
    output wire [N-1:0] data_out


);

reg [N-1:0] result;

n_tristate_buffer #(N) alu_buffer(
    .control_bit(output_alu),
    .in_data(result),
    .out_data(data_out)
);


always @(*) begin
    if (subtract_enable) begin
        result = data_in_a - data_in_b;
    end
    else begin
        result = data_in_a + data_in_b;
    end

end
endmodule

module n_tristate_buffer #(parameter N = 4) (
    input wire control_bit,
    input wire [N-1:0] in_data,
    output wire [N-1:0] out_data

);

genvar i;

generate
    for(i = 0; i < N; i = i + 1) begin : tri_state
        assign out_data[i] = control_bit ? in_data[i] : 1'bz;
    end
endgenerate

endmodule
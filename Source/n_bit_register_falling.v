module n_bit_register_falling #(parameter N=8) (
    input wire [N-1:0] data_in,
    input wire write_enable,
    input wire clk,
    input wire clear,
    output reg [N-1:0] data_out

);
    always @(negedge clk) begin
        if (clear)
            data_out <= {N{1'b0}};
        if (write_enable)
            data_out <= data_in;
    end
endmodule

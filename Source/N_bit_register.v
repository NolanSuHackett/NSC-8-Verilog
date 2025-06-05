module N_bit_register #(parameter N=8) (
    input wire [N-1:0] data_in,
    input wire write_enable,
    input wire clk,
    output reg [N-1:0] data_out

);
    always @(posedge clk) begin
        if (write_enable)
            data_out <= data_in;
    end
endmodule

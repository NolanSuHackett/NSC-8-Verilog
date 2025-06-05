`timescale 1ns/1ps


module tb_n_tristate_buffer;

parameter N = 4;
reg control_bit;
reg [N-1:0] in_data;
reg clk;
wire [N-1:0] out_data;

n_tristate_buffer #(N) uut(
    .control_bit(control_bit),
    .in_data(in_data),
    .out_data(out_data)

);

always #5 clk = ~clk;

initial begin
    $dumpfile ("tb_n_tristate_buffer.vcd");
    $dumpvars (0, tb_n_tristate_buffer);

    clk = 0;
    control_bit = 0;
    in_data     = 4'b0000;

    #10;
    control_bit = 1;
    in_data = 4'b1001;
    #10;
    control_bit = 0;
    in_data = 4'b0010;
    #10;
    control_bit = 1;
    in_data = 4'b1111;
    #10

    $finish;
end

endmodule



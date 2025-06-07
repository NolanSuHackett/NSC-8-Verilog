`timescale 1ns/1ps

module tb_b_register;

    parameter N = 8;

    reg clk;
    reg load_immediate_b;
    reg load_b;
    reg [N-1:0] data_in;
    wire [N-1:0] data_out;

b_register #(N) uut (
    .clk(clk),
    .load_immediate_b(load_immediate_b),
    .load_b(load_b),
    .data_in(data_in),
    .data_out(data_out)

);

always #5 clk = ~clk;

initial begin

    $dumpfile ("tb_b_register.vcd");
    $dumpvars (0, tb_b_register);

    clk = 0;
    data_in = {N{1'b0}};
    load_immediate_b = 0;
    load_b = 0;


    #10;
    data_in = 8'b11111111;
    load_b = 0;
    load_immediate_b = 0;
    //Output expected XX
    #10;
    data_in = 8'b11111111;
    load_b = 1;
    load_immediate_b = 0;
    //expected FF
    #10;
    data_in = 8'b11111111;
    load_b = 0;
    load_immediate_b = 1;
    //expected 0F
    #10
    data_in = 8'b11111111;
    load_b = 0;
    load_immediate_b = 0;
    //expected 0F
    #10

    $finish;
end
endmodule



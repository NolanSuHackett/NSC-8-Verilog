`timescale 1ns/1ps

module tb_alu;

    parameter N = 8;
    reg output_alu;
    reg subtract_enable;
    reg [N-1:0] data_in_a;
    reg [N-1:0] data_in_b;
    reg clk;
    wire [N-1:0] data_out;

alu #(N) uut (
    .output_alu(output_alu),
    .subtract_enable(subtract_enable),
    .data_in_a(data_in_a),
    .data_in_b(data_in_b),
    .data_out(data_out)
);

always #5 clk = ~clk;

initial begin
    $dumpfile ("tb_alu.vcd");
    $dumpvars (0, tb_alu);

    output_alu=0;
    subtract_enable=0;
    data_in_a = {N{1'b0}};
    data_in_b = {N{1'b0}};
    clk = 0;

    #10; //Testing add (FF)
    output_alu=1;
    subtract_enable=0;
    data_in_a = 8'b00001111;
    data_in_b = 8'b11110000;
    clk = 1;
    #10; //Testing add (E7)
    output_alu=1;
    subtract_enable=0;
    data_in_a = 8'b00000111;
    data_in_b = 8'b11100000;
    clk = 1;
    #10; //Testing add (0F)
    output_alu=1;
    subtract_enable=0;
    data_in_a = 8'b00001111;
    data_in_b = 8'b00000000;
    clk = 1;
    #10; //Testing subtract (70)
    output_alu=1;
    subtract_enable=1;
    data_in_a = 8'b11111111;
    data_in_b = 8'b10001111;
    clk = 1;
    #10; //Testing subtract (0F)
    output_alu=1;
    subtract_enable=1;
    data_in_a = 8'b11111111;
    data_in_b = 8'b11110000;
    clk = 1;
    #10;

    $finish;
end
endmodule

    

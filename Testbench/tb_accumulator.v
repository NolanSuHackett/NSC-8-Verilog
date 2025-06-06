`timescale 1ns/1ps

module tb_accumulator;  
    parameter X = 8;

    reg [X-1:0] data_in;
    reg load_immediate_a;
    reg clk;
    reg load_a;
    reg output_enable;
    wire [X-1:0] data_out;


accumulator #(.X(X)) uut (
.data_in(data_in),
.load_immediate_a(load_immediate_a),
.clk(clk),
.load_a(load_a),
.output_enable(output_enable),
.data_out(data_out)

);

always #5 clk = ~clk;

initial begin
    $dumpfile ("tb_accumulator.vcd");
    $dumpvars (0, tb_accumulator);

    clk = 0;
    output_enable=0;
    load_immediate_a=0;
    load_a=0;
    data_in = {X{1'b0}};

    #10;

    data_in = 8'b11111111;
    output_enable = 1;
    load_a = 1;
    load_immediate_a=0;

    #10;

    data_in = 8'b11111111;
    output_enable = 1;
    load_immediate_a = 1;
    load_a = 0;

    #10;

    data_in = 8'b10001111;
    output_enable = 0;
    load_a = 1;
    load_immediate_a = 0;

    #10;
    $finish;

end
endmodule




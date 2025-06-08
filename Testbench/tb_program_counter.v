`timescale 1ns/1ps


module tb_program_counter;

parameter N = 4;
reg clk;
reg jump;
reg [N-1:0] data_in;
reg output_enable;
reg count;
reg reset_counter;
wire [N-1:0] data_out;

program_counter #(N) uut (
    .clk(clk),
    .jump(jump),
    .data_in(data_in),
    .output_enable(output_enable),
    .count(count),
    .data_out(data_out),
    .reset_counter(reset_counter)
);


always #5 clk = ~clk;

initial begin
    $dumpfile ("tb_program_counter.vcd");
    $dumpvars (0, tb_program_counter);

    clk = 0;
    jump = 0;
    data_in = {N{1'b0}};
    output_enable = 0;
    count = 0;
    reset_counter = 0;

    #10; // set counter to 0
    clk = 1;
    jump = 0;
    data_in = 4'b1001;
    output_enable = 0;
    count = 0;
    reset_counter = 1;
    #10; // Testing count 
    clk = 1;
    jump = 0;
    data_in = 4'b1001;
    output_enable = 0;
    count = 1;
    reset_counter = 0;
    #10; // Testing output
    clk = 1;
    jump = 0;
    data_in = 4'b1001;
    output_enable = 1;
    count = 0;
    reset_counter = 0;
    #10; // Testing count 
    clk = 1;
    jump = 0;
    data_in = 4'b1001;
    output_enable = 0;
    count = 1;
    reset_counter = 0;
    #10; // Testing output
    clk = 1;
    jump = 0;
    data_in = 4'b1001;
    output_enable = 1;
    count = 0;
    reset_counter = 0;
    #10; // Testing jump
    clk = 1;
    jump = 1;
    data_in = 4'b1001;
    output_enable = 0;
    count = 0;
    reset_counter = 0;
    #10; // Testing output
    clk = 1;
    jump = 0;
    data_in = 4'b1001;
    output_enable = 1;
    count = 0;
    reset_counter = 0;
    #10;

$finish;
end
endmodule

`timescale 1ns/1ps

module tb_ring_counter;

    parameter N = 6;
    reg reset_ring;
    reg clk;
    wire [N-1:0] count_out;


ring_counter #(N) uut (
    .reset_ring(reset_ring),
    .clk(clk),
    .count_out(count_out)
);

always #5 clk = ~clk;

initial begin 
    $dumpfile ("tb_ring_counter.vcd");
    $dumpvars (0, tb_ring_counter);

    clk = 0;
    reset_ring = 0;

    #10; //setting ring to start state
    clk = 1;
    reset_ring = 1;
    #10; //letting it count
    clk = 1;
    reset_ring = 0;
    #10; //letting it count
    clk = 1;
    reset_ring = 0;
    #10; //letting it count
    clk = 1;
    reset_ring = 0;
    #10; //letting it count
    clk = 1;
    reset_ring = 0;
    #10; //letting it count
    clk = 1;
    reset_ring = 0;
    #10; //letting it count
    clk = 1;
    reset_ring = 0;
    #10; //letting it count
    clk = 1;
    reset_ring = 0;
    #10; //letting it count
    clk = 1;
    reset_ring = 0;
    #10;

    $finish;
end
endmodule
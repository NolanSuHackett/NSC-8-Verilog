`timescale 1ns/1ps

module tb_NSC8;

parameter N = 8;
reg clk;
reg reset_counter;
reg reset_ring;
reg clear_ir;
wire [N-1:0] output_contents;

NSC8 #(N) uut (
    .clk(clk),
    .reset_counter(reset_counter),
    .reset_ring(reset_ring),
    .output_contents(output_contents),
    .clear_ir(clear_ir)
);

always #5 clk = ~clk;

initial begin
    $dumpfile ("tb_NSC8.vcd");
    $dumpvars (0, tb_NSC8);

    clk = 0;
    reset_counter = 0;
    reset_ring = 0;
    clear_ir = 0;

    #10;
    reset_ring = 1;
    reset_counter = 1;
    clear_ir = 1;
    #10;
    reset_ring = 0;
    reset_counter = 0;
    clear_ir = 0;
    #1000;

$finish;
end
endmodule






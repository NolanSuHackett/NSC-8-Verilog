`timescale 1ns/1ps

module tb_controller;

    reg [3:0] instruction;
    reg reset_ring;
    reg base_clk;

    wire count;
    wire pc_output_enable;
    wire load_mar;
    wire output_enable_ram;
    wire load_ir;
    wire output_enable_ir;
    wire load_a;
    wire output_enable_a;
    wire subtract_enable;
    wire output_alu;
    wire load_b;
    wire write_enable_output;
    wire load_immediate_a;
    wire load_immediate_b;
    wire store;
    wire jump;
    wire clk;

controller uut (
    .instruction(instruction),
    .base_clk(base_clk),
    .reset_ring(reset_ring),
    .count(count),
    .pc_output_enable(pc_output_enable),
    .load_mar(load_mar),
    .output_enable_ram(output_enable_ram),
    .load_ir(load_ir),
    .output_enable_ir(output_enable_ir),
    .load_a(load_a),
    .output_enable_a(output_enable_a),
    .subtract_enable(subtract_enable),
    .output_alu(output_alu),
    .load_b(load_b),
    .write_enable_output(write_enable_output),
    .load_immediate_a(load_immediate_a),
    .load_immediate_b(load_immediate_b),
    .store(store),
    .jump(jump),
    .clk(clk)
);

always #5 base_clk = ~base_clk;

initial begin
    $dumpfile ("tb_controller.vcd");
    $dumpvars (0, tb_controller);

    instruction = 4'b0000;
    reset_ring = 0;
    base_clk = 0;


     #10; // resetting ring to start position
    instruction  = 4'b0000;
    reset_ring   = 1;
    #10; // Testing LDA
    instruction  = 4'b0000;
    reset_ring   = 0;

    #50; // Testing ADD
    instruction  = 4'b0001;
    #60;

    #60; // Testing SUB
    instruction  = 4'b0010;
    #60;

    #60; // Testing LDAI
    instruction  = 4'b0011;
    #60;

    #60; // Testing STA
    instruction  = 4'b0100;
    #60;

    #60; // Testing ADDI
    instruction  = 4'b0101;
    #60;

    #60; // Testing SUBI
    instruction  = 4'b0110;
    #60;

    #60; // Testing JUMP
    instruction  = 4'b0111;
    #60;

    #60; // Testing OUT
    instruction  = 4'b1110;
    #60;

    #60; // Testing HLT
    instruction  = 4'b1111;
    #60;

    $finish;
    
end
endmodule




`timescale 1ns/1ps

module tb_ram;

    parameter N = 8;
    parameter mem_file = "Source/og_set.mem";
    reg clk;
    reg [N/2-1:0] memory_address;
    reg [N-1:0] data_in;
    reg store;
    reg output_enable_ram;
    wire [N-1:0] data_out;

ram #(.N(N), .mem_file(mem_file)) uut (
    .clk(clk),
    .memory_address(memory_address),
    .data_in(data_in),
    .store(store),
    .output_enable_ram(output_enable_ram),
    .data_out(data_out)

);

always #5 clk = ~clk;

initial begin
    $dumpfile ("tb_ram_vcd");
    $dumpvars (0, tb_ram);
//fix

    clk = 0;
    memory_address = 4'b0000;
    data_in = 8'b00000000;
    store = 0;
    output_enable_ram = 0;

    #10; //output enable on row 0: should output 09
    clk = 1;
    memory_address = 4'b0000;
    data_in = 8'b11111111;
    store = 0;
    output_enable_ram = 1;
    #10; //overwrite row 0: should have high impedance output RAM[0] = FF
    clk = 1;
    memory_address = 4'b0000;
    data_in = 8'b11111111;
    store = 1;
    output_enable_ram = 0;
    #10; //output enable on row 0: should output FF
    clk = 1;
    memory_address = 4'b0000;
    data_in = 8'b11111111;
    store = 0;
    output_enable_ram = 1;
    #10; //output enable on row 1: should output 1a
    clk = 1;
    memory_address = 4'b0001;
    data_in = 8'b11111111;
    store = 0;
    output_enable_ram = 1;
    #10;

    $finish;
end
endmodule






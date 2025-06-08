`timescale 1ns/1ps

module tb_instruction_register;

    parameter N = 8;
    reg [N-1:0] data_in;
    reg clk;
    reg output_enable_ir;
    reg load_ir;
    wire [(N/2)-1:0] bus_output;
    wire [(N/2)-1:0] controller_output;

instruction_register #(N) uut (
    .data_in(data_in),
    .clk(clk),
    .output_enable_ir(output_enable_ir),
    .load_ir(load_ir),
    .bus_output(bus_output),
    .controller_output(controller_output)
);

always #5 clk = ~clk;

initial begin
    $dumpfile ("tb_instruction_register.vcd");
    $dumpvars (0, tb_instruction_register);

    clk = 0;
    data_in = {N{1'b0}};
    output_enable_ir = 0;
    load_ir = 0;
    
    #10; //testing load off(should output nothing on bus and controller)
    clk = 1;
    data_in = 8'b10010001;
    output_enable_ir = 1;
    load_ir = 0;
    #10; //testing load, without outputting, should output to controller but not bus
    clk = 1;
    data_in = 8'b10010001;
    output_enable_ir = 0;
    load_ir = 1;
    #10; //testing output to bus
    clk = 1;
    data_in = 8'b10010001;
    output_enable_ir = 1;
    load_ir = 0;
    #10; //testing another load, should output to controller but not bus
    clk = 1;
    data_in = 8'b11111111;
    output_enable_ir = 0;
    load_ir = 1;
    #10; //testing output to bus (data should be irrelevant, should output to controller and bus)
    clk = 1;
    data_in = 8'b10010001;
    output_enable_ir = 1;
    load_ir = 0;
    #10;

$finish;
end
endmodule


    
    
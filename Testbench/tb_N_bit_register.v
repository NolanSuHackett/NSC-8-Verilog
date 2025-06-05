`timescale 1ns/1ps

module tb_n_bit_register;
    parameter N = 8;
    reg clk;
    reg [N-1:0] data_in;
    reg write_enable;
    wire [N-1:0] data_out;

    n_bit_register #(N) uut
    (
        .data_in(data_in),
        .write_enable(write_enable),
        .clk(clk),
        .data_out(data_out) 
    );

    always #5 clk = ~clk;

    initial begin
        $dumpfile("tb_n_bit_register.vcd");  // for GTKWave
        $dumpvars(0, tb_n_bit_register);

        clk = 0;
        write_enable = 0;
        data_in = 8'b00000000;


        #10;
        write_enable = 1;
        data_in = 8'b11111111;
        #10;


        write_enable = 0;
        data_in = 8'b00001111;
        #10;

        $finish;
    end
endmodule


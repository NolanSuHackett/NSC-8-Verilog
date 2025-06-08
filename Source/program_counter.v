module program_counter #(parameter N = 4) (

    input wire clk,
    input wire jump,
    input wire [N-1:0] data_in,
    input wire output_enable,
    input wire count,
    input wire reset_counter,
    output wire [N-1:0] data_out
);


reg [N-1:0] counter_contents;


n_tristate_buffer #(N) tristate_buffer(
    .control_bit(output_enable),
    .in_data(counter_contents),
    .out_data(data_out)
);



always @(negedge clk) begin
    if (count) begin
        counter_contents <= counter_contents + 1;
    end
    
    else if (reset_counter) begin
        counter_contents <= {N{1'b0}};
    end

    else if (jump) begin
        counter_contents <= data_in;
    end 

end
endmodule 


//on start it should have 4'b0000

//when to action:
//1. Falling edge of clock and count
//2. jump
//3. output_enable

//behaviour:
//1. increment registers by 1
//2. copy value of data_in to the value of register 
//3. register value is sent onto the bus 

//
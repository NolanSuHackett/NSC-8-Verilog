module ram #(
    parameter N = 8,
    parameter mem_file = "og_set.mem"
)(
    input wire clk, //rising edge
    input wire [N/2-1:0] memory_address, //dependent on number of rows
    input wire [N-1:0] data_in,
    input wire store,
    input wire output_enable_ram,
    output wire [N-1:0] data_out

);

reg [N-1:0] ram_array [0:(1<<(N/2))-1];

initial begin
    $readmemh(mem_file, ram_array);
    $display("RAM initialized from %s", mem_file);
end

n_tristate_buffer #(N) ram_buffer (
    .control_bit(output_enable_ram),
    .in_data(ram_array[memory_address]),
    .out_data(data_out)

);
//need to be able to read memory, write memory, and output memory

always @(posedge clk) begin
    if (store) begin
        ram_array[memory_address] <= data_in;
    end
end 
endmodule

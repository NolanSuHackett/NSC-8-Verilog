module ring_counter #(parameter N = 6)(
    input wire reset_ring,
    input wire clk,
    output reg [N-1:0] count_out

);

// reg [N-1:0] ring_contents;



always @(negedge clk) begin
    if (reset_ring) begin
        count_out <= {1'b1, {(N-1){1'b0}}};
    end 
    else begin
        count_out <= {count_out[0], count_out[N-1:1]};
    end 
end
endmodule
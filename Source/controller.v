module controller  (
    input wire [3:0] instruction,
    input wire base_clk,
    input wire reset_ring,
    output reg count,
    output reg pc_output_enable,
    output reg load_mar,
    output reg output_enable_ram,
    output reg load_ir,
    output reg output_enable_ir,
    output reg load_a,
    output reg output_enable_a,
    output reg subtract_enable,
    output reg output_alu,
    output reg load_b,
    output reg write_enable_output,
    output reg load_immediate_a,
    output reg load_immediate_b,
    output reg store,
    output reg jump,
    output wire clk
);



wire LDA = (instruction == 4'b0000);
wire ADD = (instruction == 4'b0001);
wire SUB = (instruction == 4'b0010);
wire LDAI = (instruction == 4'b0011);
wire STA = (instruction == 4'b0100);
wire ADDI = (instruction == 4'b0101);
wire SUBI = (instruction == 4'b0110);
wire JUMP = (instruction == 4'b0111);
wire OUT = (instruction == 4'b1110);
wire HLT = (instruction == 4'b1111);

wire output_clock = base_clk & ~HLT;

wire [5:0] timing;

assign clk = output_clock;

ring_counter #(6) ring_counter_controller (
    .reset_ring(reset_ring),
    .clk(output_clock),
    .count_out(timing)

); 



always @(*) begin
// Default all outputs to 0
count = 0;
pc_output_enable = 0;
load_mar = 0;
output_enable_ram = 0;
load_ir = 0;
output_enable_ir = 0;
load_a = 0;
output_enable_a = 0;
subtract_enable = 0;
output_alu = 0;
load_b = 0;
write_enable_output = 0;
load_immediate_a = 0;
load_immediate_b = 0;
store = 0;
jump = 0;

//T1
if (timing[5]) begin
pc_output_enable = 1'b1;
load_mar = 1'b1;
end 
//T2
if (timing[4]) begin
    count = 1'b1;
end 
//T3
if (timing[3]) begin
    output_enable_ram = 1'b1;
    load_ir = 1'b1;
end

//T4
if (timing[2]) begin
    if (LDA || ADD || SUB || LDAI || STA || ADDI || SUBI || JUMP) begin
        output_enable_ir = 1'b1;
    end
    if (LDA || STA || ADD || SUB) begin
        load_mar = 1;
    end
    if (LDAI) begin
        load_immediate_a = 1;
    end
    if (ADDI || SUBI) begin
        load_immediate_b = 1;
    end
    if (JUMP) begin
        jump = 1;
    end
    if (OUT) begin
        output_enable_a = 1;
        write_enable_output=1;
    end
end

//T5
if (timing[1]) begin
    if (LDA || ADD || SUB) begin
        output_enable_ram = 1;

    end
    if (ADD || SUB) begin
        load_b = 1;
    end

    if (STA) begin
        output_enable_a = 1;
        store = 1;
    end

    if (SUBI) begin
        subtract_enable = 1;
    end

    if (ADDI || SUBI || LDA) begin
        load_a = 1;
    end

    if (ADDI || SUBI) begin
        output_alu=1;
    end
end

//T6
if (timing[0]) begin
    if (SUB) begin
        subtract_enable = 1;
    end
    if(ADD || SUB) begin
        output_alu = 1;
        load_a = 1;
    end
end
end 
endmodule

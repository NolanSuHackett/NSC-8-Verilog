module NSC8 #(parameter N = 8)(
    input wire clk,
    input wire reset_counter,
    input wire reset_ring,
    input wire clear_ir,
    output wire [N-1:0] output_contents
);

wire [N-1:0] data_bus;

//Direct connection from mar to ram
wire [(N/2)-1:0] mar_to_ram;

//intermediate wire between instruction register top nibble and controller instruction
wire [(N/2)-1:0] ir_to_controller;

//intermediate wire between Accumulator A and the ALU (direct connection)
wire [N-1:0] a_to_alu;

//intermediate wire between b register and the ALU (Direct connection)
wire [N-1:0] b_to_alu;

//All Controller output intermediates:
  wire count_w;
  wire pc_output_enable_w;
  wire load_mar_w;
  wire output_enable_ram_w;
  wire load_ir_w;
  wire output_enable_ir_w;
  wire load_a_w;
  wire output_enable_a_w;
  wire subtract_enable_w;
  wire output_alu_w;
  wire load_b_w;
  wire write_enable_output_w;
  wire load_immediate_a_w;
  wire load_immediate_b_w;
  wire store_w;
  wire jump_w;
  wire clk_decode_w;

controller ctrl(
    .instruction       (ir_to_controller),
    .base_clk          (clk),//takes clock input from NSC8 module
    .reset_ring        (reset_ring),
    .count             (count_w),
    .pc_output_enable  (pc_output_enable_w),
    .load_mar          (load_mar_w),
    .output_enable_ram (output_enable_ram_w),
    .load_ir           (load_ir_w),
    .output_enable_ir  (output_enable_ir_w),
    .load_a            (load_a_w),
    .output_enable_a   (output_enable_a_w),
    .subtract_enable   (subtract_enable_w),
    .output_alu        (output_alu_w),
    .load_b            (load_b_w),
    .write_enable_output (write_enable_output_w),
    .load_immediate_a  (load_immediate_a_w),
    .load_immediate_b  (load_immediate_b_w),
    .store             (store_w),
    .jump              (jump_w),
    .clk_decode        (clk_decode_w)

);


program_counter #(N/2) pc(
    .clk(clk_decode_w),
    .jump(jump_w),
    .data_in(data_bus[(N/2)-1:0]),
    .output_enable(pc_output_enable_w),
    .count(count_w),
    .reset_counter(reset_counter),
    .data_out(data_bus[(N/2)-1:0])

);

mar #(N/2) mar0 (
    .load_mar(load_mar_w),
    .clk(clk_decode_w),
    .data_in(data_bus[(N/2)-1:0]),
    .data_out(mar_to_ram)

);


//Program options: "new_set.mem", "og_set.mem"
ram #(.N(N) , .mem_file("Source/new_set.mem")) ram0 (
    .clk(clk_decode_w),
    .memory_address(mar_to_ram),
    .data_in(data_bus),
    .store(store_w),
    .output_enable_ram(output_enable_ram_w),
    .data_out(data_bus)
);


instruction_register #(N) ir (
    .data_in(data_bus),
    .clk(clk_decode_w),
    .output_enable_ir(output_enable_ir_w),
    .load_ir(load_ir_w),
    .clear_ir(clear_ir),
    .bus_output(data_bus[(N/2)-1:0]),
    .controller_output(ir_to_controller)
);

accumulator #(N) a_reg (
    .data_in(data_bus),
    .load_immediate_a(load_immediate_a_w),
    .clk(clk_decode_w),
    .load_a(load_a_w),
    .output_enable(output_enable_a_w),
    .data_out_bus(data_bus),
    .data_out_alu(a_to_alu)
);

alu #(N) alu_reg (
    .output_alu(output_alu_w),
    .subtract_enable(subtract_enable_w),
    .data_in_a(a_to_alu),
    .data_in_b(b_to_alu),
    .data_out(data_bus)
);

b_register #(N) b_reg(
    .data_in(data_bus),
    .clk(clk_decode_w),
    .load_b(load_b_w),
    .load_immediate_b(load_immediate_b_w),
    .data_out(b_to_alu)
);

output_register #(N) out_reg (
    .data_in(data_bus),
    .clk(clk_decode_w),
    .write_enable_output(write_enable_output_w),
    .data_out(output_contents)

);

endmodule
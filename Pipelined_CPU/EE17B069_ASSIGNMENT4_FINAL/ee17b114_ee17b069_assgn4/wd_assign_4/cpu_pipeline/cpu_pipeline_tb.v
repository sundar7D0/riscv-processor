`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:49:21 11/12/2019
// Design Name:   cpu_final
// Module Name:   /home/pruthvirg/Desktop/sem_fire/comp_org/wd_assign_4/cpu_pipeline/cpu_pipeline_tb.v
// Project Name:  cpu_pipeline
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cpu_final
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cpu_pipeline_tb;

	// Inputs
	reg reset;
	reg clk;

	// Outputs
	wire RegWrite_I,ALUSrc_I,MemToReg_I,Jump_I,auipc_I,jalr_I,MemWrite_I,RegWrite_test;;
	wire [1:0] we_I;
	wire [2:0] load_type_I,hazard_type_I,current_instruction_type;
	wire [4:0] RegDst_I;
	wire [6:0] ALUop_I;
	wire [31:0] pc,x31_I,Instruction,imm_I,rv1_I,rv2_I,indata_parsed;
	
	wire MemToReg_EX,MemWrite_EX,Jump_EX,auipc_EX,jalr_EX,RegWrite_EX,alu_zero;
	wire [1:0] we_EX;
	wire [2:0] load_type_EX;
	wire [4:0] RegDst_EX;
	wire [31:0] imm_EX,daddr_EX,dwdata_EX,pc_EX;
	
	wire MemToReg_MEM,Jump_MEM,auipc_MEM,jalr_MEM,RegWrite_MEM;
   wire [2:0] load_type_MEM;
	wire [4:0] RegDst_MEM;
   wire  [31:0] imm_MEM,dmem_out_MEM,daddr_MEM,pc_MEM,d0;
	
	wire MemToReg_MEM_WB_reg_wire,Jump_MEM_WB_reg_wire,auipc_MEM_WB_reg_wire,jalr_MEM_WB_reg_wire,RegWrite_MEM_WB_reg_wire;
	wire [2:0] load_type_MEM_WB_reg_wire;
	wire [4:0] RegDst_MEM_WB_reg_wire;
	wire [31:0] imm_MEM_WB_reg_wire,dmem_out_MEM_WB_reg_wire,daddr_MEM_WB_reg_wire,pc_MEM_WB_reg_wire;


	// Instantiate the Unit Under Test (UUT)
	cpu_final uut (
		
		.reset(reset), 
		.clk(clk),
		.pc_I(pc), 
		.x31_I(x31_I),
		.Instruction(Instruction),
		.RegWrite_I(RegWrite_I),
		.ALUSrc_I(ALUSrc_I),
		.MemToReg_I(MemToReg_I),
		.Jump_I(Jump_I),
		.auipc_I(auipc_I),
		.jalr_I(jalr_I),
		.MemWrite_I(MemWrite_I),
		.we_I(we_I),
		.load_type_I(load_type_I),
		.hazard_type_I(hazard_type_I),
		.ALUop_I(ALUop_I),
		.RegDst_I(RegDst_I),
		.imm_I(imm_I),
		.rv1_I(rv1_I),
		.rv2_I(rv2_I),
		.current_instruction_type(current_instruction_type),
		.indata_parsed(indata_parsed),
		.RegWrite_test(RegWrite_test),
		
		
		.MemToReg_EX(MemToReg_EX),
		.MemWrite_EX(MemWrite_EX),
		.Jump_EX(Jump_EX),
		.auipc_EX(auipc_EX),
		.jalr_EX(jalr_EX),
		.RegWrite_EX(RegWrite_EX),
		.alu_zero(alu_zero),
		.we_EX(we_EX),
		.load_type_EX(load_type_EX),
		.RegDst_EX(RegDst_EX),
		.imm_EX(imm_EX),
		.daddr_EX(daddr_EX),
		.dwdata_EX(dwdata_EX),
		.pc_EX(pc_EX),
		
		
		.MemToReg_MEM(MemToReg_MEM),
		.Jump_MEM(Jump_MEM),
		.auipc_MEM(auipc_MEM),
		.jalr_MEM(jalr_MEM),
		.RegWrite_MEM(RegWrite_MEM),
		.load_type_MEM(load_type_MEM),
		.imm_MEM(imm_MEM),
		.dmem_out_MEM(dmem_out_MEM),
		.daddr_MEM(daddr_MEM),
		.pc_MEM(pc_MEM),
		.d0(d0),
		.RegDst_MEM(RegDst_MEM),
		
		.MemToReg_MEM_WB_reg_wire(MemToReg_MEM_WB_reg_wire),
		.Jump_MEM_WB_reg_wire(Jump_MEM_WB_reg_wire),
		.auipc_MEM_WB_reg_wire(auipc_MEM_WB_reg_wire),
		.jalr_MEM_WB_reg_wire(jalr_MEM_WB_reg_wire),
		.RegWrite_MEM_WB_reg_wire(RegWrite_MEM_WB_reg_wire),
		.RegDst_MEM_WB_reg_wire(RegDst_MEM_WB_reg_wire),
		.load_type_MEM_WB_reg_wire(load_type_MEM_WB_reg_wire),
		.imm_MEM_WB_reg_wire(imm_MEM_WB_reg_wire),
		.dmem_out_MEM_WB_reg_wire(dmem_out_MEM_WB_reg_wire),
		.daddr_MEM_WB_reg_wire(daddr_MEM_WB_reg_wire),
		.pc_MEM_WB_reg_wire(pc_MEM_WB_reg_wire)
		
		
	);

	always #100 clk = !clk;
	
	initial begin
		// Initialize Inputs
		reset = 0;
		clk = 0; 
		// Add stimulus here

	end
      
endmodule


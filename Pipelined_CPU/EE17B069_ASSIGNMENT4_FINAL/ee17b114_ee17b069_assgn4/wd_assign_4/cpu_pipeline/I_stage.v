`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:45:15 11/09/2019 
// Design Name: 
// Module Name:    I_stage 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module I_stage(
	input reset,
	input clk,
	input alu_zero,
	input MemToReg_MEM_WB,
	input RegWrite_MEM_WB,
	input Jump_MEM_WB,
	input auipc_MEM_WB,
	input jalr_MEM_WB,
	input [2:0] load_type_MEM_WB,
	input [4:0] RegDst_MEM_WB,
	input [31:0] offset_branch,
	input [31:0] dmem_out_MEM_WB,
	input [31:0] imm_MEM_WB,
	input [31:0] pc_MEM_WB,
	input [31:0] alu_out_MEM_WB,
	output RegWrite,
	output ALUSrc,
	output MemToReg,
	output MemWrite,
	output Jump,
	output auipc,
	output jalr,
	output [1:0] we,
	output [2:0] load_type,
	output [2:0] hazard_type,
	output [4:0] RegDst,
	output [6:0] ALUop,
	output [31:0] imm,
   output [31:0] rv1,
	output [31:0] rv2,
	output [31:0] pc,
	output [31:0] x31,
	output [31:0] Instruction,
	output [31:0] pc_candidate,
	output [2:0] current_instruction_type,
	output [31:0] indata_parsed,
	output RegWrite_test
	 );
	 
	
	wire Branch;
	wire [4:0] rs1,rs2;
	
	
	assign RegWrite_test = RegWrite_MEM_WB;


		// Instantiate the Unit Under Test (UUT)
	controlUnit control_instance(
		.ALUop(ALUop), 
		.RegDst(RegDst), 
		.RegWrite(RegWrite), 
		.ALUSrc(ALUSrc), 
		.MemWrite(MemWrite), 
		.MemToReg(MemToReg), 
		.Branch(Branch), 
		.Jump(Jump), 
		.Instruction(Instruction), 
		.imm(imm), 
		.auipc(auipc),
		.load_type(load_type),
		.rs1(rs1),
		.rs2(rs2),
		.we(we),
		.jalr(jalr),
		.current_instruction_type(current_instruction_type));
		
	hazard_detect hazard_detect_instance(.current_instruction_type(current_instruction_type),.rs1(rs1),.rs2(rs2),.clk(clk) ,.hazard_type(hazard_type),.current_rd(RegDst));
		
	imem imem_instance( .iaddr(pc), .idata(Instruction));
	
	pc_module pc_module_instance(.Out(pc), .In(pc_candidate), .Clock(clk), .Reset(reset));
		
	pc_candidate_generation_module pc_candidate_generation_module_instance( .pc(pc),.imm(imm),.alu_zero(alu_zero), .pc_candidate(pc_candidate) ,.jump(Jump),.jalr(jalr) ,.reset(reset) ,.offset_branch(offset_branch));
	
	regfiles regfile_instance(.rs1(rs1),.rs2(rs2),.rd(RegDst_MEM_WB),.we_reg(RegWrite_MEM_WB),.clk(clk),.rv1(rv1),.rv2(rv2), .indata(indata_parsed) ,.x31(x31));
	
	reg_indata_generator reg_indata_generator_instance( .MemToReg(MemToReg_MEM_WB),.dmem_out(dmem_out_MEM_WB),.alu_out(alu_out_MEM_WB),.pc(pc_MEM_WB),.indata_parsed(indata_parsed), .jump(Jump_MEM_WB),.load_type(load_type_MEM_WB),.jalr(jalr_MEM_WB),.auipc(auipc_MEM_WB));

endmodule

//Things to be recieved by the module - clk, reset, alu_zero(from alu output wire), MemToReg_MEM_WB,dmem_out_MEM_WB,alu_out_MEM_WB,imm_MEM_WB,pc_MEM_WB,Jump_MEM_WB,load_type_MEM_WE,offset_branch,
//Things to be passed on to the next module - ALUop_I_EX,alu_src_I_EX,hazard_type_I_EX,RegDst_I_EX,imm_I_EX,Branch_I_EX,Jump_I_EX,jalr_I_EX,RegWrite_I_EX,rv1_I_EX,rv2_I_EX,MemToReg_I_EX,pc_I_EX,load_type_I_EX.
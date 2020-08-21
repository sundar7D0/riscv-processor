`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:48:26 10/18/2019 
// Design Name: 
// Module Name:    alu 
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
module EX_stage(
	input alu_src,
	input auipc_I_EX,
	input Jump_I_EX,
	input jalr_I_EX,
	input RegWrite_I_EX,
	input MemToReg_I_EX,
	input MemWrite_I_EX,
	input [1:0] we_I_EX,
	input [4:0] RegDst,
	input [2:0] hazard_type,
	input [2:0] load_type_I_EX,
	input [6:0] op_alu,
	input [31:0] imm,
	input [31:0] pc_I_EX,
	input [31:0] rv1,
	input [31:0] rv2,
	input [31:0] rv1_prev,
	input [31:0] rv2_prev,
	input [31:0] rv1_mem,
	input [31:0] rv2_mem,
	input [31:0] daddr_I_EX,
	input [31:0] dwdata_I_EX,
	output reg alu_zero,
	output [4:0] RegDst_EX_MEM,
	output auipc_EX_MEM,
	output Jump_EX_MEM,
	output jalr_EX_MEM,
	output RegWrite_EX_MEM,
	output MemWrite_EX_MEM,
	output MemToReg_EX_MEM,
	output [1:0] we_EX_MEM,
	output [2:0] load_type_EX_MEM,
	output [31:0] daddr_EX_MEM,
	output [31:0] dwdata_EX_MEM,
	output [31:0] pc_EX_MEM,
	output [31:0] imm_EX_MEM
	
	);
	
	reg [31:0] in1;
	reg [31:0] in2;
	reg [31:0] out;
	
	assign daddr_EX_MEM = out;
	assign dwdata_EX_MEM = dwdata_I_EX;
	assign RegDst_EX_MEM = RegDst;
	assign imm_EX_MEM = imm;
	assign Jump_EX_MEM = Jump_I_EX;
	assign jalr_EX_MEM = jalr_I_EX;
	assign RegWrite_EX_MEM = RegWrite_I_EX;
	assign MemToReg_EX_MEM = MemToReg_I_EX;
	assign MemWrite_EX_MEM = MemWrite_I_EX;
 	assign we_EX_MEM = we_I_EX;
	assign load_type_EX_MEM = load_type_I_EX;
	assign pc_EX_MEM = pc_I_EX;
	assign auipc_EX_MEM = auipc_I_EX;

	

	
	always@(*)
		begin
			if(hazard_type==1 || hazard_type== 3) in1 <= rv1_prev;
			else if(hazard_type==5 || hazard_type==7) in1 <= rv1_mem;
			else in1 <= rv1;
		end
	
	always@(*)
		begin
			if(alu_src == 1) in2 <= imm;
			else
				begin
				if(hazard_type==2 || hazard_type== 3 ) in2 <= rv2_prev;
				else if(hazard_type==6 || hazard_type==7) in2 <= rv2_mem;
				else in2 <= rv2;
			end		
		end
		
	always @(*) begin
		case(op_alu)
			0: begin if($signed(in1)-$signed(in2) == 0) alu_zero <= 1;else alu_zero <= 0;end//BEQ
			1: begin if($signed(in1)-$signed(in2) != 0) alu_zero <= 1;else alu_zero <= 0;end//BNE
			2: begin if($signed(in1)<$signed(in2)) alu_zero <= 1;else alu_zero <= 0;end//BLT
			3: begin if($signed(in1)>=$signed(in2)) alu_zero <= 1;else alu_zero <= 0;end//BGE
			4: begin if(in1<in2) alu_zero <= 1;else alu_zero <= 0;end//BLTU
			5: begin if(in1>=in2) alu_zero <= 1;else alu_zero <= 0;end//BGEU
			18:begin out <= $signed(in1)+$signed(in2); alu_zero <= 0;end
			19:begin out <= $signed(in1)<$signed(in2);alu_zero <= 0;end
			20:begin out <= in1<in2;alu_zero <= 0;end
			21:begin out <= in1^in2;alu_zero <= 0;end
			22:begin out <= in1|in2;alu_zero <= 0;end
			23:begin out <= in1&in2;alu_zero <= 0;end
			24:begin out <= in1<<in2;alu_zero <= 0;end
			25:begin out <= in1>>in2;alu_zero <= 0;end
			26:begin out <= $signed(in1)>>>in2;alu_zero <= 0;end
			27:begin out <= $signed(in1)+$signed(in2);alu_zero <= 0;end
			28:begin out <= $signed(in1)-$signed(in2);alu_zero <= 0;end
			29:begin out <= in1<<in2;alu_zero <= 0;end
			30:begin out <= $signed(in1)<$signed(in2);alu_zero <= 0;end
			31:begin out <= in1<in2;alu_zero <= 0;end
			32:begin out <= in1^in2;alu_zero <= 0;end
			33:begin out <= in1>>in2;alu_zero <= 0;end
			34:begin out <= $signed(in1)>>>in2;alu_zero <= 0;end
			35:begin out <= in1|in2;alu_zero <= 0;end
			36:begin out <= in1&in2;alu_zero <= 0;end	
			default: begin out <= 0;alu_zero <= 0;end	
		endcase
    end	
endmodule
//Things required for this block :  alu_src_I_EX,ALUop_I_EX,hazard_type_I_EX,RegDst_I_EX,imm_I_EX,Branch_I_EX,Jump_I_EX,jalr_I_EX,RegWrite_I_EX,MemToReg_I_EX,pc_I_EX,load_type_I_EX,rv1_EX_MEM,rv2_EX_MEM,rv1_mem_MEM_WB,rv2_mem_MEM_WB.
//Things passed on from this module : daddr_EX_MEM,dwdata_EX_MEM,we_EX_MEM,drdata_EX_MEM,MemToReg_EX_MEM,alu_out_EX_MEM,mm_EX_MEM,pc_EX_MEM,Jump_EX_MEM,load_type_EX_MEM
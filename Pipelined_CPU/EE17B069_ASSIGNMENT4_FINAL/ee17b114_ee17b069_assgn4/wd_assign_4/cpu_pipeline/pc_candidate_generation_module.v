`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:57:23 10/18/2019 
// Design Name: 
// Module Name:    pc_candidate_generation_module 
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
module pc_candidate_generation_module(
    input [2:0] hazard_type,input [31:0] pc,input [31:0] imm,input alu_zero, output reg [31:0] pc_candidate, input jump, input jalr,input [31:0] rv1, input [31:0] alu_out,input reset,input [31:0] offset_branch);
	
	always@(*)
		begin
			if(hazard_type==3'b111 ) pc_candidate <= pc;
			else if(reset) pc_candidate <= 32'b0;
			else if(jump) pc_candidate <= pc + imm;
			else if(alu_zero) pc_candidate <= pc + offset_branch;//offset_branch stored inside I_stage, alu_zero coming from wire,not from the register!!
			else if (jalr) pc_candidate <= imm + rv1;//{alu_out[31:1],1'b0};//written in the write back stage.
			else pc_candidate <= pc + 4;			
		end

endmodule

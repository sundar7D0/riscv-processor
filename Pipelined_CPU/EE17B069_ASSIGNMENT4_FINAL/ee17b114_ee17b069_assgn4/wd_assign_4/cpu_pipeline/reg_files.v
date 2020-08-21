`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:43:40 10/18/2019 
// Design Name: 
// Module Name:    reg_files 
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



module regfile(rs1,rs2,rd,we_reg,clk,rv1,rv2,indata,x31);
	 
    input [4:0] rs1;
    input [4:0] rs2;
    input [4:0] rd;
    input we_reg;
    input clk;
	 input [31:0] indata;
    output [31:0] rv1;
    output [31:0] rv2;
	 output [31:0] x31;
	 
	 reg [31:0] regfile [0:31];
	 
	 initial 
		begin
			regfile[0] = 1;
			regfile[1] = 0;
			regfile[2] = 0;
			regfile[3] = 0;
			regfile[4] = 0;
			regfile[5] = 0;
			regfile[31]= 0;
			
		end
	
	assign x31 = regfile[0];

	assign rv1 = regfile[rs1];
	assign rv2 = regfile[rs2];		
	always@(posedge clk)
		begin
			if(we_reg==1) regfile[rd] <= indata;
			else regfile[rd] <= 32'b0;
		end
		
endmodule
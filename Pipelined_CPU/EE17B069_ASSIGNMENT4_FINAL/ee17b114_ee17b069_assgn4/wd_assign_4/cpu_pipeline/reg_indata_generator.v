`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:22:20 10/18/2019 
// Design Name: 
// Module Name:    reg_indata_generator 
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
module reg_indata_generator( MemToReg,dmem_out,alu_out,pc,jump,auipc,indata_parsed,load_type,jalr);
	  input MemToReg;
	  input auipc;
	  input jump;
	  input [31:0] dmem_out;
	  input [31:0] alu_out;
	  input [31:0]  pc;
	  input [2:0] load_type;
	  output reg [31:0] indata_parsed;
	  reg [31:0] indata;
	  reg [6:0] load_type_parsed;
	  input jalr;
	 
	 
	 initial begin
	 indata = 0;
	 end
	 always@(indata,load_type_parsed)
		begin
			case(load_type_parsed)
				7'b0000000: indata_parsed <= {{24{indata[31]}},indata[7:0]};//lb
				7'b0000001: indata_parsed <= {{24{indata[31]}},indata[15:8]};//lb
				7'b0000010: indata_parsed <= {{24{indata[31]}},indata[23:16]};//lb
				7'b0000011: indata_parsed <= {{24{indata[31]}},indata[31:24]};//lb
				7'b0000100: indata_parsed <= {{16{indata[31]}},indata[15:0]};//lh
				7'b0000110: indata_parsed <= {{16{indata[31]}},indata[31:16]};//lh
				7'b0000111: indata_parsed <= indata;
				7'b0001000: indata_parsed <= {24'b0,indata[7:0]};
				7'b0001001: indata_parsed <= {24'b0,indata[15:8]};
				7'b0001010: indata_parsed <= {24'b0,indata[23:16]};
				7'b0001011: indata_parsed <= {24'b0,indata[31:24]};
				7'b0001100: indata_parsed <= {16'b0,indata[15:0]};
				7'b0001110: indata_parsed <= {16'b0,indata[31:16]};
				default: indata_parsed <= 0;
			endcase
		end
		
	always@(alu_out,load_type)
		begin
			case(load_type)
				3'b001: load_type_parsed <= {5'b00000,alu_out[1:0]};         //load byte signed
				3'b010: load_type_parsed <= {5'b00001,alu_out[1:0]}; 			//load half word signed
				3'b011:	load_type_parsed <= {5'b00010,alu_out[1:0]}; 			//load byte unsigned
				3'b100:	load_type_parsed <= {5'b00011,alu_out[1:0]}; 			//load halfword unsigned
				3'b101:	load_type_parsed <= 7'b0000111; 			//load word
				default: load_type_parsed <=  7'b0000111;
				
			endcase
		end
	
	always@(*)
		begin
			if(auipc == 1) indata <= pc + $signed(alu_out);
			else if(jump == 1) indata <= pc + 4;
			else if(jalr == 1) indata <= pc + 4;
			else if(MemToReg == 1) indata <= dmem_out;			
			else indata <= alu_out;
		end
endmodule

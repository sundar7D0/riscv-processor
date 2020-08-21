`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:35:36 10/18/2019 
// Design Name: 
// Module Name:    decoder_moduler 
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
module controlUnit (RegDst, RegWrite, ALUSrc, MemRead, MemWrite,MemToReg, Branch, Jump, Instruction,imm,auipc,rs1,rs2,load_type,ALUop,we,jalr,hazard_type,current_instruction_type);
   input  [31:0] Instruction;
	input [2:0] hazard_type;
   output reg [6:0] ALUop;
	output reg [31:0] imm;
	output reg [4:0] rs1, rs2;
	output reg [2:0] load_type;
	output reg [4:0] RegDst;
	output reg [1:0] we;
   output reg  RegWrite, ALUSrc, MemRead, MemWrite, MemToReg, Branch, Jump, auipc, jalr;
	output reg [2:0] current_instruction_type;

    always @(Instruction) begin
	 if(1'b1 == 1'b1) begin//~(hazard_type==4 || hazard_type==5)
		case(Instruction[6:0])
			7'b0110111://LUI 
				begin
					imm <= {Instruction[31:12],12'b0};
					rs1 <= Instruction[19:15];
					rs2 <= 0;
					RegDst  <= Instruction[11:7];
					ALUop <= 18;//add
					RegWrite <= 1'b1;
					ALUSrc <= 1'b1;
					MemWrite <= 1'b0;
					MemToReg <= 1'b0;
					load_type <= 3'b101;
					Branch <= 1'b0;
					Jump <= 1'b0;
					auipc <= 1'b0;
					jalr <= 1'b0;
					we <= 2'b00;
					current_instruction_type <= 0;
									
				end
				
			7'b0010111://AUIPC
				begin
					imm <= {Instruction[31:12],12'b0};
					rs1 <= 0;
					rs2 <= 0;
					RegDst  <= Instruction[11:7];
					ALUop <=18;//add
					RegWrite <= 1'b1;
					ALUSrc <= 1'b1;
					MemWrite <= 1'b0;
					MemToReg <= 1'b0;
					load_type <= 3'b101;
					Branch <= 1'b0;
					Jump <= 1'b0;
					auipc <= 1'b1;
					jalr <= 1'b0;
					we <= 2'b00;
					current_instruction_type <= 0;
				end
				
			7'b1101111://JAL
				begin
					ALUop <= 18;
					imm <= {{12{Instruction[31]}},Instruction[31],Instruction[19:12],Instruction[20],Instruction[30:21],1'b0};
					rs1 <= 0; 
					rs2 <= 0;
					RegDst  <= Instruction[11:7];
					RegWrite <= 1'b1;
					ALUSrc <= 1'b1;
					MemWrite <= 1'b0;
					MemToReg <= 1'b0;
					load_type <= 3'b101;
					Branch <= 1'b0;
					Jump <= 1'b1;
					auipc <= 1'b0;
					jalr <= 1'b0;
					we <= 2'b00;
					current_instruction_type <= 0;
				end
				
			7'b1100111: //JALR
				begin
					imm <= {{20{Instruction[31]}},Instruction[31:20]} ;
					rs1 <= Instruction[19:15]; //one operand is zero
					rs2 <= 1'b0;
					RegDst  <= Instruction[11:7];					
					ALUop <= 18;//none
					RegWrite <= 1'b1;
					ALUSrc <= 1'b1;
					MemWrite <= 1'b0;
					MemToReg <= 1'b0;
					MemToReg <= 0;
					load_type <= 3'b101;
					Branch <= 1'b0;
					Jump <= 1'b0;
					auipc <= 1'b0;
					jalr <= 1'b1;
					we <= 2'b00;
					current_instruction_type <= 0;
				end
			7'b1100011:
				case(Instruction[14:12])
					3'b000: //BEQ
				begin
					imm <= {{20{Instruction[31]}},Instruction[31],Instruction[7],Instruction[30:25],Instruction[11:8],1'b0} ;
					rs1 <= Instruction[19:15]; 
					rs2 <= Instruction[24:20];					
					ALUop <= 0;
					RegWrite <= 1'b0;
					ALUSrc <= 1'b0;
					MemWrite <= 1'b0;
					MemToReg <= 0;
					load_type <= 3'b101;
					Branch <= 1'b1;
					Jump <= 1'b0;
					auipc <= 1'b0;
					jalr <= 1'b0;
					we <= 2'b00;
					current_instruction_type <= 1;
					
				end
					3'b001: //BNE
				begin
					imm <= {{20{Instruction[31]}},Instruction[31],Instruction[7],Instruction[30:25],Instruction[11:8],1'b0} ;
					rs1 <= Instruction[19:15]; //one operand is zero
					rs2 <= Instruction[24:20];					
					ALUop <= 1 ;//none
					RegWrite <= 1'b0;
					ALUSrc <= 1'b0;
					MemWrite <= 1'b0;
					MemToReg <= 0;
					load_type <= 3'b101;
					Branch <= 1'b1;
					Jump <= 1'b0;
					auipc <= 1'b0;
					jalr <= 1'b0;
					we <= 2'b00;
					current_instruction_type <= 1;
				end
					3'b100:  //BLT
				begin
					imm <= {{20{Instruction[31]}},Instruction[31],Instruction[7],Instruction[30:25],Instruction[11:8],1'b0} ;
					rs1 <= Instruction[19:15]; //one operand is zero
					rs2 <= Instruction[24:20];					
					ALUop <= 2;//none
					RegWrite <= 1'b0;
					ALUSrc <= 1'b0;
					MemWrite <= 1'b0;
					MemToReg <= 0;
					load_type <= 3'b101;
					Branch <= 1'b1;
					Jump <= 1'b0;
					auipc <= 1'b0;
					jalr <= 1'b0;
					we <= 2'b00;
					current_instruction_type <= 1;
				end
				
					3'b101:  //BGE
				begin
					imm <= {{20{Instruction[31]}},Instruction[31],Instruction[7],Instruction[30:25],Instruction[11:8],1'b0} ;
					rs1 <= Instruction[19:15]; //one operand is zero
					rs2 <= Instruction[24:20];					
					ALUop <= 3;//none
					RegWrite <= 1'b0;
					ALUSrc <= 1'b0;
					MemWrite <= 1'b0;
					MemToReg <= 0;
					load_type <= 3'b101;
					Branch <= 1'b1;
					Jump <= 1'b0;
					auipc <= 1'b0;
					jalr <= 1'b0;
					we <= 2'b00;
					current_instruction_type <= 1;
				end
					3'b110:  //BLTU
				begin
					imm <= {{20{Instruction[31]}},Instruction[31],Instruction[7],Instruction[30:25],Instruction[11:8],1'b0} ;
					rs1 <= Instruction[19:15]; //one operand is zero
					rs2 <= Instruction[24:20];					
					ALUop <= 4;//none
					RegWrite <= 1'b0;
					ALUSrc <= 1'b0;
					MemWrite <= 1'b0;
					MemToReg <= 0;
					load_type <= 3'b101;
					Branch <= 1'b1;
					Jump <= 1'b0;
					auipc <= 1'b0;
					jalr <= 1'b0;
					we <= 2'b00;
					current_instruction_type <= 1;
				end
					3'b111:  //BGEU
				begin
					imm <= {{20{Instruction[31]}},Instruction[31],Instruction[7],Instruction[30:25],Instruction[11:8],1'b0} ;
					rs1 <= Instruction[19:15]; //one operand is zero
					rs2 <= Instruction[24:20];					
					ALUop <= 5;//none
					RegWrite <= 1'b0;
					ALUSrc <= 1'b0;
					MemWrite <= 1'b0;
					MemToReg <= 0;
					load_type <= 3'b101;
					Branch <= 1'b1;
					Jump <= 1'b0;
					auipc <= 1'b0;
					jalr <= 1'b0;
					we <= 2'b00;
					current_instruction_type <= 1;
				end
					default: Jump <= 0;						
				endcase
			7'b0000011:
				case(Instruction[14:12])
					3'b000: //LB
				begin
					imm <= {{20{Instruction[31]}},Instruction[31:20]} ;
					rs1 <= Instruction[19:15]; //one operand is zero
					rs2 <= 0;
					ALUop <= 18;//none
					RegWrite <= 1'b1;
					RegDst  <= Instruction[11:7];
					ALUSrc <= 1'b1;
					MemWrite <= 1'b0;
					MemToReg <= 1;
					load_type <= 4'b0001;//0,1,2,3 ==> byte loading
					Branch <= 1'b0;
					Jump <= 1'b0;
					auipc <= 1'b0;
					jalr <= 1'b0;
					we <= 2'b00;
					current_instruction_type <= 2;
				end
				
					3'b001:  //LH
				begin
					imm <= {{20{Instruction[31]}},Instruction[31:20]} ;
					rs1 <= Instruction[19:15]; //one operand is zero
					rs2 <= 0;
					ALUop <= 18;//none
					RegWrite <= 1'b1;
					RegDst  <= Instruction[11:7];
					ALUSrc <= 1'b1;
					MemWrite <= 1'b0;
					MemToReg <= 1;
					load_type <= 4'b0010;//4 or 6 --> load halfword
					Branch <= 1'b0;
					Jump <= 1'b0;
					auipc <= 1'b0;
					jalr <= 1'b0;
					we <= 2'b00;
					current_instruction_type <= 2;
				end
				
					3'b010: //LW
				begin
					imm <= {{20{Instruction[31]}},Instruction[31:20]} ;
					rs1 <= Instruction[19:15];
					rs2 <= 0;
					ALUop <= 18;//none
					RegWrite <= 1'b1;
					RegDst  <= Instruction[11:7];
					ALUSrc <= 1'b1;
					MemWrite <= 1'b0;
					MemToReg <= 1;
					load_type <= 3'b101;
					Branch <= 1'b0;
					Jump <= 1'b0;
					auipc <= 1'b0;
					jalr <= 1'b0;
					we <= 2'b00;
					current_instruction_type <= 2;
				end
					3'b100: //LBU
				begin
					imm <= {{20{Instruction[31]}},Instruction[31:20]} ;
					rs1 <= Instruction[19:15]; //one operand is zero
					rs2 <= 0;
					ALUop <= 18;//none
					RegWrite <= 1'b1;
					RegDst  <= Instruction[11:7];
					ALUSrc <= 1'b1;
					MemWrite <= 1'b0;
					MemToReg <= 1;
					load_type <= 3'b011;//0,1,2,3 ==> byte loading
					Branch <= 1'b0;
					Jump <= 1'b0;
					auipc <= 1'b0;
					jalr <= 1'b0;
					we <= 2'b00;
					current_instruction_type <= 2;
				end
				
					3'b101: //LHU
				begin
					imm <= {{20{Instruction[31]}},Instruction[31:20]} ;
					rs1 <= Instruction[19:15]; //one operand is zero				
					ALUop <= 18;//none
					RegWrite <= 1'b1;
					RegDst  <= Instruction[11:7];
					ALUSrc <= 1'b1;
					MemWrite <= 1'b0;
					MemToReg <= 1;
					load_type <= 3'b100;//4 or 6 --> load halfword
					Branch <= 1'b0;
					Jump <= 1'b0;
					auipc <= 1'b0;
					jalr <= 1'b0;
					we <= 2'b00;
					current_instruction_type <= 2;
				end
					default: Jump <= 0;
				endcase
			7'b0100011:
				case(Instruction[14:12])
					3'b000: //SB
				begin
					imm <= {{20{Instruction[31]}},Instruction[31:25],Instruction[11:7]} ;
					rs1 <= Instruction[19:15];
					rs2 <= Instruction[24:20]; 			
					ALUop <= 18;
					RegWrite <= 1'b0;
					ALUSrc <= 1'b1;
					MemWrite <= 1'b1;
					load_type <= 3'b101;
					we <= 2'b01;
					Branch <= 1'b0;
					Jump <= 1'b0;
					auipc <= 1'b0;
					jalr <= 1'b0;
					current_instruction_type <= 3;
				end
					3'b001: //SH
				begin
					imm <= {{20{Instruction[31]}},Instruction[31:25],Instruction[11:7]} ;
					rs1 <= Instruction[19:15];
					rs2 <= Instruction[24:20]; 			
					ALUop <= 18;//none
					RegWrite <= 1'b0;
					load_type <= 3'b101;
					ALUSrc <= 1'b1;
					MemWrite <= 1'b1;
					we <= 2'b10;
					Branch <= 1'b0;
					Jump <= 1'b0;
					auipc <= 1'b0;
					jalr <= 1'b0;
					current_instruction_type <= 3;
				end
					3'b010: //SW
				begin
					imm <= {{20{Instruction[31]}},Instruction[31:25],Instruction[11:7]} ;
					rs1 <= Instruction[19:15];
					rs2 <= Instruction[24:20]; 			
					ALUop <= 18;//none
					RegWrite <= 1'b0;
					load_type <= 3'b101;
					ALUSrc <= 1'b1;
					MemWrite <= 1'b1;
					we <= 2'b11; // word storing
					Branch <= 1'b0;
					Jump <= 1'b0;
					auipc <= 1'b0;
					jalr <= 1'b0;
					current_instruction_type <= 3;
				end	
					default: Jump <= 0;
				endcase
			7'b0010011:
				case(Instruction[14:12])
					3'b000: begin
								imm <= {{20{Instruction[31]}},Instruction[31:20]} ;
								rs1 <= Instruction[19:15];
								ALUop <= 18;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b1;
								MemWrite <= 1'b0;
								load_type <= 3'b101;
								MemToReg <= 1'b0;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								jalr <= 1'b0;
								current_instruction_type <= 0;
									
								end
					3'b010:  begin
								imm <= {{20{Instruction[31]}},Instruction[31:20]} ;
								rs1 <= Instruction[19:15];
								ALUop <= 19;
								RegWrite <= 1'b1;
								ALUSrc <= 1'b1;
								MemWrite <= 1'b0;
								MemToReg <= 1'b0;
								load_type <= 3'b101;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								jalr <= 1'b0;
								RegDst <= Instruction[11:7];
								current_instruction_type <= 0;
								end
					3'b011:  begin
								imm <= {{20{Instruction[31]}},Instruction[31:20]} ;
								rs1 <= Instruction[19:15];
								ALUop <= 20;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b1;
								MemWrite <= 1'b0;
								load_type <= 3'b101;
								MemToReg <= 1'b0;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 0;
								jalr <= 1'b0;
								
								end
					3'b100:  begin
								imm <= {{20{Instruction[31]}},Instruction[31:20]} ;
								rs1 <= Instruction[19:15];
								ALUop <= 21;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b1;
								MemWrite <= 1'b0;
								load_type <= 3'b101;
								MemToReg <= 1'b0;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 0;
								jalr <= 1'b0;	
								end
					3'b110:  begin
								imm <= {{20{Instruction[31]}},Instruction[31:20]} ;
								rs1 <= Instruction[19:15];
								ALUop <= 22;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b1;
								MemWrite <= 1'b0;
								MemToReg <= 1'b0;
								load_type <= 3'b101;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 0;
								jalr <= 1'b0;	
								end
					3'b111:  begin
								imm <= {{20{Instruction[31]}},Instruction[31:20]} ;
								rs1 <= Instruction[19:15];
								ALUop <= 23;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b1;
								MemWrite <= 1'b0;
								load_type <= 3'b101;
								MemToReg <= 1'b0;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 0;
								jalr <= 1'b0;	
								end
					3'b001:  begin
								imm <= {20'b0,Instruction[24:20]} ;
								rs1 <= Instruction[19:15];
								ALUop <= 24;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b1;
								MemWrite <= 1'b0;
								load_type <= 3'b101;
								MemToReg <= 1'b0;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 0;
								jalr <= 1'b0;	
								end
					3'b101: 
						case(Instruction[30])
							1'b0:  begin
								imm <= {20'b0,Instruction[24:20]} ;
								rs1 <= Instruction[19:15];
								ALUop <= 25;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b1;
								MemWrite <= 1'b0;
								MemToReg <= 1'b0;
								load_type <= 3'b101;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 0;
								jalr <= 1'b0;	
								end
							1'b1:  begin
								imm <= {20'b0,Instruction[24:20]} ;
								rs1 <= Instruction[19:15];
								ALUop <= 26;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b1;
								MemWrite <= 1'b0;
								load_type <= 3'b101;
								MemToReg <= 1'b0;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 0;
								jalr <= 1'b0;	
								end			
							default: ALUop <= 41;
						endcase
					default: ALUop <= 41;
				endcase
			7'b0110011:
				case(Instruction[14:12])
					3'b000: 
						case(Instruction[30])
							1'b0: begin
								imm <= 0;
								rs1 <= Instruction[19:15];
								rs2 <= Instruction[24:20];
								ALUop <= 27;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b0;
								MemWrite <= 1'b0;
								load_type <= 3'b101;
								MemToReg <= 1'b0;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 0;
								jalr <= 1'b0;	
								end
							1'b1:  begin
								imm <= 0;
								rs1 <= Instruction[19:15];
								rs2 <= Instruction[24:20];
								ALUop <= 28;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b0;
								MemWrite <= 1'b0;
								MemToReg <= 1'b0;
								load_type <= 3'b101;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 0;
								jalr <= 1'b0;	
								end	
							default: ALUop <= 41;
						endcase
					3'b001:  begin
								imm <= 0;
								rs1 <= Instruction[19:15];
								rs2 <= Instruction[24:20];
								ALUop <= 29;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b0;
								MemWrite <= 1'b0;
								MemToReg <= 1'b0;
								load_type <= 3'b101;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 0;
								jalr <= 1'b0;	
								end
					3'b010:  begin
								imm <= 0;
								rs1 <= Instruction[19:15];
								rs2 <= Instruction[24:20];
								ALUop <= 30;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b0;
								MemWrite <= 1'b0;
								MemToReg <= 1'b0;
								load_type <= 3'b101;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 0;
								jalr <= 1'b0;	
								end
					3'b011:  begin
								imm <= 0;
								rs1 <= Instruction[19:15];
								rs2 <= Instruction[24:20];
								ALUop <= 31;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b0;
								MemWrite <= 1'b0;
								MemToReg <= 1'b0;
								load_type <= 3'b101;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 0;
								jalr <= 1'b0;	
								end
					3'b100:  begin
								imm <= 0;
								rs1 <= Instruction[19:15];
								rs2 <= Instruction[24:20];
								ALUop <= 32;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b0;
								MemWrite <= 1'b0;
								MemToReg <= 1'b0;
								load_type <= 3'b101;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 0;
								jalr <= 1'b0;	
								end
					3'b101: 
						case(Instruction[30])
							1'b0:  begin
								imm <= 0;
								rs1 <= Instruction[19:15];
								rs2 <= Instruction[24:20];
								ALUop <= 33;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b0;
								MemWrite <= 1'b0;
								MemToReg <= 1'b0;
								load_type <= 3'b101;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 0;
								jalr <= 1'b0;	
								end
							1'b1: begin
								imm <= 0;
								rs1 <= Instruction[19:15];
								rs2 <= Instruction[24:20];
								ALUop <= 34;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b0;
								MemWrite <= 1'b0;
								MemToReg <= 1'b0;
								load_type <= 3'b101;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 0;
								jalr <= 1'b0;	
								end
							default: ALUop <= 41;
						endcase
					3'b110:  begin
								imm <= 0;
								rs1 <= Instruction[19:15];
								rs2 <= Instruction[24:20];
								ALUop <= 35;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b0;
								MemWrite <= 1'b0;
								MemToReg <= 1'b0;
								load_type <= 3'b101;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 0;
								jalr <= 1'b0;	
								end
					3'b111:  begin
								imm <= 0;
								rs1 <= Instruction[19:15];
								rs2 <= Instruction[24:20];
								ALUop <= 36;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b0;
								MemWrite <= 1'b0;
								MemToReg <= 1'b0;
								load_type <= 3'b101;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 0;
								jalr <= 1'b0;	
								end
					default: ALUop <= 41;
				endcase
			7'b0001111:  begin
								imm <= 0;
								rs1 <= Instruction[19:15];
								rs2 <= Instruction[24:20];
								ALUop <= 37;
								RegWrite <= 1'b1;
								RegDst <= Instruction[11:7];
								ALUSrc <= 1'b0;
								MemWrite <= 1'b0;
								MemToReg <= 1'b0;
								load_type <= 3'b101;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								current_instruction_type <= 3;
								jalr <= 1'b0;	
								end
			7'b1110011: 
				case(Instruction[20])
					1'b0: ALUop <= 38;
					1'b1: ALUop <= 39;
					default: ALUop <= 41;
				endcase
			default: begin
								imm <= 0;
								rs1 <= 0;
								rs2 <= 0;
								ALUop <= 37;
								RegWrite <= 1'b0;
								RegDst <= 0;
								ALUSrc <= 1'b0;
								MemWrite <= 1'b0;
								MemToReg <= 1'b0;
								load_type <= 3'b101;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								jalr <= 1'b0;
								current_instruction_type <= 3;
						end
		endcase
	 end
	 else
		begin
								imm <= 0;
								rs1 <= 0;
								rs2 <= 0;
								ALUop <= 37;
								RegWrite <= 1'b0;
								RegDst <= 0;
								ALUSrc <= 1'b0;
								MemWrite <= 1'b0;
								MemToReg <= 1'b0;
								load_type <= 3'b101;
								we <= 2'b00;
								Branch <= 1'b0;
								Jump <= 1'b0;
								auipc <= 1'b0;
								jalr <= 1'b0;
								current_instruction_type <= 3;
			
		end
    end
endmodule

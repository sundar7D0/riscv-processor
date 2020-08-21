`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:10:20 11/09/2019 
// Design Name: 
// Module Name:    hazrd_detect 
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
module hazard_detect( current_instruction_type,rs1,rs2,clk ,hazard_type,current_rd
    );
	 
	 input clk;
	 input [4:0] rs1;
	 input [4:0] rs2;
	 input [2:0] current_instruction_type;
	 reg [2:0] prev_instruction_type;
	 reg [4:0] prev_rd;
	 reg [2:0] alu_hazard_condition;
	 wire [5:0] instruction_type_cascade;
	 input [4:0] current_rd;
	 output reg [2:0] hazard_type;
	 
	 
	 //0-ALU 1-Branch 2-Load 3-other
	 initial
		 begin
			prev_instruction_type <= 3'b111;
			prev_rd <= 5'b10000;
		 end
		 
	always@(*)
		begin
			if(rs1==prev_rd && rs2==prev_rd)
				begin
					alu_hazard_condition <= 3;			
				end
			else if(rs1==prev_rd)
				begin
					alu_hazard_condition <= 1;				
				end
			else if(rs2==prev_rd)
				begin
					alu_hazard_condition <= 2;				
				end
			else
				begin
					alu_hazard_condition <= 0;
				end
		end

	 always@(posedge clk)
		 begin
			prev_instruction_type <= current_instruction_type;
			prev_rd <= current_rd;
		 end
		 
	assign instruction_type_cascade = {prev_instruction_type,current_instruction_type};
	
	 //detecting hazard
	 
	 always@(*)
		begin
			case(instruction_type_cascade)
				6'b000000: hazard_type <= alu_hazard_condition; //ALU hazard type 1 or 2 or 3 depending upon rs1 and rs2
				6'b000001: hazard_type <= 4;
				6'b011001: hazard_type <= 4;					//Branch hazard
				6'b010001: hazard_type <= 4;
				6'b111001: hazard_type <= 4;
				6'b010000: begin
									if(alu_hazard_condition==0) hazard_type <= 0;
									else hazard_type <= alu_hazard_condition + 4;//LOad ALU hazard depending upon rs1 or rs2
							  end
				default : hazard_type <= 0;//no error
			endcase
		end

endmodule

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:43:07 10/18/2019 
// Design Name: 
// Module Name:    dmem 
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
module MEM_stage(

    input clk,
	 input MemToReg_EX_MEM,
	 input MemWrite_EX_MEM,
	 input RegWrite_EX_MEM,
	 input [31:0] pc_EX_MEM,
	 input auipc_EX_MEM,
	 input Jump_EX_MEM,
	 input jalr,
	 input [1:0] we,
	 input [2:0] load_type_EX_MEM,
	 input [31:0] imm_EX_MEM,
    input [31:0] daddr,
    input [31:0] dwdata, 
	 input [4:0] RegDst_EX_MEM,
    output [31:0] drdata,
	 output reg [31:0] d0,
	 output MemToReg_MEM_WB,
	 output [31:0] daddr_MEM_WB,
	 output [31:0] imm_MEM_WB,
	 output [31:0] pc_MEM_WB,
	 output Jump_MEM_WB,
	 output auipc_MEM_WB,
	 output jalr_MEM_WB,
	 output RegWrite_MEM_WB,
	 output [2:0] load_type_MEM_WB,
	 output [4:0] RegDst_MEM_WB
);

	 assign MemToReg_MEM_WB = MemToReg_EX_MEM;
	 assign daddr_MEM_WB = daddr;
	 assign imm_MEM_WB = imm_EX_MEM;
	 assign pc_MEM_WB = pc_EX_MEM;
	 assign Jump_MEM_WB = Jump_EX_MEM;
	 assign auipc_MEM_WB = auipc_EX_MEM;
	 assign jalr_MEM_WB = jalr;
	 assign load_type_MEM_WB = load_type_EX_MEM;
	 assign RegWrite_MEM_WB = RegWrite_EX_MEM;
	 assign RegDst_MEM_WB = RegDst_EX_MEM;
	 
    reg [7:0] m[0:127];
	 reg [3:0] we_parsed;
	 reg [3:0] we_signals;
	 reg [31:0] dwdata_parsed;
    initial $readmemh("dmem_ini_moduler.mem",m);
	 

	 always@(m[0],m[1],m[2],m[3])
		begin
		d0 <= {m[0],m[1],m[2],m[3]};
		end
		

    wire [31:0] add0,add1,add2,add3;
	 
	 assign add0 = (daddr & 32'hfffffffc) + 32'h00000000;
	 assign add1 = (daddr & 32'hfffffffc) + 32'h00000001;
	 assign add2 = (daddr & 32'hfffffffc) + 32'h00000002;
	 assign add3 = (daddr & 32'hfffffffc) + 32'h00000003;
	 
	 assign drdata = {m[add3],m[add2],m[add1],m[add0]};
	 
	 
	 always@(*) 
		begin
			case(we)
				2'b00:we_parsed <= 4'b0000;	//no writing
				2'b01:we_parsed <= 4'b0001 + daddr[1:0];//write byte
				2'b10:we_parsed <= 4'b0101 + daddr[1:0];//write halfword
				2'b11:we_parsed <= 4'b1000;//write full word
			endcase
		end
	 
	 always@(*)
		begin
			case(we_parsed)
				4'b0000: we_signals <= 4'b0000;//0
				4'b0001: we_signals <= 4'b0001;//1
				4'b0010: we_signals <= 4'b0010;
				4'b0011: we_signals <= 4'b0100;
				4'b0100: we_signals <= 4'b1000;
				4'b0101: we_signals <= 4'b0011;
				4'b0111: we_signals <= 4'b1100;
				4'b1000: we_signals <= 4'b1111;//7
				default: we_signals <= 4'b0000;
			
			endcase
		end
		
	always@(*)
		begin
			case(we_signals)
				4'b0000: dwdata_parsed <= {dwdata[7:0],dwdata[15:8],dwdata[23:16],dwdata[31:24]};
				4'b0001:	dwdata_parsed <= {dwdata[7:0],24'b0};
				4'b0010: dwdata_parsed <= {8'b0,dwdata[7:0],16'b0};
				4'b0100: dwdata_parsed <= {16'b0,dwdata[7:0],8'b0};
				4'b1000:	dwdata_parsed <= {24'b0,dwdata[7:0]};
				4'b0011:	dwdata_parsed <= {dwdata[7:0],dwdata[15:8],16'b0};
				4'b1100: dwdata_parsed <= {16'b0,dwdata[7:0],dwdata[15:8]};
				4'b1111:	dwdata_parsed <= {dwdata[7:0],dwdata[15:8],dwdata[23:16],dwdata[31:24]};
				default:	dwdata_parsed <= {dwdata[7:0],dwdata[15:8],dwdata[23:16],dwdata[31:24]};	
			endcase
		end
	 
    always @(posedge clk) begin
        if (we_signals[0]==1)
            m[add0]= dwdata_parsed[31:24] ;
        if (we_signals[1]==1)
            m[add1]= dwdata_parsed[23:16];
        if (we_signals[2]==1)
            m[add2]= dwdata_parsed[15:8];
        if (we_signals[3]==1)
            m[add3]= dwdata_parsed[7:0];
    end
	 
endmodule
//Things required by the module : clk,daddr_EX_MEM,dwdata_EX_MEM, we_EX_MEM,MemToReg_EX_MEM,alu_out_EX_MEM,imm_EX_MEM,pc_EX_MEM,Jump_EX_MEM,load_type_EX_MEM
//Things to be passed from the block : d0,MemToReg_MEM_WB,dmem_out_MEM_WB,alu_out_MEM_WB,imm_MEM_WB,pc_MEM_WB,Jump_MEM_WB,load_type_MEM_WE
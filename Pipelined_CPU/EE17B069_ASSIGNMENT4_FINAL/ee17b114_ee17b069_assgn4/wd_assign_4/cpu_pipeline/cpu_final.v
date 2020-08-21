`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:51:37 11/05/2019 
// Design Name: 
// Module Name:    cpu_final 
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
module cpu_final(
input reset, 
input clk, 
output [2:0] hazard_type_I,	
output [31:0] pc_I, 
output [31:0] x31_I,
output [31:0] Instruction,
output RegWrite_I,
output ALUSrc_I,
output MemToReg_I,
output Jump_I,
output auipc_I,
output jalr_I,
output MemWrite_I,
output [1:0] we_I,
output [2:0] load_type_I,
output [6:0] ALUop_I,
output [4:0] RegDst_I,
output [31:0] imm_I,
output [31:0] rv1_I,
output [31:0] rv2_I,
output [31:0] pc_candidate,
output [2:0] current_instruction_type,
output [31:0] indata_parsed,
output RegWrite_test,

output MemToReg_EX,
output MemWrite_EX,
output Jump_EX,
output auipc_EX,
output jalr_EX,
output RegWrite_EX,
output alu_zero,
output [1:0] we_EX,
output [2:0] load_type_EX,
output [4:0] RegDst_EX,
output [31:0] imm_EX,
output [31:0] daddr_EX,
output [31:0] dwdata_EX,
output [31:0] pc_EX,

output MemToReg_MEM,
output Jump_MEM,
output auipc_MEM,
output jalr_MEM,
output RegWrite_MEM,
output [4:0] RegDst_MEM,
output [2:0] load_type_MEM,
output  [31:0] imm_MEM,
output  [31:0] dmem_out_MEM,
output [31:0] daddr_MEM,
output  [31:0] pc_MEM,
output  [31:0] d0,



	output MemToReg_MEM_WB_reg_wire,
	output Jump_MEM_WB_reg_wire,
	output auipc_MEM_WB_reg_wire,
	output jalr_MEM_WB_reg_wire,
	output RegWrite_MEM_WB_reg_wire,
	output [4:0] RegDst_MEM_WB_reg_wire,
	output [2:0] load_type_MEM_WB_reg_wire,
	output [31:0] imm_MEM_WB_reg_wire,
	output [31:0] dmem_out_MEM_WB_reg_wire,
	output [31:0] daddr_MEM_WB_reg_wire,
	output [31:0] daddr_out_MEM_WB_reg_wire,
	output [31:0] pc_MEM_WB_reg_wire

);


initial
	begin
		RegWrite_MEM_WB_reg <= 0;
		RegWrite_EX_MEM_reg <= 0;
		RegWrite_I_EX_reg <= 0;
		MemWrite_EX_MEM_reg <= 0;
		MemWrite_I_EX_reg <= 0;
	end
	
	I_stage I_stage_instance(
	.reset(reset), 
	.clk(clk),
	.alu_zero(alu_zero),
	.RegWrite_MEM_WB(RegWrite_MEM_WB_reg_wire),
	.RegDst_MEM_WB(RegDst_MEM_WB_reg_wire),
	.MemToReg_MEM_WB(MemToReg_MEM_WB_reg_wire),
	.Jump_MEM_WB(Jump_MEM_WB_reg_wire),
	.load_type_MEM_WB(load_type_MEM_WB_reg_wire),
	.dmem_out_MEM_WB(dmem_out_MEM_WB_reg_wire),
	.alu_out_MEM_WB(daddr_MEM_WB_reg_wire),
	.imm_MEM_WB(imm_MEM_WB_reg_wire),
	.pc_MEM_WB(pc_MEM_WB_reg_wire),
	.offset_branch(imm_EX),
	.RegWrite(RegWrite_I),
	.ALUSrc(ALUSrc_I),
	.MemToReg(MemToReg_I),	
	.Jump(Jump_I),
	.auipc(auipc_I),
	.jalr(jalr_I),
	.we(we_I),
	.load_type(load_type_I),
	.hazard_type(hazard_type_I),
	.RegDst(RegDst_I),
	.MemWrite(MemWrite_I),
	.ALUop(ALUop_I),
	.imm(imm_I),
   .rv1(rv1_I),
	.rv2(rv2_I),
	.pc(pc_I),
	.x31(x31_I),
	.Instruction(Instruction),
	.pc_candidate(pc_candidate),
	.current_instruction_type(current_instruction_type),
	.indata_parsed(indata_parsed),
	.RegWrite_test(RegWrite_test)

	);
	
		//Things to be recieved by the module - clk, reset, alu_zero(from alu output wire), MemToReg_MEM_WB,dmem_out_MEM_WB,alu_out_MEM_WB,imm_MEM_WB,pc_MEM_WB,Jump_MEM_WB,load_type_MEM_WE,offset_branch,
	//output  RegWrite_I,ALUSrc_I,MemToReg_I,Jump_I,auipc_I,jalr_I,MemWrite_I;
	//output [1:0] we_I;
	//output [2:0] load_type_I;
	//output [6:0] ALUop_I;
	//output [4:0] RegDst_I;
	//output [31:0] imm_I,rv1_I,rv2_I,pc_I,x31_I;
	
	//Things to be passed on to the next module - ALUop_I_EX,alu_src_I_EX,hazard_type_I_EX,RegDst_I_EX,imm_I_EX,Branch_I_EX,Jump_I_EX,jalr_I_EX,RegWrite_I_EX,rv1_I_EX,rv2_I_EX,MemToReg_I_EX,pc_I_EX,load_type_I_EX.
	
	reg RegWrite_I_EX_reg,ALUSrc_I_EX_reg,MemToReg_I_EX_reg,MemWrite_I_EX_reg,Branch_I_EX_reg,Jump_I_EX_reg,auipc_I_EX_reg,jalr_I_EX_reg;
	reg [1:0] we_I_EX_reg;
	reg [2:0] load_type_I_EX_reg,hazard_type_I_EX_reg;
	reg [6:0] ALUop_I_EX_reg;
	reg [4:0] RegDst_I_EX_reg;
	reg [31:0] imm_I_EX_reg,rv1_I_EX_reg,rv2_I_EX_reg,pc_I_EX_reg;

	
	always@(posedge clk)
		begin
			MemWrite_I_EX_reg <= MemWrite_I;
			RegWrite_I_EX_reg <= RegWrite_I;
			ALUSrc_I_EX_reg <= ALUSrc_I;
			MemToReg_I_EX_reg <= MemToReg_I;
			Jump_I_EX_reg <= Jump_I;
			auipc_I_EX_reg <= auipc_I;
			jalr_I_EX_reg <= jalr_I;
			we_I_EX_reg <= we_I;
			load_type_I_EX_reg <= load_type_I;
			hazard_type_I_EX_reg <= hazard_type_I;
			ALUop_I_EX_reg <= ALUop_I;
			RegDst_I_EX_reg <= RegDst_I;
			imm_I_EX_reg <= imm_I;
			rv1_I_EX_reg <= rv1_I;
			rv2_I_EX_reg <= rv2_I;
			pc_I_EX_reg <= pc_I;
		end
		
	wire RegWrite_I_EX_reg_wire,ALUSrc_I_EX_reg_wire,MemToReg_I_EX_reg_wire,MemWrite_I_EX_reg_wire,Branch_I_EX_reg_wire,Jump_I_EX_reg_wire,auipc_I_EX_reg_wire,jalr_I_EX_reg_wire;
	wire [1:0] we_I_EX_reg_wire;
	wire [2:0] load_type_I_EX_reg_wire,hazard_type_I_EX_reg_wire;
	wire [6:0] ALUop_I_EX_reg_wire;
	wire [4:0] RegDst_I_EX_reg_wire;
	wire [31:0] imm_I_EX_reg_wire,rv1_I_EX_reg_wire,rv2_I_EX_reg_wire,pc_I_EX_reg_wire;
		
		
	assign 		MemWrite_I_EX_reg_wire = MemWrite_I_EX_reg;
	assign 		RegWrite_I_EX_reg_wire = RegWrite_I_EX_reg;
	assign		ALUSrc_I_EX_reg_wire = ALUSrc_I_EX_reg;
	assign		MemToReg_I_EX_reg_wire = MemToReg_I_EX_reg;
	assign		Branch_I_EX_reg_wire = Branch_I_EX_reg;
	assign		Jump_I_EX_reg_wire = Jump_I_EX_reg;
	assign		auipc_I_EX_reg_wire = auipc_I_EX_reg;
	assign		jalr_I_EX_reg_wire = jalr_I_EX_reg;
	assign		we_I_EX_reg_wire = we_I_EX_reg ;
	assign		load_type_I_EX_reg_wire = load_type_I_EX_reg;
	assign		hazard_type_I_EX_reg_wire = hazard_type_I_EX_reg;
	assign		ALUop_I_EX_reg_wire = ALUop_I_EX_reg;
	assign		RegDst_I_EX_reg_wire = RegDst_I_EX_reg;
	assign		imm_I_EX_reg_wire = imm_I_EX_reg;
	assign		rv1_I_EX_reg_wire = rv1_I_EX_reg;
	assign		rv2_I_EX_reg_wire = rv2_I_EX_reg;
	assign		pc_I_EX_reg_wire = pc_I_EX_reg;
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	EX_stage EX_stage_instance(
	.alu_src(ALUSrc_I_EX_reg_wire),
	.Jump_I_EX(Jump_I_EX_reg_wire),
	.jalr_I_EX(jalr_I_EX_reg_wire),
	.auipc_I_EX(auipc_I_EX_reg_wire),
	.RegWrite_I_EX(RegWrite_I_EX_reg_wire),
	.MemToReg_I_EX(MemToReg_I_EX_reg_wire),
	.MemWrite_I_EX(MemWrite_I_EX_reg_wire),
	.we_I_EX(we_I_EX_reg_wire),
	.RegDst(RegDst_I_EX_reg_wire),
	.hazard_type(hazard_type_I_EX_reg_wire),
	.load_type_I_EX(load_type_I_EX_reg_wire),
	.op_alu(ALUop_I_EX_reg_wire),
	.imm(imm_I_EX_reg_wire),
	.pc_I_EX(pc_I_EX_reg_wire),
	.rv1(rv1_I_EX_reg_wire),
	.rv2(rv2_I_EX_reg_wire),
	.rv1_prev(daddr_EX_MEM_reg_wire),
	.rv2_prev(daddr_EX_MEM_reg_wire),
	.rv1_mem(dmem_out_MEM_WB_reg_wire),
	.rv2_mem(dmem_out_MEM_WB_reg_wire),
	.dwdata_I_EX(rv2_I_EX_reg_wire),
	.alu_zero(alu_zero),
	.RegDst_EX_MEM(RegDst_EX),
	.MemWrite_EX_MEM(MemWrite_EX),
	.auipc_EX_MEM(auipc_EX),
	.Jump_EX_MEM(Jump_EX),
	.jalr_EX_MEM(jalr_EX),
	.RegWrite_EX_MEM(RegWrite_EX),
	.MemToReg_EX_MEM(MemToReg_EX),
	.we_EX_MEM(we_EX),
	.load_type_EX_MEM(load_type_EX),
	.pc_EX_MEM(pc_EX),
	.daddr_EX_MEM(daddr_EX),
	.dwdata_EX_MEM(dwdata_EX),
	.imm_EX_MEM(imm_EX)
);
	
	 
	//Things passed on from this module : daddr_EX_MEM,dwdata_EX_MEM,we_EX_MEM,drdata_EX_MEM,MemToReg_EX_MEM,alu_out_EX_MEM,imm_EX_MEM,pc_EX_MEM,Jump_EX_MEM,load_type_EX_MEM
	
//wire MemToReg_EX,MemWrite_EX,Jump_EX,auipc_EX,jalr_EX,RegWrite_EX,alu_zero;
//wire [1:0] we_EX;
//wire [2:0] load_type_EX;
//wire [4:0] RegDst_EX;
//wire [31:0] imm_EX,daddr_EX,dwdata_EX,drdata_EX,alu_out_EX;
	
	
	reg MemToReg_EX_MEM_reg,MemWrite_EX_MEM_reg,Jump_EX_MEM_reg,auipc_EX_MEM_reg,jalr_EX_MEM_reg,RegWrite_EX_MEM_reg;
	reg [1:0] we_EX_MEM_reg;
	reg [2:0] load_type_EX_MEM_reg;
	reg [4:0] RegDst_EX_MEM_reg;
	reg [31:0] imm_EX_MEM_reg,daddr_EX_MEM_reg,dwdata_EX_MEM_reg,pc_EX_MEM_reg; //daddr_EX_MEM_reg has the alu output
	
	always@(posedge clk)
		begin
			auipc_EX_MEM_reg <= auipc_EX;
			jalr_EX_MEM_reg <= jalr_EX;
			MemToReg_EX_MEM_reg <= MemToReg_EX;
			MemWrite_EX_MEM_reg <= MemWrite_EX && (!alu_zero);
			Jump_EX_MEM_reg <= Jump_EX;
			we_EX_MEM_reg <= we_EX;
			load_type_EX_MEM_reg <= load_type_EX;
			imm_EX_MEM_reg <= imm_EX;
			daddr_EX_MEM_reg <= daddr_EX;
			dwdata_EX_MEM_reg <= dwdata_EX;
			pc_EX_MEM_reg <= pc_EX;
			RegDst_EX_MEM_reg <= RegDst_EX;
			RegWrite_EX_MEM_reg <= RegWrite_EX && (!alu_zero);
		end
		
	wire MemToReg_EX_MEM_reg_wire,MemWrite_EX_MEM_reg_wire,Jump_EX_MEM_reg_wire,auipc_EX_MEM_reg_wire,jalr_EX_MEM_reg_wire,RegWrite_EX_MEM_reg_wire;
	wire [1:0] we_EX_MEM_reg_wire;
	wire [2:0] load_type_EX_MEM_reg_wire;
	wire [4:0] RegDst_EX_MEM_reg_wire;
	wire [31:0] imm_EX_MEM_reg_wire,daddr_EX_MEM_reg_wire,dwdata_EX_MEM_reg_wire,drdata_EX_MEM_reg_wire,pc_EX_MEM_reg_wire;
	
	
		assign	auipc_EX_MEM_reg_wire = auipc_EX_MEM_reg;
		assign	jalr_EX_MEM_reg_wire = jalr_EX_MEM_reg;
		assign	MemToReg_EX_MEM_reg_wire = MemToReg_EX_MEM_reg;
		assign	MemWrite_EX_MEM_reg_wire = MemWrite_EX_MEM_reg;
		assign	Jump_EX_MEM_reg_wire = Jump_EX_MEM_reg;
		assign	we_EX_MEM_reg_wire = we_EX_MEM_reg;
		assign	load_type_EX_MEM_reg_wire = load_type_EX_MEM_reg;
		assign	imm_EX_MEM_reg_wire = imm_EX_MEM_reg;
		assign	daddr_EX_MEM_reg_wire = daddr_EX_MEM_reg;
		assign	dwdata_EX_MEM_reg_wire = dwdata_EX_MEM_reg;
		assign	pc_EX_MEM_reg_wire = pc_EX_MEM_reg;
		assign	RegDst_EX_MEM_reg_wire = RegDst_EX_MEM_reg;
		assign	RegWrite_EX_MEM_reg_wire = RegWrite_EX_MEM_reg;
	
	
	
	//.clk(clk), .daddr(alu_out), .dwdata(rv2), .we(we), .drdata(dmem_out),.d0(d0),.we_signals(we_signals),.dwdata_parsed(dwdata_parsed)
	
	MEM_stage MEM_stage_instance( 
	 .clk(clk),
	 .RegWrite_EX_MEM(RegWrite_EX_MEM_reg_wire),
	 .RegDst_EX_MEM(RegDst_EX_MEM_reg_wire),
	 .MemToReg_EX_MEM(MemToReg_EX_MEM_reg_wire),
	 .MemWrite_EX_MEM(MemWrite_EX_MEM_reg_wire),
	 .pc_EX_MEM(pc_EX_MEM_reg_wire),
	 .auipc_EX_MEM(auipc_EX_MEM_reg_wire),
	 .Jump_EX_MEM(Jump_EX_MEM_reg_wire),
	 .jalr(jalr_EX_MEM_reg_wire),
	 .we(we_EX_MEM_reg_wire),
	 .load_type_EX_MEM(load_type_EX_MEM_reg_wire),
	 .imm_EX_MEM(imm_EX_MEM_reg_wire),
    .daddr(daddr_EX_MEM_reg_wire),
    .dwdata(dwdata_EX_MEM_reg_wire), 
	 .daddr_MEM_WB(daddr_MEM),
    .drdata(dmem_out_MEM),
	 .d0(d0),
	 .MemToReg_MEM_WB(MemToReg_MEM),
	 .imm_MEM_WB(imm_MEM),
	 .pc_MEM_WB(pc_MEM),
	 .Jump_MEM_WB(Jump_MEM),
	 .auipc_MEM_WB(auipc_MEM),
	 .jalr_MEM_WB(jalr_MEM),
	 .load_type_MEM_WB(load_type_MEM),
	 .RegWrite_MEM_WB(RegWrite_MEM),
	 .RegDst_MEM_WB(RegDst_MEM)
	 
	);
	
	//Things to be passed from the block : d0,MemToReg_MEM_WB,dmem_out_MEM_WB,alu_out_MEM_WB,imm_MEM_WB,pc_MEM_WB,Jump_MEM_WB,load_type_MEM_WE
	
//wire MemToReg_MEM,Jump_MEM,auipc_MEM,jalr_MEM,RegWrite_MEM;
//wire [2:0] load_type_MEM;
//wire  [31:0] imm_MEM,dmem_out_MEM,alu_out_MEM,pc_MEM,d0;
	
	reg MemToReg_MEM_WB_reg,Jump_MEM_WB_reg,auipc_MEM_WB_reg,jalr_MEM_WB_reg,RegWrite_MEM_WB_reg;
	reg [2:0] load_type_MEM_WB_reg;
	reg [4:0] RegDst_MEM_WB_reg;
	reg  [31:0] imm_MEM_WB_reg,dmem_out_MEM_WB_reg,daddr_MEM_WB_reg,pc_MEM_WB_reg;
	
	always@(posedge clk)
		begin
			auipc_MEM_WB_reg <= auipc_MEM;
			MemToReg_MEM_WB_reg <= MemToReg_MEM;
			RegWrite_MEM_WB_reg <= RegWrite_MEM;
			Jump_MEM_WB_reg <= Jump_MEM;
			jalr_MEM_WB_reg <= jalr_MEM;
			load_type_MEM_WB_reg <= load_type_MEM;
			imm_MEM_WB_reg <= imm_MEM;
			dmem_out_MEM_WB_reg <= dmem_out_MEM;
			daddr_MEM_WB_reg <= daddr_MEM;
			pc_MEM_WB_reg <= pc_MEM;
			RegDst_MEM_WB_reg <= RegDst_MEM;
		end

	//wire MemToReg_MEM_WB_reg_wire,Jump_MEM_WB_reg_wire,auipc_MEM_WB_reg_wire,jalr_MEM_WB_reg_wire,RegWrite_MEM_WB_reg_wire;
	//wire [2:0] load_type_MEM_WB_reg_wire;
	//wire [31:0] imm_MEM_WB_reg_wire,dmem_out_MEM_WB_reg_wire,alu_out_MEM_WB_reg_wire,pc_MEM_WB_reg_wire;
		
		assign	auipc_MEM_WB_reg_wire = auipc_MEM_WB_reg;
		assign	MemToReg_MEM_WB_reg_wire = MemToReg_MEM_WB_reg;
		assign	RegWrite_MEM_WB_reg_wire = RegWrite_MEM_WB_reg;
		assign 	RegDst_MEM_WB_reg_wire = RegDst_MEM_WB_reg;
		assign	Jump_MEM_WB_reg_wire = Jump_MEM_WB_reg;
		assign	jalr_MEM_WB_reg_wire = jalr_MEM_WB_reg;
		assign	load_type_MEM_WB_reg_wire = load_type_MEM_WB_reg;
		assign	imm_MEM_WB_reg_wire = imm_MEM_WB_reg;
		assign	dmem_out_MEM_WB_reg_wire = dmem_out_MEM_WB_reg;
		assign	daddr_MEM_WB_reg_wire = daddr_MEM_WB_reg;
		assign	pc_MEM_WB_reg_wire = pc_MEM_WB_reg;
		
	
endmodule

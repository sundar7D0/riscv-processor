`timescale 1ns / 1ps
	//IMP ERRORS: No 2 drivers in diff always; not F/F or latch template: if IP/OP is used in always block without being in sensitivity list of it.
module cpu(
    input clk,
    input reset,
    input [31:0] idata,   // data from instruction memory
    input [31:0] drdata,  // data read from data memory
    output reg [31:0] dwdata, // data to be written to data memory
    output reg [3:0] we,      // write enable signal for each byte of 32-b word
    output reg [31:0] daddr,  // address to data memory
    output reg [31:0] iaddr,  // address to instruction memory
	 // Additional outputs for debugging
    output reg [31:0] x31,    //For handling exceptions.
    output reg [31:0] pc  //Program Counter.
);
/*    //Below I/O for ALU and RF.
     output reg [5:0] op,  //Opcode for ALU.
     output reg [5:0] rs1, rd, rs2,
	  output reg [31:0] in1,
     output reg [31:0] in2,
	  output reg [11:0] imm,//For Load and Store instructions.
	  output reg [4:0] shamt,//For Shift instructions.
//   input [31:0] out,
//   input [31:0] rv1, rv2,
	  output reg [31:0] rf_indata
     wire reset;
     wire [31:0] iaddr;  // address to instruction memory
     wire [31:0] idata;   // data from instruction memory
     wire [31:0] daddr;  // address to data memory
     wire [31:0] drdata;  // data read from data memory
     wire [31:0] dwdata; // data to be written to data memory
     wire [31:0] we;      // write enable signal for each byte of 32-b word
	 // Additional outputs for debugging
     wire [31:0] x31;    //For handling exceptions.`
	  wire [31:0] x31_alu;    //For handling exceptions particularly for ALU. 
     wire [31:0] pc;    //Program Counter.
    //Below I/O for ALU and RF.
*/
     reg [5:0] rs1, rd, rs2;//RF start.
	  reg [31:0] rf_indata;
	  reg regwrite;
     wire [31:0] out, rv1, rv2;//RF end.
	  reg [5:0] op;//ALU start.
	  reg [4:0] shamt;
	  reg [11:0] imm;//immediate for store instr.
     reg [31:0] in1,in2;//ALU end.
     wire [31:0] x31_alu;//For handling exceptions particularly for ALU. 

     reg [31:0] pc_imm;//For PC absolute and relative jumps--EXTRAS.//reg flag;//FOR WRITING DATA TO DMEM IN NEXT CLOCK CYCLE.

rf rf1(
	.clk(clk),
	.rs1(rs1),
	.rv1(rv1),
	.rs2(rs2),
	.rv2(rv2),
	.rd(rd),
	.rf_indata(rf_indata),
	.regwrite(regwrite),
	.reset(reset)
);

alu alu1(
	.in1(rv1),
	.in2(in2),
	.shamt(shamt),
	.op(op),
	.out(out),
	.x31(x31_alu)//For encoding errors/exceptions.
);

initial
begin
	pc_imm=32'h0;
	imm=11'h0;
end

always@*
begin
if(reset)
begin
pc_imm=0;rf_indata=0;
shamt=0;in1=0;in2=0;
imm=0;rs1=0;rs2=0;
rd=0;op=0;pc=0;
x31=0;we=0;dwdata=0;//Initializing every required thing to 0.
end
else
begin//Decoding instruction and generating appropriate control signals.
case(idata & 32'h7F)
32'b0110111://LUI (Load Upper Immediate).
begin
	we=0;
	rd=idata [11:7];
	rf_indata={idata[31:12],12'h000};
	regwrite=1'b1;
	pc=pc+4;
end
32'b0010111://AUIPC (Add Upper Immediate to PC).
begin
	we=0;
	rd=idata [11:7];
	pc_imm={idata[31:12],12'h000};
	regwrite=1;
	pc=pc+pc_imm;
end
32'b1101111://JAL (Jump And Link).
begin
	we=0;
	rd=idata [11:7];
	rf_indata=pc+4;
	pc_imm={{19{idata[31]}},idata[31],idata[21:12],idata[22],idata[30:23],1'b0};
	regwrite=1;
	pc=pc+pc_imm;
end
32'b1100111://JALR (Jump And Link Register).
begin
	we=0;
case(idata[14:12])
3'b0:
begin
	rs1=idata[19:15];
	rd=idata [11:7];
	rf_indata=pc;
	pc_imm={idata[31:20],12'h000}+rv1;
	pc=pc_imm;
end
default:
begin
x31=32'd3;pc=pc+4;//Error Code:3.
end
endcase
end
32'b1100011://Branch Statements.
begin
we=0;
case(idata[14:12])
3'b000://BEQ(Branch if EQUAL).
begin
if(rv1==rv2)
begin  
	pc_imm={{18{idata[31]}},idata[31],idata[7],idata[30:25],idata[11:8],0};
	rs1=idata[19:15];rs2=idata[24:20];pc=pc+pc_imm;//Branching Out.
end
end
3'b001://BNE(Branch if Not Equal).
begin
if(rv1!=rv2)
begin
	rs1=idata[19:15];rs2=idata[24:20];
	pc_imm={idata[31],idata[7],idata[30:25],idata[11:8],0};
	pc=pc+pc_imm;//Branching Out.
end
end
3'b100://BLT(Branch if Less Than).
begin
if($signed(rv1)<$signed(rv2))
begin
	rs1=idata[19:15];rs2=idata[24:20];
	pc_imm={idata[31],idata[7],idata[30:25],idata[11:8],0};
	pc=pc+pc_imm;//Branching Out.
end
end
3'b101://BGE(Branch if Greater than or Equal to).
begin
if($signed(rv1)>=$signed(rv2))
begin
	rs1=idata[19:15];rs2=idata[24:20];
	pc_imm={{19{idata[31]}},idata[31],idata[7],idata[30:25],idata[11:8],0};
	pc=pc+pc_imm;//Branching Out.
end
end
3'b110://BLTU(Branch if Less Than Unsigned).
begin
if(rv1<rv2)
begin
	rs1=idata[19:15];rs2=idata[24:20];
	pc_imm={{19{idata[31]}},idata[31],idata[7],idata[30:25],idata[11:8],0};
	pc=pc+pc_imm;//Branching Out.
end
end
3'b111://BGEU(Branch if Greater than or Equal to Unsigned).
begin
if(rv1>=rv2)
begin
	rs1=idata[19:15];rs2=idata[24:20];
	pc_imm={{19{idata[31]}},idata[31],idata[7],idata[30:25],idata[11:8],0};
	pc=pc+pc_imm;//Branching Out.
end
end
default:
begin
    pc_imm=32'h0;x31=32'd4;pc=pc+4;//Error Code:4.
end
endcase
end
32'b0000011:
begin
we=0;pc=pc+4;
case(idata[14:12])
3'b000://LB (Load Byte).
begin
	rs1=idata[19:15];rd=idata[11:7];imm=idata[31:20];
	daddr=rv1+imm;regwrite=1;
	rf_indata=(drdata & 32'hFF<< (8*imm))>>(8*imm);
	rf_indata={{5'd24{rf_indata[7]}},rf_indata[7:0]};
end
3'b001://LH (Load HalfWord).
begin
	rs1=idata[19:15];rd=idata[11:7];imm=idata[31:20];
	daddr=rv1+imm;
	regwrite=1;
	rf_indata=(drdata & 2'hFFFF<< (8*imm))>>(8*imm);
	rf_indata={{16{rf_indata[15]}},rf_indata[15:0]};
end
3'b010://LW (Load Word).
begin
	rs1=idata[19:15];rd=idata[11:7];imm=idata[31:20];
	daddr=rv1+imm;regwrite=1;rf_indata=drdata;
end
3'b100://LBU (Load Byte Unsigned).
begin
	rs1=idata[19:15];rd=idata[11:7];imm=idata[31:20];
	daddr=rv1+imm;regwrite=1;
	rf_indata=drdata & 2'hFF<< (8*imm);
end
3'b101://LHU (Load HalfWord Unsigned).
begin
	rs1=idata[19:15];rd=idata[11:7];imm=idata[31:20];
	daddr=rv1+imm;regwrite=1;
	rf_indata=drdata & 2'hFFFF<< (8*imm);
end
default:x31=32'd05;
endcase
end
32'b0100011:
begin
rs1=idata[19:15];rs2=idata[24:20];imm={idata[31:25],idata[11:7]};daddr=imm+rv2;pc=pc+4;
case(idata[14:12])
3'b000://SB (Store Byte).
begin
	we[3:0]= 4'b1 << (imm%4);
   dwdata=rv1;///////WRITING DATA TO DMEM IN SAME CYCLE./////////
end
3'b001://SH (Store HalfWord).
begin
if(we%4==0 || we%4==2)//Misaligned cases where %4==1 or 3 is excluded.
begin
	we[3:0]=(we%4==0)?4'b0011:4'b1100;
   dwdata=rv1;///////WRITING DATA TO DMEM IN SAME CYCLE./////////
end
else
	x31=32'd8;
end
3'b010://SW (Store Word).
begin
	we[3:0]=4'b1111;
	dwdata=rv1;///////WRITING DATA TO DMEM IN SAME CYCLE./////////
end
default:
begin
	x31=32'd06;
end
endcase
end
32'b0010011://ALU Operations.
begin
	we=0;rs1=idata[19:15];rd=idata[11:7];in1=rv1;pc=pc+4;
case(idata & 32'h7000)
32'h0000://ADDI (Add Immediate).
begin
	op=6'b000000;
	imm=idata [31:20];
	in1=rv1;
	in2=imm;
	rf_indata=out;
end
32'h2000://SLTI (Shift if Less Than Immediate).
begin
	op=6'b000001;
	imm=idata [31:20];
	in1=rv1;
	in2=imm;
	rf_indata=out;
end
32'h3000://SLTIU (Shift if Less Than Immediate Unsigned).
begin
	op=6'b000010;
	imm=idata [31:20];
	in1=rv1;
	in2=imm;
	rf_indata=out;
end
32'h4000://XORI (XOR Immediate).
begin
	op=6'b000011;
	imm=idata [31:20];
	in1=rv1;
	in2=imm;
	rf_indata=out;
end
32'h6000://ORI (OR Immediate).
begin
	op=6'b000100;
	imm=idata [31:20];
	in1=rv1;
	in2=imm;
	rf_indata=out;
end
32'h7000://ANDI (AND Immediate).
begin
	op=6'b000101;
	imm=idata [31:20];
	in1=rv1;
	in2=imm;
	rf_indata=out;
end
32'h1000://SLLI (Logical Left Shift by Shamt).  
begin
	op=6'b000110;
	shamt=idata[24:20];
	rf_indata=out;
end
32'h5000://SRLI (Logical Right Shift by Shamt) & SRAI (Arithmetic Shift Right).
begin	
	op=(idata[30]>idata[31])?6'b001000:6'b000111;
	shamt=idata[24:20];
	rf_indata=out;
end
endcase
end
32'h33:
begin
we=0;
pc=pc+4;
case(idata & 32'h7000)//Errors by checking first 11 bits of idata is not done!!!.
32'h0000:
begin
	op=(idata[30]>idata[31])?6'b001010:6'b001001;
	rs2=idata[24:20];
	in2=rv2;
	rf_indata=out;
end
32'h1000:
begin	
	op=6'b001011;
	rs2=idata[24:20];
	in2=rv2;
	rf_indata=out;
end
32'h2000: 
begin
	op=6'b001100;
	rs2=idata[24:20];
	in2=rv2;
	rf_indata=out;
end
32'h3000:
begin
	op=6'b001101;
	rs2=idata[24:20];
	in2=rv2;
	rf_indata=out;
end
32'h4000:
begin
	op=6'b001110;
	rs2=idata[24:20];
	in2=rv2;
	rf_indata=out;
end
32'h5000:
begin
	op=(idata[30]>idata[31])?6'b010000:6'b001111;
	rs2=idata[24:20];
	in2=rv2;
	rf_indata=out;
end
32'h6000:
begin
	op=6'b010001;
	rs2=idata[24:20];
	in2=rv2;
	rf_indata=out;
end
32'h7000:
begin
	op=6'b010010;
	rs2=idata[24:20];
	in2=rv2;
	rf_indata=out;
end
endcase
end
endcase    //x31_alu=x31_alu_cpu;--------check later for exceptions.
end
end

always @(posedge clk)
begin//Incrementing PC.
	iaddr=pc;
/*case(PCSrc)
2'b10:
	pc=pc_imm+32'h0;//Absolute jump.
2'b01:
	pc=pc+pc_imm;//Relative jump.
default :
	pc=pc+4;//Regular.
endcase
PCSrc=2'b00;*/
end
endmodule
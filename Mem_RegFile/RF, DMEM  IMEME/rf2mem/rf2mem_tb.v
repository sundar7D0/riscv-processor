`timescale 1ns / 1ps

module rf2m_tb;

	integer total_d=0, total_e=0, total_rf=0, error_d=0, error_e=0, error_rf=0;     //For general stats.

	reg clk;    // Inputs of uut1
	reg we_rf;
	reg enable_rf;
	reg [4:0] rs1;
	reg [4:0] rd;
	reg [31:0] indata;    
   // Inputs of uut2
	reg [31:0] iaddr;
	// Inputs of uut3
   reg [3:0] we;
	reg write_only;
   reg [11:0] daddr;//Actually 32 bits but 4K mem here.
   reg [31:0] datain;  

	// Outputs
	wire [31:0] rv1;    //uut13
	wire [31:0] idata;    //uut2
   wire [31:0] outdata;    //uut3	
	
	// Instantiate the Unit Under Test (UUT)

	rf_bram uut1 (
		.clk(clk), 
		.we_rf(we_rf), 
		.enable_rf(enable_rf), 
		.rs1(rs1), 
		.rd(rd), 
		.indata(indata), 
		.rv1(rv1)
	);
	
	bram_imem uut2 (
	.iaddr(iaddr),
	.idata(idata)
	);

	bram_dmem uut3 (
	.clk(clk),
   .we(we),
	.write_only(write_only),
   .daddr(daddr),    //Actually 32 bits but 4K mem here.
   .datain(datain),
   .outdata(outdata)
	);
	
always #5 clk = ~clk;
// Initialize Inputs
// Wait 100 ns for global reset to finish

task imem_check;
input [31:0] address;
input [31:0] expected_instruction; 
begin
iaddr = address;
@(posedge clk);
begin
	if (idata == expected_instruction) begin
	$display($time, " Passed: Expected=%08x and Output=%08x", expected_instruction, idata);
	end else begin
	$display($time, " Failed: Expected=%08x but Output=%08x", expected_instruction, idata);
	error_d = error_d + 1;
	end
   end
total_d = total_d + 	1;
end
endtask

task dmem_write;
input [3:0] we0;
input write_only0;
input [11:0] daddr0;//Actually 32 bits but 4K mem here.
input [31:0] datain0;
begin
@(posedge clk);
begin
   we = we0;
	write_only = write_only0;
	daddr = daddr0;
	datain = datain0;
end
end
endtask;

task dmem_check;
input [3:0] we1;
input write_only1;
input [11:0] daddr1;//Actually 32 bits but 4K mem here.
input [31:0] expected_data1; 
begin
 we = we1;
 write_only = write_only1;
 daddr = daddr1;
 @(posedge clk);
 @(posedge clk);
begin
	if (outdata == expected_data1) begin
	$display($time, " Passed: Expected=%08x and Output=%08x", expected_data1, outdata);
	end else begin
	$display($time, " Failed: Expected=%08x but Output=%08x", expected_data1, outdata);
	error_e = error_e + 1;
   end
end
total_e = total_e + 1;
end
endtask;

task rf2mem_check;
input we_rf0;
input [4:0] rd0; 
input [4:0] rs10;
input [31:0] indata0;
input [31:0] expected_data2;
begin
enable_rf=1;
if (we_rf0==1)
begin
   we_rf = 1;
	rd = rd0;
   indata = indata0;
end
else
begin
	we_rf = 0;
   rs1 = rs10;
 @(posedge clk);
 @(posedge clk);
begin
	if (rv1 == expected_data2) begin
	$display($time, " Passed: Expected=%08x and Output=%08x", expected_data2, rv1);
	end else begin
	$display($time, " Failed: Expected=%08x but Output=%08x", expected_data2, rv1);
	error_rf = error_rf + 1;
   end
end
total_rf = total_rf + 1;
end
end
endtask

initial begin
		clk = 0;
      #100;
		//$readmemh("instructions.txt", instructions);
   	imem_check('b0,32'hFFFF0023);    //Hardcoded IMEM values in imem.v as we can't write into imem.
		imem_check('b1,32'hFFFF0103);
		imem_check('b10,32'hFFFF1023);
		imem_check('b11,32'hFFFF1103);
			
      dmem_write(4'b1111,1,0,32'h1F0F0F0F);    //Writing values to DMEM and then reading from RF and DMEM.
#100;
		dmem_check(4'b0000,0,0,32'h1F0F0F0F);
#100;

		dmem_write(4'b1010,1,1,32'h11111111);
#100;
		dmem_write(4'b1000,1,2,32'h3F0F0F0F);
#100;
		dmem_write(4'b0001,1,3,32'h3F0F0F0F);
#100;
		dmem_write(4'b1111,1,4,32'h3F0F0F0F);
#100;		
		dmem_check(4'b0000,0,1,32'h11001100);
#100;		
		dmem_check(4'b0000,0,2,32'h3F000000);
#100;
		dmem_check(4'b0000,0,0,32'h1F0F0F0F);
#100;		
		dmem_check(4'b0000,0,3,32'hF);
#100;		
		dmem_check(4'b0000,0,4,32'h3F0F0F0F);
#100;  	
//		dmem_check(4'b0000,0,1023,32'h0);
#100;      
		dmem_check(4'b0000,0,1,32'h11001100);
#100;
      rf2mem_check(1'b1,4'd10,0,32'hFFFF0000,0);
#100;		
		rf2mem_check(1'b1,4'd13,0,32'h0000FFFF,0);
#100;
      rf2mem_check(1'b0,0,4'd10,0,32'hFFFF0000);    //Give first argumnet input with '.
#200;
if (error_d > 0) begin
$display("Failed%d out of %d - IMEM", error_d, total_d);
end else begin
$display("PASS %d - IMEM",total_d);
end

if (error_e > 0) begin
$display("Failed%d out of %d - DMEM", error_e, total_e);
end else begin
$display("PASS %d - DMEM",total_e);
end

if (error_rf > 0) begin
$display("Failed%d out of %d - RF", error_rf, total_rf);
end else begin
$display("PASS %d - RF",total_rf);
end

$finish;
end
    
endmodule
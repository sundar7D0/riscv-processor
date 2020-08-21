`timescale 1ns / 1ps

module rf(
input clk,//Clock for synchronous writes.
input reset,//To reset all outputs.
input regwrite,//To decide whether to write to rf or not, default is read.
input [5:0] rs1, rs2, rd,//Two read and 1 write register.
input [31:0] rf_indata,//Indata to be written into rd1.
output reg [31:0] rv1, rv2//Outdata from values of rs1, rs2 addr in rf.
);
reg [31:0] rf[0:31];//Register file (decrease width based on constraints!).
//Initializing all values in RF=0.
integer i=0;
initial
begin
for(i=0;i<32;i=i+1)
rf[i]=32'b0;
end 
always
begin
if(reset)
begin
rv1=0;rv2=0;
end
else
begin
rv1=rf[rs1];//Reading from RF.
rv2=rf[rs2];
end
end
always @(posedge clk)
begin
if(regwrite)
begin
if(rd==5'b0)
begin
end
else
rf[rd]=rf_indata;//Writing to RF.
end
end
endmodule
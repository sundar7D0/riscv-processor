`timescale 1ns / 1ps

/*
module rf2m(
  input we,
  input clk,
  input [4:0] rs1,rs2,rd,
  input [31:0] indata,
  output reg [31:0] rv1,rv2
	);    //reg [31:0] RF[31:0];    //--Array implementation.

bram_dmm rf_1 (
  .clka(clka), // input clka
  .wea(wea), // input [0 : 0] wea
  .addra(addra), // input [4 : 0] addra
  .dina(dina), // input [7 : 0] dina
  .douta(douta) // output [7 : 0] douta
);    //IP Core BRAM method.
*/

module rf_bram (
input clk,
input we_rf,
input enable_rf,
input [4:0] rs1, rd, 
input [31:0] indata,
output reg [31:0] rv1
);
reg [31:0] mem_rf[31:0];
initial begin
mem_rf[0] = 0;
end

always @*
begin
if (we_rf & enable_rf)
	begin
   mem_rf[rd]<=indata;
	end
if (enable_rf)
	begin
	rv1<=mem_rf[rs1];
	end
end
endmodule
`timescale 1ns / 1ps

module bram_imem(
input clk,
input [31:0] iaddr,
output reg [31:0] idata
);

reg [31:0] instrmem [1023:0];

initial begin
instrmem[0]= 32'hFFFF0023;
instrmem[1] = 32'hFFFF0103;
instrmem[2] = 32'hFFFF1023;
instrmem[3] = 32'hFFFF1103;
end

always @(iaddr)
begin
idata <= instrmem[iaddr];
end

endmodule
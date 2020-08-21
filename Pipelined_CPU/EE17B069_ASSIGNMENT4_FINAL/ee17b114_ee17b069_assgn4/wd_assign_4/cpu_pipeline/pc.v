`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:30:10 10/18/2019 
// Design Name: 
// Module Name:    pc 
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
module pc_module(Out, In, Clock, Reset);
   output[31:0] Out;
   input [31:0] In;
   input  Clock, Reset;
   reg   [31:0] Out;
 
   initial begin
      Out = 32'd0;
   end

   always@(posedge Clock or posedge Reset) begin      
      if(Reset == 1'b1) 
         Out <= 32'd0;
      else 
         Out <= In;
   end   
endmodule

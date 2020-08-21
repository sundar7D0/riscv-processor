`timescale 1ns / 1ps

module bram_dmem(
input clk,
input [3:0] we,
input write_only,
input [11:0] daddr,//Actually 32 bits but 4K mem here.
input [31:0] datain,
output reg [31:0] outdata
);

integer i=0;
reg [31:0] DMEM [1023:0];     //[7:0] DMEM [1023:0] [3:0]

/*
initial begin
while (i<1024)
begin
    DMEM [i] = 32'h0;    //Like initial reset.
    i = i+1;	 
end
i=0;
end
*/

always @(posedge clk)
begin
case (we)
4'b0000:    
begin
if(write_only==0)
begin
	outdata[31:0] <= DMEM[daddr[11:0]];
end
end
4'b0001:    
begin
if (write_only==1)
begin 
	DMEM[daddr[11:0]] <= datain [31:0] & 32'hFF;
end
else
begin
	outdata [31:0] <= DMEM[daddr[11:0]] & 32'hFFFFFF00;
end
end
4'b0010:
begin 
if (write_only==1)
begin
	DMEM[daddr[11:0]] <= datain [31:0] & 32'hFF00;
end
else
begin
	outdata [31:0] <= DMEM[daddr[11:0]] & 32'hFFFF00FF;
end
end
4'b0011:
begin
if (write_only==1)
begin
	DMEM[daddr[11:0]] <= datain [31:0] & 32'hFFFF; 
end
else
begin
	outdata [31:0] <= DMEM[daddr[11:0]] & 32'hFFFF0000;
end
end
4'b0100:    
begin
if(write_only==1)
begin
	DMEM[daddr[11:0]] <= datain [31:0] & 32'hFF0000;
end
else
begin
	outdata [31:0] <= DMEM[daddr[11:0]] & 32'hFF00FFFF;
end
end
4'b0101:
begin
if(write_only==1)
begin
	DMEM[daddr[11:0]] <= datain [31:0] & 32'hFF00FF;
end
else
begin
	outdata [31:0] <= DMEM[daddr[11:0]] & 32'hFF00FF00;
end
end
4'b0110:
begin
if(write_only==1)
begin
	DMEM[daddr[11:0]] <= datain [31:0] & 32'hFFFF00;
end
else
begin
	outdata [31:0] <= DMEM[daddr[11:0]] & 32'hFF0000FF;
end
end
4'b0111:
begin
if(write_only==1)
begin
    DMEM[daddr[11:0]] <= datain [31:0] & 32'hFFFFFF;
end
else
begin
	 outdata [31:0] <= DMEM[daddr[11:0]] & 32'hFF000000;
end
end
4'b1000:
begin
if(write_only==1)
begin
    DMEM[daddr[11:0]] <= datain [31:0] & 32'hFF000000;
end
else
begin
	 outdata [31:0] <= DMEM[daddr[11:0]] & 32'hFFFFFF;
end
end
4'b1001:
begin 
if(write_only==1)
begin 
    DMEM[daddr[11:0]] <= datain [31:0] & 32'hFF0000FF;
end
else
begin
	 outdata [31:0] <= DMEM[daddr[11:0]] & 32'hFFFF00;
end
end
4'b1010:    
begin
if(write_only==1)
begin
	DMEM[daddr[11:0]] <= datain [31:0] & 32'hFF00FF00;
end
else
begin
	outdata [31:0] <= DMEM[daddr[11:0]] & 32'hFF00FF;
end
end
4'b1011:
begin
if(write_only==1)
begin
	DMEM[daddr[11:0]] <= datain [31:0] & 32'hFF00FFFF;
end
else
begin
	outdata [31:0] <= DMEM[daddr[11:0]] & 32'hFF0000;
end
end
4'b1100:
begin
if(write_only==1)
begin
	DMEM[daddr[11:0]] <= datain [31:0] & 32'hFFFF0000;
end
else
begin
	outdata [31:0] <= DMEM[daddr[11:0]] & 32'hFFFF;
end
end
4'b1101:
begin
if(write_only==1)
begin
	DMEM[daddr[11:0]] <=  datain [31:0] & 32'hFFFF00FF;
end
else
begin
	outdata [31:0] <= DMEM[daddr[11:0]] & 32'hFF00;
end
end
4'b1110:
begin
if(write_only==1)
begin
	DMEM[daddr[11:0]] <= datain [31:0] & 32'hFFFFFF00;
end
else
begin
	outdata [31:0] <= DMEM[daddr[11:0]] & 32'hFF;
end
end
4'b1111:
begin
if(write_only==1)
begin
    DMEM[daddr[11:0]] <= datain [31:0];//or + datain & 32'hFFFFFFFF.
end
end

endcase    //dataout <= mem_dmem[addr[11:2]][][addr[1:0]]
end

endmodule
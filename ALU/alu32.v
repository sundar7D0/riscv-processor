`include "parameters.v"

module ALU32 (
    in1, in2, op, out
);
    input [`width-1:0] in1, in2;
    input [`OPWIDTH-1:0] op;
    output reg [`width-1:0] out;

    always @(in1 or in2 or op) begin
        out = in1 + in2;
    end

endmodule
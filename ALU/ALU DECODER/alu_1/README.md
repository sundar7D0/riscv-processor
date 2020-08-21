# Assignment 1: ALU
 Combination ALU that implements all ALU operations required in the RISC-V RV32I base integer instruction set.  The list of instructions is available on page 130 of the file `riscv-spec.pdf` that has been uploaded on Moodle.  The encodings of instructions are as per that table.

## Inputs
1. `inreg1.txt`: contents of the first input to the ALU for each test
2. `inreg2.txt`: contents of the second input to the ALU for each test
3. `instr.txt`: instruction for each test
4. `expreg.txt`: expected output for each test
    The inputs to the ALU are themselves provided to us: it is not required to read them from a register, or to generate the inputs from the immediate operand.  This is a simplification we are assuming for this problem, since this part will have to be solved later when you implement the instruction decoder and register file.

## Given

You are given a test bench, a parameters file, and two skeleton Verilog files: one for the ALU, and one for a Dummy Decoder module.  The reason for this module is that the ALU by itself should not need to receive the full 32-bit instruction to perform its job.  It needs only a smaller opcode.  The decoder normally handles the task of examining the instruction and creating the opcode.  In the present assignment, you need not implement a complete decoder, only concentrate on what is required for performing ALU operations.

Keep in mind that the opcode sequence and the process by which you convert from instruction to opcode are completely open to you: you can use your own encoding, and whether you use `case` statements or `if` statements or other encodings in Verilog are up to you.

## Output

The ALU is a combinational module and will generate a 32-bit output for each input combination.  The expected output values are read from the file, and the test bench will compare against the expected output to generated the list of passed/failed tests.

## Assignment Solution
1. alu32.v is the alu verilog module file which based on op code performs operations on the input [logics based on the RISCV info. pdf];
2. dummy-decoder.v used to decode instr to opcode;
3. Test bench with tasks to check inputs;
4. Other input files + parameters.v mentioned above.
    My code passes all given test cases and is synthensizable. Hardware implementation was also performed on 19/08/2019.

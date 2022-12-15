Goal Implement a single cycle CPU

## Assumptions
1. IMEM and DMEM are capable of combinational read, and DMEM does clocked write (value in memory updated at clock edge).
2. IMEM and DMEM sizes will be restricted so that it can be implemented on the available hardware - you do not have to implement them.
3. Instruction memory databus width is 32 bits, so you always read back 32 bit data. But the address you get will be a byte address, which means you need to truncate to nearest multiple of 4 and read that value. For example, if IADDR=0, 1, 2 or 3 the same 32-bit value will be returned, similarly 4-7 etc.
4. Data memory should be capable of byte, half-word and word reads and writes, but the databus width is always 32 bits.
5. For reading: DADDR=0,1,2,3 will all return the same value, but inside the CPU you should extract the correct byte or half-word. We will use the notation that DMEM[addr] returns a 32-bit value, while DMEMB[addr] is the byte value stored at the exact address.
6. Example: assume DMEM[0] contains the 32-bit value 0x12345678. Because this is a little-endian system, it will be stored as DMEMB[0] = 0x78, DMEMB[1] = 0x56, DMEMB[2] = 0x34, DMEMB[3] = 0x12. Assume x2=0
LW x1, 0(x2) will result in x1 = 0x12345678
LH x1, 0(x2) => x1 = 0x00005678
LH x1, 2(x2) => x1 = 0x00001234
LH x1, 1(x2) is a misaligned access error - you can ignore this for now
LB x1, 0(x2) => x1 = 0x00000078
LB x1, 1(x2) => x1 = 0x00000056
7. For writing, you should update only the appropriate values. To enable this, assume that you have 4 separate write enable signals we[0:3], and the appropriate value should be written.
8. Example, assume for each of the below that DMEM[0] = 0x12345678 as before, x2=0, and x1=0xabcdef90
SW x1, 0(x2) => we[3:0] = 1111, DMEM[0] = 0xabcdef90
SH x1, 0(x2) => we[3:0] = 0011, DMEM[0] = 0x1234ef90
SH x1, 2(x2) => we[3:0] = 1100, DMEM[0] = 0xef905678
SH x1, 1(x2) is a misaligned access error
SB x1, 0(x2) => we[3:0] = 0001, DMEM[0] = 0x12345690
SB x1, 1(x2) => we[3:0] = 0010, DMEM[0] = 0x12349078
etc.
9. Note for writing: the DMEM does not know whether you are trying to write a byte or half-word, so the shifting of data before writing has to be done inside the CPU itself. The we signal is only used to enable the appropriate byte writes, and will not do any shifting of the data.
Module interface
module CPU(
    input clk,
    input reset,
    output [31:0] iaddr,  // address to instruction memory
    input [31:0] idata,   // data from instruction memory
    output [31:0] daddr,  // address to data memory
    input [31:0] drdata,  // data read from data memory
    output [31:0] dwdata, // data to be written to data memory
    output [3:0] we,      // write enable signal for each byte of 32-b word
    // Additional outputs for debugging
    output [31:0] x31,
    output [31:0] pc
)

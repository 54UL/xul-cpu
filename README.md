# 4 BIT XUL CPU
toy risc-cpu/mcu/soc for running minimalistic video games (pong, tetris, etc)

# Specs
    - 4 bit instruction set
    - 16 bit address space
    - dedicated stack with 64 levels
    - rendering (SSD1306 COMMANDS) and input instructions
    - toy spec, just for fun.

# Instructions

0X01 NOP
0X02 MOVX
0X03 LDX
0X04 CALL
0X05 RET
0X06 PUSH
0X07 POP
0X08 DRAW
0X09 ALU
0X0A JMPX

# Assembler (TODO)
todo...

# FPGA desing and synthesis (TODO)
todo...

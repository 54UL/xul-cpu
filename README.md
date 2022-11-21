# Minimalist CPU, assembler and emulator for educational approach

* ISA Like CPU implementation
* Low level CPU desing (digital logic)
* RISC Architecture
* Assembler CLI tool
* UI Emulator

# XUL Assembly features
* XU-4

# XUL Emulator features
* CLI 
* QT5 UI EMU

# XU Internal architecture specification overview

* One CPU status register (CSTAT reg)
* 2 internal G.P registers (X & Y registers) and one accumulator (Z register) 
* 256 x 8 internal non-volatile boot-loader memory
* 8 bit synchronous half-duplex serial port module
* Half duplex internal data and addresses buses

## XU4 CPU/MCU Specs
* 4 bit program word
* 4 bit ALU (signed integer operations)
* 8 bit internal bus
* 16 bit program counter
* 16 bit external RAM addressing
* 16 x 8 bit stack pointer  

# Minimalist CPU, assembler and emulator for educational approach

* ISA Like CPU implementation
* Low level CPU desing (digital logic)
* RISC Architecture
* Assembler CLI tool
* UI Emulator

# XUL Assembly features
* XU-4
* XU-8
* XU-16

# XUL Emulator features
* All XU instruction sets
* CHIP-8
* Z80

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

## XU8 CPU/MCU Specs
... yeah

## XU16 CPU/MCU Specs

* 16 bit program counter
* 16 bit internal data bus
* 16 bit RAM external addressing
* 16 bit ALU (16 bit signed integer operations and binary16(half precision) operations)
* 8 bit internal non-volatile bootloader memory
* 8 bit stack pointer reg (call stack is stored in external ram) 
* half duplex data bus (no bus matrix)
* synchronous serial port module







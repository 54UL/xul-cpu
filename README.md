# XUL16 CPU ARCH features

* 16 bit program word
* 16 bit internal data bus
* 16 bit RAM external addressing
* 16 bit alu (16 bit signed integer operations and binary16(half precision) operations)
* 8 bit internal volatile bootloader memory
* 8 bit stack pointer reg (call stack is stored in external ram) 
* half duplex data bus (no bus matrix)
* experimental feature:
    * serial port with extended instruction set for this

## Example programs
#### MOV EXAMPLE
```
    MOV Z,#16
TEST:
    MOV @05,Z
    MOV Z,#0A
    MOV @05,Z
    SRL Z 
    JMP TEST
```

#### ALU EXAMPLE
* EXAMPLE OPERATION: ((A+B) - C) * D
* A = 266
* B = 244 
* C = 256
* D = 4
* RESULT = 1016

```
# ASSEMBLER SYMBOLS

CONST  VAR_A 266
VAR_16 VAR_B 244
VAR_16 VAR_C 256
VAR_16 VAR_D 4
VAR_8 string_pointer 0x00

DB STRING_RESULT "result was:"


# CODE
    MOV Z,#VAR_A   
    ALUZ ADD @VAR_B
    ALUZ SUB @VAR_C
    ALUZ MUL @VAR_D
```
-----------

## Glossary

Anotation | Description 
-----|-----------| 
#A   | progam memory constant
@a   | indirect addressing from prog mem to ram
@r   | ram address
<-   | data direction (rhs to lhs)  
->   | data direction (lhs to rhs)  
?    | ternary expression (boolean ? true: false )
[]   | array

## Instruction set summary

INSTRUCTION | OPERANDS 
------------|------------| 
MOV         |
LDZ         |
JMP         |
JMPZZ       |
JMPNE       |
CALL        |
RET         |
TBIT        |
SBIT        |
ALUZ        |

## ALU operations summary
OPERATION   | OPERANDS 
------------|------------| 
ADD         |
SUB         |
MUL         |
NOT         |
AND         |
OR          |
XOR         |
FADD        |
FSUB        |
FMUL        |

# INSTRUCTION SET DESCRIPTION

## NOP
    sets all internal signals to 0 and runs for 4 clock cycles

## LDZ #A
    load #A to Z

CODE | FUNCTION 
-----|-----------| 
0X1  |   PROGMEM[PC] -> Z 
   
## MOVZ @a,q 
    moves contents from @a to Z if q = 0 otherwise from Z to @a.  

CODE | FUNCTION 
-----|-----------| 
0X2  |   @a (q ? <- : ->) Z      

## MOVZ @a,q 
    moves contents from @a to Z if q = 0 otherwise from Z to @a.  

CODE | FUNCTION 
-----|-----------| 
0X2  |   @a (q ? <- : ->) Z   

-----------





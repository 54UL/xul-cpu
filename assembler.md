# XUL (ISA) Spec.

## Example programs
#### MOV EXAMPLE
```
    LDZ   #16
TEST:
    MOV   @05,Z
    LDZ   #0A
    MOV   @05,Z
    ALOPZ SR 
    JMP   TEST
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
    ALOPZ ADD @VAR_B
    ALOPZ ADD @VAR_C #twos complement...
    ALOPZ MUL @VAR_D
```
## Memory types
* word value : word sized value, example (0xf if word = 4 bits)
* word address : word sized address, example (0xFFFF if addr word = 16 bits)
* bit: bit position from 0 to word max bits count

## Addresing modes
* Indirect mode through any ram location (@)

## Instruction set 

INSTRUCTION | OPERANDS                |  TOTAL SIZE (words)  
------------|-------------------------|------------------
MOV         | address, adresss        |      3  
LDZ         | Z, word value           |      2 
JMP         | word address            |      2
CALL        | word address            |      2
RET         |                         |      1
BIZ         | word address            |      2
SIC         | Z, bit                  |      2
SIS         | Z, bit                  |      2
ALOP        | Z, operation, address   |      3           

## ALU operations summary
OPERATION   | OPERANDS 
------------|------------| 
ADD         | Z, @r
MUL         | Z, @r
NOT         | Z
AND         | Z, @r
OR          | Z, @r
SR          | Z, @r
SL          | Z, @r

# INSTRUCTION SET DESCRIPTION

## NOP
    sets all internal signals to 0 and runs for 4 clock cycles

## LDZ #A
    load #A to Z

CODE | FUNCTION 
-----|-----------| 
0X1  |   PROGMEM[PC] -> Z 





-----------
# Assembler Directives

DIRECTIVE  | DESCRIPTION
-----------|-----------------------------------------------------------------|
ARCH       | Architecture working on
VAR_16     | Reserves space in ram to allocate an value
CONST      | Defines a numerical constant in the assembler context
ALIGN      | Aligns output to the specified boundary.
STACKDEPTH | Indicates the call stack depth remaining.
DB         | Defines constant byte(s).
DW         | Defines constant word(s).
IF         | Conditional assembly.
ELSE       | Alternates conditional assembly.
ELSIF      | Alternates conditional assembly.
ENDIF      | Ends conditional assembly.
END        | Ends assembly.
ENDM       | Ends macro definition.
INCLUDE    | Textually includes the content of the specified file.
MACRO      | Macro definition
ORG        | Sets location counter within current psect

# XUL (ISA) Spec.

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
    ALOP ADD @VAR_B
    ALOP SUB @VAR_C
    ALOP MUL @VAR_D
```

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
ALOP        |

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
SFTL        | 
SFTR        |

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

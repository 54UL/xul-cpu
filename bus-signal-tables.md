
# CPU BUS SIGNALS REFERENCE

### RESET
### LDPC
### R/W RAM
### BUS MUX 0
### BUS MUX 1
### ALU ENABLE
### ADD PC ???
## MUX TABLE
BUS MUX 0 | BUS MUX 1 | FUNCTION
----------|-----------|----------|   
0         |     0     |  PROG MEM DATA -> BUS 
0         |     1     |  RAM DATA -> BUS
1         |     0     |  Z REG DATA -> BUS
1         |     1     |  NOT DEFINED

# Micro operations tables

---------------------------------
## LDZ #A
CODE: 0X01 
CLOCK CYCLES: 2
CYCLES      | LDPC | R/W RAM | RAE | Z ENABLE | BUS MUX 0 | BUS MUX 1 | BREAK | 
------------|------|---------|-----|----------|-----------|-----------|-------|
C0(PC)      |  0   |    0    |  0  |    1     |      0    |     0     |   0   |   
C1(PC+1)    |  0   |    0    |  0  |    0     |      0    |     0     |   1   |    
C2(PC+2)    |  0   |    0    |  0  |    0     |      0    |     0     |   0   |        
C3(PC+3)    |  0   |    0    |  0  |    0     |      0    |     0     |   0   |

## MOVZ @a
CODE: 0X02 
CLOCK CYCLES: 2
CYCLES      | LDPC | R/W RAM | RAE | Z ENABLE | BUS MUX 0 | BUS MUX 1 | BREAK | 
------------|------|---------|-----|----------|-----------|-----------|-------|
C0(PC)      |  0   |    0    |  1  |    1     |      1    |     0     |   0   |   
C1(PC+1)    |  0   |    0    |  0  |    0     |      0    |     0     |   1   |    
C2(PC+2)    |  0   |    0    |  0  |    0     |      0    |     0     |   0   |        
C3(PC+3)    |  0   |    0    |  0  |    0     |      0    |     0     |   0   |

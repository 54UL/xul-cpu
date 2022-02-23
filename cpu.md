# 4 bit cpu

## I.S Glossary
#A: constant in progmem
@a: ram address

# INSTRUCTION SET
### NOP
### LDZ #A
### MOVZ @a

# CPU SIGNALS
### RESET
### LDPC
### R/W RAM
### BUS MUX 0
### BUS MUX 1

# MUX TABLE

BUS MUX 0 | BUS MUX 1 | FUNCTION
----------|-----------|----------|   
0     |     0     |  PROG MEM DATA -> BUS 
0     |     1     |  RAM DATA -> BUS
1     |     0     |  Z REG DATA -> BUS
1     |     1     |  NOT DEFINED


# MOVZ @a
CODE: 0X02
CYCLES| LDPC | R/W RAM | RAE           | Z ENABLE | BUS MUX 0 | BUS MUX 1 | BREAK | 
------|------|---------|------------------|----------|-----------|-----------|-------|
C1    |  0   |    0    |        1         |    0     |      0    |     0     |   0   |   
C2    |  0   |    0    |        0         |    1     |      0    |     0     |   0   |    
C3    |  0   |    0    |        0         |    0     |      0    |     0     |   0   |        
C4    |  0   |    0    |        0         |    0     |      0    |     0     |   0   |


MOV @RAM_ADRESS,Z :

MOV Z,@ROM_ADRESS :

MOV @RAM_ADDRESS_A,@RAM_ADDRESS_B




#PROGRAM 1

    MOV A,#16
TEST:
    MOV @05,A
    MOV A,#0A
    MOV @05,A
    JMP TEST





# 4 bit cpu
-----------
##  Glossary

Anotation | Description 
-----|-----------| 
#A   | progam memory constant
@a   | indirect addressing from prog mem to ram
@r   | ram address
<-   | data direction (left)  
->   | data direction (right)  
?    | ternary expression (boolean ? true : false )
[]   | array

-----------

# INSTRUCTION SET
RISC???

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


## MOP @T @M 
-----------
# CPU SIGNALS
### RESET
### LDPC
### R/W RAM
### BUS MUX 0
### BUS MUX 1
### ALU ENABLE
### ADD PC ???
-----------
# MUX TABLE

BUS MUX 0 | BUS MUX 1 | FUNCTION
----------|-----------|----------|   
0     |     0     |  PROG MEM DATA -> BUS 
0     |     1     |  RAM DATA -> BUS
1     |     0     |  Z REG DATA -> BUS
1     |     1     |  NOT DEFINED

-----------
# MOVZ @a

CODE: 0X02 
CLK CYCLES: 3
CYCLES| LDPC | R/W RAM | RAE           | Z ENABLE | BUS MUX 0 | BUS MUX 1 | BREAK | 
------|------|---------|------------------|----------|-----------|-----------|-------|
C0    |  0   |    0    |        1         |    0     |      0    |     0     |   0   |   
C1    |  0   |    0    |        0         |    1     |      0    |     0     |   0   |    
C2    |  0   |    0    |        0         |    0     |      1    |     0     |   0   |        
C3    |  0   |    0    |        0         |    0     |      0    |     0     |   1   |


MOV @RAM_ADRESS,Z :

MOV Z,@ROM_ADRESS :

MOV @RAM_ADDRESS_A,@RAM_ADDRESS_B


-----------

#PROGRAM 1

    MOV A,#16
TEST:
    MOV @05,A
    MOV A,#0A
    MOV @05,A
    JMP TEST





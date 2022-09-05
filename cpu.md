# 8 bit cpu

* 16 bit program counter
* ~65k bytes of program memory
* 256 bytes of ram
* 8 bit alu
* mixed address and data bus



### Example programs
```
#PROGRAM 1

    MOV A,#16
TEST:
    MOV @05,A
    MOV A,#0A
    MOV @05,A
    JMP TEST
```
-----------

## glossary

Anotation | Description 
-----|-----------| 
#A   | progam memory constant
@a   | indirect addressing from prog mem to ram
@r   | ram address
<-   | data direction (rhs to lhs)  
->   | data direction (lhs to rhs)  
?    | ternary expression (boolean ? true : false )
[]   | array



# INSTRUCTION SET


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





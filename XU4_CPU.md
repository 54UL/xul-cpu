
# XU4 IAS

## Registers


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

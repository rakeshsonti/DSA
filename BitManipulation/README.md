## Bit Manipulations
  ````
  & (bitwise AND) (all 1 -> 1 else 0 )
  
  | (bitwise OR) (one 1 -> 1)
  
  ^ (bitwise XOR) even 1-> 0 odd 1-> 1 e.g. 101^100=001
  
  << (left shift) e.g. 5<<2 [ 101-> 10100 (add zero to right) ]
  e.g. 10<<2 10*2=20, 20*2=40 e.g. 13<<3 13*2=26, 26*2=52, 52*2=104   [number*2^k]
  
  The left shift and right shift operators should not be used for negative numbers 
  If the second operand(which decides the number of shifts) is a negative number, it results in undefined 
  behaviour in C. For example results of both 1 <<- 1 and 1 >> -1 is undefined. Also, if the number is 
  shifted more than the size of the integer, the behaviour is undefined. For example, 1 << 33 is undefined
  if integers are stored using 32 bits. Another thing is, NO shift operation is performed if 
  additive-expression(operand that decides no of shifts) is 0. 
  
  >> (right shift) e.g. 5>>2 [ 101->001 (remove bits from left , shift position)
  e.g. 10>>3 means 10/2=5, 5/2=2, 2/2=1 e.g. 11>>2 11/2=5 ,5/2=2       [number/2^k]
  
  ~ (bitwise NOT) 101-> 010 e.g. 0 -> 1 and 1-> 0
  ````

> Note: XOR operation of 0 with any number is result the same number 0^23=23, 0^-34=-34

> Note: XOR with self is the 0 x^x=0, y^y=0














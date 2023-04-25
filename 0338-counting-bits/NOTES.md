#### if X is ODD
​
* then the (LSB) Least Significant Bit will always be set and dividing by 2 means right shifting the number by 1 bit.
* so if last bit is set and right shift it by 1 bit than the last set bit will be lost.
* therfore the new number Y has 1 set bit less than in compare to X
​
#### But if X is Even
​
* then LSB will be equal to 0, therefore even we do right shift by1 bit then only this 0 bit will be lost and no set bit got lost
* so When we have X has Even,
*
* no of set bit in X = no of set bit in Y
* and When X is ODD
*
* no of set bit in X = 1 + no of set bit in Y
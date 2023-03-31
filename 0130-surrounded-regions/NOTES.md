#### Time Complexity
tc-> O(m)+O(n)+O(m*n) +O(m*n)~O(m*n)
​
#### Space complexity
sc-> O(m*n) queue
​
#### Approach
* apply BFS algorithm
* iterate boundaries row and column and if boundaries contains 'O' then push it to queue
* pop front from queue and marks as '1'(we want special mark for non conversion 'O') and check all it's neighbour
* if neighbour contains 'O' then push it to queue and follow the step for all the item
* mark all the '1' to 'O' and 'O' to 'X' as '1' can not be convert to 'X'
## preorder
 #### Recursive approach
 `we can simply use the formula node->left->right to call recursive functions
 tc->O(n) and sc-> O(n)`
 #### Iterative approach
 ```we can use stack data structure
 1) push root to the stack and run a while loop til stack is not empty
 2) pop top element from stack and push it to resultant vector
 3) if right node of popped node is not empty then push it to stack
 4) if left node of popped node is not empty then push it to stack
 5) continue step 2->3->4 untill stack is not empty
 ```
 >Note: We are pushing right element first and then left element because stack work on LIFO principle
 tc-> O(n) sc-> O(n)
 ## postorder
  ### Recursive Approach
  ```
  1) Simply use the formula left->right->node
  tc-> O(n) for visiting all the nodes sc->O(n) for recursion
  ```
  ### Iterative Solution -1
  1) We can use two stack 
  2) first stack for perform operation on input data and second stack for storing the result and later on we will pop all the element and store in resultant vector
  3) follow the same step as follows in preorder
  4) push root to the stack and run a while loop til stack is not empty
  5) pop top element from stack and push it to resultant vector
  6) if right node of popped node is not empty then push it to stack
  7) if left node of popped node is not empty then push it to stack
  8) continue step 2->3->4 untill stack is not empty
  Note: tc-> O(n)

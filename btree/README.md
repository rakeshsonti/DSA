## preorder
 #### Recursive approach
 ```we can simply use the formula node->left->right to call recursive functions```
 >Note : tc->O(n) and sc-> O(n)
 #### Iterative approach
 ```we can use stack data structure
 1) push root to the stack and run a while loop til stack is not empty
 2) pop top element from stack and push it to resultant vector
 3) if right node of popped node is not empty then push it to stack
 4) if left node of popped node is not empty then push it to stack
 5) continue step 2->3->4 untill stack is not empty
 ```
 >Note: We are pushing right element first and then left element because stack work on LIFO principle
 > tc-> O(n) sc-> O(n)
 ## postorder
  ### Recursive Approach
  ```
  1) Simply use the formula left->right->node
   ```
 > Note : tc-> O(n) for visiting all the nodes sc->O(n) for recursion
 
  ### Iterative Solution -1
  ````
  1) We can use two stack 
  2) first stack for perform operation on input data and second stack for storing the result and 
  later on we will pop all the element and store in resultant vector
  3) follow the same step as follows in preorder
  4) push root to the stack and run a while loop til stack is not empty
  5) pop top element from stack and push it to resultant vector
  6) if right node of popped node is not empty then push it to stack
  7) if left node of popped node is not empty then push it to stack
  8) continue step 2->3->4 until stack is not empty
  ````
  > Note: tc-> O(n) sc->O(n)+O(n)
 ### Iterative Solution -2
 ````
 1) We will use an stack data structure
 2) if root node is not null then will simply push it to stack and change root to root->left else 
 if stack top is not null change root to right else pop top stack node and push it to resultant 
 vector and run a loop till stack is not empty and poped top node is equals to top right node 
 and push it to resultant vector.
 ````
 > tc->O(n) sc->O(n)

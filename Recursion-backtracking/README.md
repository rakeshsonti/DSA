### N-Queens
 ##### First approach
  1. create a box of n*n
  2. fill each cell with .
  3. if col size is equals to n then add board to result
  4. we will run a loop for row 0 to n-1 check if board[row][col] is possible or not
  5. we will check left portion of the row and upper diagonal and lower diagonal of the board if Q not found then will allow to insert Q in board
  6. once recursive function call over put cell back to . value
  
  > tc-> O(n!*n) we are trying to figure out all ways
  
  > sc-> O(n^2)
 ##### Second approach
  1. create a box of n*n
  2. fill each cell with .
  3. in base condition if col==n then add board to ans
  4. we wiil take three vector to track Q can be insert or not
  5. vector<int> leftRow(n, 0), upperDiagonal(2 *n - 1, 0), lowerDiagonal(2 *n - 1, 0);
  6. if (leftRow[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + col - row] == 0) 
  7. based on above condition we can check whether Q can be pushed or not
  8. once recursive call over make sure to revert the mark of hash vector and board
  
  > tc-> O(n!*n) we are trying all the possible combination
  
  > sc-> O(n) using extra hash and recursion
  -----------------------------------------------------------------------------------------------------------------  
  
  
  
  
  
  

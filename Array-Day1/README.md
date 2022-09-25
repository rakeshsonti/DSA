### 73. Set Matrix Zeroes
 ##### First Approach
  1. use extra O(mn) space to store 0 number position in row and count
  2. take two vector of row and column size with default value 0 to store position of zero
  3. iterate matrix each element and if 0 come mark it in extra vector row[i] = 1; col[j] = 1;
  4. now iterate row and col vector and check if it is 1 then change matrix entire row or column to 0

> tc-> O(mn)

> sc-> O(mn)

 ##### Second Approach
  1. instead of using extra space to store  0  position, use  first row and in first column
  2. while iterating matrix please take help of extra variable to check weather 0 exists in first row or first column
  3. based on first row and first column we can modify existing matrix except first row and first column
  4. first row and first column we will modify based on  extra variable

> tc-> O(mn)

> sc-> O(1)

----------------------------------------------------------------------------------------------

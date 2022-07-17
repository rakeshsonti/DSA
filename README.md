# SDE-Sheet
DSA Preparation start date 17 july 2022
### Arrays
 ### 1) 73-Set Matrix Zeroes : [Leetcode Problem Link](https://leetcode.com/problems/set-matrix-zeroes/)
  #### First Approch Time O(m*n)+O(m^2*n^2)+O(m*n) space O(m*n)
  * Take an auxilary array of original array size
  * Iterate array and check 0 element position
  * replace entire row and column of auxilary array with 1
  * repeate the 2 and 3 step for array elements
  * mark all position contains 1 in auxilary array to 0 in original array 

  #### Second Approch Time O(m*n)+O(m*n)+O(m*n) space O(m)+O(n)
  * Take two array of size m and n
  * Iterate array and store 0 element row index in first array and column index in second array
  * follows same step for all array element
  * iterate two auxilary array one by one and mark respective row and column as 0 in original array

   #### Third Approch Time O(m*n) space O(1)
   * Iterate array and check 0 element position
   * store all 0 row position in first column and column position in first row
   * Based on first row and column , will mark zero in original array
   * take one flag variable for first row and one for first column.
   * based on flag variable mark first row and first column to zero 

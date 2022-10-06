### 73. Set Matrix Zeroes
 ##### First Approach
 
 ````
   1. use extra O(mn) space to store 0 number position in row and count
   2. take two vector of row and column size with default value 0 to store position of zero
   3. iterate matrix each element and if 0 come mark it in extra vector row[i] = 1; col[j] = 1;
   4. now iterate row and col vector and check if it is 1 then change matrix entire row or column to 0
   ````
   
> tc-> O(mn)

> sc-> O(mn)

 ##### Second Approach
 
 ````
  1. instead of using extra space to store  0  position, use  first row and in first column
  2. while iterating matrix please take help of extra variable to check weather 0 exists in first row or first column
  3. based on first row and first column we can modify existing matrix except first row and first column
  4. first row and first column we will modify based on  extra variable
````

> tc-> O(mn)

> sc-> O(1)

----------------------------------------------------------------------------------------------
### 118. Pascal's Triangle
 ##### solution
 
  ````
  1. run a loop from 0 to n
  2. run another loop from 0 to n and add 1 if n==0 and n-1 index
  
  ````
  
 >  tc-> O(n^2)
  
 > sc-> O(1)
  -------------------------------------------------------------------------------------------
  ### 119. Pascal's Triangle II
   ##### First Solution
   
   ````
    1. run 0 to n a loop will call func to generate tringle for perticular index
    2. in func run loop from 0 to n-1 and check if i==0 or i==n-1 store 1 else vc.push_back(ans[i - 1] + ans[i]);
    3. here we used only O(n) extra space
   ````
    
 >   tc-> O(n^2)
    
 >   sc-> O(n)
  
   ##### Second approach
   
   ````
    1. run a loop from 1 to n and use a formula to generate pascle trigle nCr=(n-r+1)/r
    2. for tringle (prev(n-r+1))/r
   ````
  
>  tc-> O(n)
  
>  sc-> O(1)
  
  --------------------------------------------------------------------------------------------------------
  
  ### 31. Next Permutation
   ##### Approach
   
   ````
    1. run a loop from n-1 to 1
    2. find a number i-1 which is greater than its after no
    3. if there is no break point that mean simply sort the array and return it
    4. run the loop again from n-1 to 1 and find a no j which is greater than i-1 no
    5. simply swap i-1 and j and revert the arr from i to n thats your ans
   ````
    
  > tc-> O(n) find first no i-1 +(nlog(n))sorting+O(n) first second no+ )(n) reverse= O(n)
    
  > sc-> O(n)
    
 -----------------------------------------------------------------------------------------------------
    
  ### 53. Maximum Subarray
   ##### First Approach
   
   ````
    1. if vector size is 1 return nums[0]
    2. run loop from 0 to n-1
    3. if all vector value are less than 0 than we will return minValue value if(nums[i]>minValue)minValue=nums[i] maximum of al value flag will help to find all value are negative
    4. if currSum is less than zero than than assign it to zero else add current value
    5. if currSum is greater than max value than change the max value to curr value
   ````
    
  > tc-> O(n)
    
  > sc-> O(1)
  
##### Second approach
````
 1. assign sum =INT_MIN, currSum=0;
 2. run loop from 0 to n-1
 3. add curr value to currSum and check if currSum is greater than max value than assign max=currSum;
 4. if currSum<0 assign currSum=0;
 5 return max
 ````
 
 > tc-> O(n)
 
 > sc-> O(1)
 
 ------------------------------------------------------------------------------------------------------
### 121. Best Time to Buy and Sell Stock
 ##### First approach
 ````
  1. we run two loop 0 to n-1 and check each stock difference
  2. choose the maximum differce
  
 ````
 
 >  tc-> O(n^2)
  
 >  sc-> O(1)
 
 ##### Second approach
 
  ````
  1. run a loop from 0 to n-1 and maintain a minimum value in each and value step
  2. calculate difference b/w current value and min value
  3. return maximum difference
  ````
  
>  tc-> O(n)
  
>  sc-> O(1)
  
 ---------------------------------------------------------
  ### 48. Rotate Image
   ##### First approach
   
   ````  
    1. take extra vector to store the result
    2. traverse the matrix from last and store in front of the array
    3. swap the last row with front row
    4. assign back to original matrix
    
   ````
    
 > tc-> O(n^2)
    
 > sc-> O(n)
    
  ##### Second approach
   
   ````
   1. take one extra matrix
   2. ans[j][matrix.size()-i-1]=matrix[i][j]; assign to new array
   3. assign back to original array
   
   ````
   
 >  tc-> O(n^2)
    
 >  sc-> O(n)
    
----------------------------------------------------------------------------------------------------------------------    
### Merge Intervals
 ##### First approach
  
  ````
  1. take a map to store interval in key value pair
  2. first value will put into the map and iterate the vector from 1 to n-1
  3. if previous interval value is less than current key so will update the previous key value else insert it against new key
  4. put map value back to original vector
  ````
  
 > tc-> O(nlog(n))+O(n-1)+O(n)=O(nlog(n)) 
 
 > sc-> O(n)

 ##### Second approach
  ````
  1. in second approach instead of map we can maintain two variable to keep track previos interval key and value
  2. rest of the approach will be the same as first approach
 
  ````
 > tc->O(nlong(n))+O(n)=O(nlog(n))
 
 >  sc-> O(1)   
-----------------------------------------------------------------------------------------------------------------    
    
### 88. Merge Sorted Array
 ##### First approach
  ````
  1. Take a auxilary array of size (m+n)
  2. run a loop till i < m && j < n
  3. put sorted value in auxilary array
  4. copy back to original array
  ````
  
  >  tc->  O(m+n)  
  
  > sc->   O(m+n)
  
 ##### Second approach
  ````
  1. copy all data from second array to first array after index m+i to m+n
  2. sort the first array
  ````  
  >  tc->   O(n)+O(nlog(m+n))
  
  > sc->   O(1)

 ##### Third approach
 ````
  1. run a loop till i<m && n>0
  2. if nums1[i]>nums2[0] then swap nums1[i] and nums2[0] and sort the nums2 
  3. copy all data from num2 to num1
 ````
  >  tc->   O(m*nlog(n))+O(n)
  
  > sc->   O(1)
---------------------------------------------------------------------







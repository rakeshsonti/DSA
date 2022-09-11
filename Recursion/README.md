### Pascle Tringle
````
 1) iterate two loop
 2) first loop iterate till n time
 3) in second loop for first and last index we will add 1 
 4) for intermediate index , we will add some of previos level , j-1 and j sum
 ```` 
 > tc-> 0+1+2+3+4.....+(n-1)=(n-1)((n-1)+1)/2=(n^2-n)/2=O(n^2)
 
 >sc->O(1)

### Combination Sum
````
  1) We will use pick up of not pickup approach
  2) if pickup the element then do target-candidates[index]
  3) if not pick up then simply call function 
  4) if candidate[index] <=target then pick up the element 
  5) in base case if index==size of candidate then check if target is zero so include it to result and return
 ```` 

 > tc-> tc->O(2^t*k) t is the target and k is the average length
 
 > sc-> O(t*k) 

### Combination Sum 2
````
 1) In base condition if target is 0 then will push the result
 3) Run a loop from current index to size, we can not check previos element because it cause duplicate
 2) Check if we can add value to ds so add and move ahead and decrease target by value
 3) if current index and previos index value are same then we will not add to ds
 4) if current value is greater than target then break the loop
 ```` 
 > tc-> tc->O(2^t*k) t is the target and k is the average length
 
 > sc-> O(t*k) 

### Palindrom Partitioning
````
 1) In the base condition if index == size of string then add ds to result
 2) Run a loop from current index to size
 3) if current index to i is a palindrom substring then will add it to ds and call the function for the next index value with same ds
 4) if not then check the next i value is palindrom or not till n

 ```` 
>Time Complexity: O( (2^n) *k*(n/2) )
Reason: O(2^n) to generate every substring and O(n/2)  to check if the substring generated is a palindrome. O(k) is for inserting the palindromes in another data structure, where k  is the average length of the palindrome list.

>Space Complexity: O(k * x)
Reason: The space complexity can vary depending upon the length of the answer. k is the average length of the list of palindromes and if we have x such list of palindromes in our final answer. The depth of the recursion tree is n, so the auxiliary space required is equal to the O(n).



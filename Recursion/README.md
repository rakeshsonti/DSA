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

### Permutation Sequence

 ##### First brute force approach
 ````
 1. using for loop we will generate a number and store it to string
 2. call a recursive function who accept input string, index and resultant string
 3. base case if index == s.size() add to resultant string
 4. run a loop from index 0 to n
 5. swap index and i character and call func recursively
 6. swap back to original one
 ````
 > tc->O(n)-to generate a number+O(n! *n) recursion *push deep copy into data structure +O(n!log(n!)) sorting the array=O(n! log(n!))
 
 > sc-> O(n) we are using a recursion

 ##### Second approach
 ````
 1. as we know we have n place to get the factorial. getenrate a number using loop.
 2. we will decide first place so we have n! way to decide first place
 3. formula to find the places number[k / fact]
 4. erase that number from original string
 5. k=k%fact and fact=fact/s.size()
 6. if s.size()==0 break loop and return result
 ````
 > tc->O(n) generating a number+O(n)-> remove sarch space in each step=O(n^2)
   
 > sc-> O(n) storing the number in each step

### Permutations

 ##### First brute force approach
 ````
 1. use extra ds map to track whether element visited or not if visited mark it.
 2. in base case if index==s.size() then add ds to result
 3. call loop from 0 to n-1 and check if element unvisited call recursive function and add to ds and mark element as visited
 4. once recursion end mark the element as unvisited and pop back the element from ds
 ````
 > tc-> O(n!*n)-> run a loop n! time for n element

 > sc-> O(n) we will use map and recursion to track element visited or unvisited

 ##### Second approach
 ````
1. in base condition in size == ds.size() then add to ds
2. run a loop from index to n time and swap the elemnt before recursive call and swap back after recursion
 ````
 > tc-> O(n!*n)-> run a loop n! time for n element
   
 > sc-> O(1) not using any exertal data structure
 
 --------------------------------------------------------------------------------------
 ### 1823. Find the Winner of the Circular Game
  ##### Itearative solution
   ````
   1. use a queue to store n element
   2. run a loop till queue size is greater than 1
   3. maintain a index variable
   4. if index value equals to index then pop one element from top of the queue and index=0
   5. else pop element from back and push it to back of the queue and index++
   6. return queue.front() once loop over
   ````
  > tc-> O(nk) for removing one element we are waiting till  index beacome equals to k.so for removing n-1 element we are running loop till n*k
 
> sc-> O(1) if we ignore the size of vector to store the element in vector
 
 ##### Second approach Recursive solution
  ````
  1. Store n element in vector
  2. in base condition if(vc.size()==k) then return vc[0]
  3. In each recursive function ,increase the index by k and decrease the index by one because we are using o based indexing
  4. and index=index%vc.size index become out of bound
  5. remove the vc.begin() + index element from vector
  ````
>  tc-> O(n) calling recursion n time to remove n-1 element

>  sc-> O(n) using recursion
 
 -----------------------------------------------------------------------------------
  ### 22. Generate Parentheses 
   #### first approach tc-> 2^n sc-> O(1)
    ````
    1. we will use two variable to manage count of ( and ) bracket
    2. we have two choice either we add ( bracket and ) bracket but we can not add ) bracket before the ( bracket so open ( bracket is a good choice to start resultant string
    3. for preventing resultant string from unwanted closing bracket or invalid resultant string first will check if opening bracket is greater than closing bracket then only will add ) brack
    4. if(cl==n){
            ans.push_back(s);
            return;
        }
      ````  
        all opening bracket can be added even single closing bracket is not added , so once all closing bracket added that means our resultant string completed
![image](https://user-images.githubusercontent.com/52101117/197733033-47e8929f-741a-461e-b963-81e3a6c89dd8.png)

--------------------------------------------------------------------      
  ### 45. Jump Game II
   ### First Approach tc-> O(n) sc-> O(1)
    ````
    1. we will check all the possible way from the current index and decide which index will give maximum value
    2. choose the index will give max value and jump for next value.
    ````
----------------------------------------------------------------------------
### 241. Different Ways to Add Parentheses
 ##### First approach tc-> 2^n sc-> O(1) if we ignore recursion space complexity
  ````
  1. iterate all the element of the string
  2. check if current character is operator than call recursive function for the left substring and right substring
  3. if string is a single character than convert entire string into the int and add to the ans
  4.           for(auto i:left){
               for(int j:right){
                 if(curr=='+')ans.push_back(i+j);else if(curr=='-')ans.push_back(i-j); else if(curr=='*')ans.push_back(i*j);
               }
                }
        this loop help us to handle multiple ans and calculate resultant string based on them
   ````
  ##### Second approach tc-> O(n) sc-> O(n) if we ignore recursion
   ````
   1. approach will be the same as above only we will memoize the repetive result
   2. if left and right substring result alreay calculated then will simply use it else calculate it
   ````
![image](https://user-images.githubusercontent.com/52101117/199205848-6e7eb214-cccc-4001-aab5-88bdff7e44df.png)

--------------------------------------------------------------------------------------------





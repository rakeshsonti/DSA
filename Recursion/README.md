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
                     if(curr=='+')ans.push_back(i+j);
                     else if(curr=='-')ans.push_back(i-j); 
                     else if(curr=='*')ans.push_back(i*j);
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

![image](https://user-images.githubusercontent.com/52101117/199206312-09718168-48d9-46fc-8784-51b915ddf468.png)

--------------------------------------------------------------------------------------------
### 486. Predict the Winner
 ##### First Approach tc-> O(n) sc-> O(66)
  ````
  1. we will calculate the first person score by method and total score by loop. second person score will find through the second person score=total-first person score
  2. for the first person we have two choices either that person choose start index or last index
  3. once first person choose the value after that chance comes for the second person. second person can only choose from the remaining element that not choosed by first person. second person have the same choise either start element or last element.
  4. for the first person we will include the value into the result but for the second person we will simply moved the index.
  5. for first person we try to choose the max value so the that the first person could win but for the second person we will choose the min value so that it could not win
  6. i , j and flag is a unique combination in our approach so for memoization we will use all three combinations
  ````
----------------------------------------------------------------------------------------------------
### 64. Minimum Path Sum
 ##### First approach tc-> //tc->O(m*n) sc-> O(m*n)+O(path length) or O((m-1)+(n-1)) (for recursion)
   ````
   1. if we devide our problem to sub problem we come to know that we can choose two way if we start from the end , go to up or left and if we start from the start point then move to down or right
   2. we can take help of dp to reduce the unnecessary iteration
   3. we will iterate m*n time and store min value from up and left at dp[i][j]
   4. once we reached from right most corner to left most corner return the result
   5. if we crossed the corner mean i<0 & j<0 means we are not couting that result into our result so we will try add a max value so that result could exclude from the pair result
   ````
   
  ##### Second approach //tc->O(m*n) sc-> O(m*n)
  ````
  1. use tabulation approach to reduce recursion space complexity
  2. appraoch would be the same instead of calling in recursion will call same thing in iteration
  ````
  
  ##### Third approach //tc->O(m*n) sc-> O(m+n)
  ````
  1. we don't need m*n space , we can solve the problem in m+n space by maintaining curr and previous row
  ````
  
 ---------------------------------------------------------------------------------------------
### 120. Triangle
 #### First Approach 
  ````
  1. we will add current element and call recursive function for next row i element and i+1 element
  2. we take minimum value from both the element
  3. at the end we will have minimum value
  4. for avoiding the repetive value we will use dp to store minimum result
  ````
  ![image](https://user-images.githubusercontent.com/52101117/200887716-e80cdcf5-6076-41d5-81aa-bd280f211dd4.png)

  ---------------------------------------------------------------------------------
### 198. House Robber 
 #### First Approach (DP)  //tc->O(n) sc->O(n+2)dp array+O(n) recursion
  ````
  1. we have two option either we choose current or not choose current element
  2. if we don't choose current element then no need add it to result simply move ahead with i+1 index
  3. if we choose then current element then include current and move ahead with i+2 element 
  4. choose max element of adjacent element.
  5. use memoization to avoid unnecessary iteration
  ````
  ![image](https://user-images.githubusercontent.com/52101117/201303902-c7945e71-8555-4ef5-97ad-281151ab0a4e.png)

  #### Second Approach (iterative-> bottom up)  //tc->O(n) sc->O(n+2)dp array
   ````
   1. In iterative approach we will run a loop from 1-n
   2. i index in main array and in dp it's i+1 value so if we include means current value of main array+dp[i]
   3. if don't want to include the current value then dp[i-1]
   4. take max of both and store it to dp[i+1]
   5. at the end return dp[n]
  ````
  #### Third Approach (iterative-> bottom up)  //tc->O(n) sc->O(1)
   ````
   1. If we observe properly we don't need entire dp array
   2. two variable can sufficient
   3. take prev1 and prev2 and approach would be the same as previous

  ````
  ![image](https://user-images.githubusercontent.com/52101117/201306243-4d052550-e907-4d7c-9b51-31c51a12fd0b.png)

-----------------------------------------------------------------------
### 213. House Robber II
 #### First Approach (DP)  //tc->O(n) sc->O(2n)dp array+O(n) recursion
  ````
  1. we have two option either we choose current or not choose current element
  2. if we don't choose current element then no need add it to result simply move ahead with i+1 index
  3. if we choose then current element then include current and move ahead with i+2 element 
  4. choose max element of adjacent element.
  5. use memoization to avoid unnecessary iteration
  6. In base condition check if(index>=n || (index==n-1 &&isFirst))return 0;
  7. if first element is taking then avoid last element. for that we will maintain isFirst variable that insure if first element taking then it will be true else it will be false. based on that we will avoid first and last element condition
  8. for dp array instead of vector we will take array of int dp[101][2] . in case of vector it will throw time limit exceed.
  ````
  ------------------------------------------------------------------------------------------------
### 300. Longest Increasing Subsequence
 #### First Approach (DP)  //tc-> O(2^n) sc->O(n) recursion
  ````
  1. pick up current element if greater than previous element
  2. don't pick current element may be further we get greater element which give optimal result
  3. if current element smaller of equal so can not puckup
  
  ````
 #### Second Approach (DP)  //tc-> O(2^n) sc->O(n*n)+O(n) recursion
  ````
  1. pick up current element if greater than previous element
  2. don't pick current element may be further we get greater element which give optimal result
  3. if current element smaller of equal so can not puckup
  4. use dp to rid off repetive step
  5. declare dp of N*N but we can store element in dp, value can be 1e8 that is not possible so we will store current and previous index that can be extend till 1e4
  ````
 #### Third Approach (DP)  //tc-> O(2^n) sc->O(n)+O(n) recursion
  ````
  1. pick up current element if greater than previous element
  2. don't pick current element may be further we get greater element which give optimal result
  3. if current element smaller of equal so can not puckup
  4. use dp to rid off repetive step
  5. no need to use O(n*n) space we can solve the problem in O(n) space.
  ````
  ![image](https://user-images.githubusercontent.com/52101117/201735698-c861e6e6-dce3-4afd-9f5a-1ec225c093eb.png)

  --------------------------------------------------------------------------------
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

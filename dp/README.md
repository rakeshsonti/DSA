# Dynamic Programming
  * Memoization - Top Down
  * Tabulation  - Bottom Up
  
  ### Way to figure out it's an dp problem:
   * count the total no of ways
   * minimum or maximum result
   * try all posible ways (recursion)

 ### Shortcut of DP
   * try to represent the problem in terms of index
   * do all posible stuff on that index according to the problem statement
   * sum of all stuff-> count all ways
------------------------------------------------------------------------------------------------------------
### 509. Fibonacci Number
##### Recursion+memoization  tc->O(n) sc->o(n) recursion +O(n) memoization=O(n)
 * Fibbonacci number is a sum of previous two number
 * fn(n-1,vc)+fn(n-2,vc) formula will be used to calcuate the fibonacci number
 * if recursion base case we can use if(n<=1) return n; OR if(n==0)return 0;if(n==1 || n==2) return 1;
 * for avoiding the repeatation we will use memoization. We will use extra array of size of n+1 to store the result of already calculated sub-problem.
 * if result is already calculated then simply use stored result instead of calcuate from the screach.
 * if(vc[n]!=-1)return vc[n];
 * if result not calcuated then calculate the result and store that result to dp array.
 * return vc[n]=fn(n-1,vc)+fn(n-2,vc);

![image](https://user-images.githubusercontent.com/52101117/205710434-d6e2372d-35f3-4b31-845f-358a6d007522.png)

##### Tabulation+memoization  tc->O(n) sc->O(n) memoization=O(n)
* In tabulation we will use memoization dp array but decrease recursive space
* base case dp[0]=0;dp[1]=1;
* iterate from 2 to n and dp[i]=dp[i-1]+dp[i-2];
* return dp[n];

##### tabulation+space optimization approach tc->O(n) sc->O(1)
 * In this approach we will reduce the dp array and instead of dp array will use two pointer to manage the previous value
 * int prev1=0,prev2=1;
 *  int curr=prev1+prev2;
            prev1=prev2;
            prev2=curr;
  * return prev2;
------------------------------------------------------------------------------------------------------------
 ### 70. Climbing Stairs
  ##### Recursion+memoization  tc->O(n) sc->o(n) recursion +O(n) memoization=O(n)
  * As question mentioned we have two choices either move two step or one step.
  * We will move with both the step and calculate the total step if we reached at top.
  * We will reach on top if count become 0 else if we crossed the top then simply ignore those path.
  * Using memoization we can reduce unneccesary repeatation. 
  
  ##### Iterative solution with two pointer tc-> O(n) sc-> O(1)
   * As we observe the diagram pattern its a fabonicci sereas question
   * we can solve by maintaining two pointer prev1 and prev2
   
   ![image](https://user-images.githubusercontent.com/52101117/206392427-3b54e866-c39f-459d-b981-881755cac902.png)

----------------------------------------------------------------------------------------------------------------
  ### Frog Jump
  ##### Recursion+memoization  tc->O(n) sc->o(n) recursion +O(n) memoization=O(n)
  * As question mentioned we have two choices either move two step or one step.
  * We will move with both the step and choose the path which have minimum no of step requires
  * We will reach if count become 0
  * Using memoization we can reduce unneccesary repeatation. 
  
  ##### Iterative solution with two pointer tc-> O(n) sc-> O(1)
   * instead of using the dp array we can solve the problem using two pointer prev1 and prev2
   *    prev2=prev1;
        int curr=min(left,right);
        prev1=curr;
        
        ![image](https://user-images.githubusercontent.com/52101117/207913262-1573e5ae-9471-4e37-b201-1473a42737c5.png)
        
        ![image](https://user-images.githubusercontent.com/52101117/207913418-a1461832-09a4-48c6-9af4-ce6479e8a33a.png)

----------------------------------------------------------------------------------------------------------------
  ### Frog Jump K
  ##### Recursion+memoization  tc->O(n*k) sc->o(n) recursion +O(n) memoization=O(n)
  * As question mentioned we have two choices either move two step or one step.
  * We will move with both the step and choose the path which have minimum no of step requires
  * We will reach if count become 0
  * Using memoization we can reduce unneccesary repeatation. 
  * we have n subproblem and for each subproblem we will run a another look k time
  * make sure we are not use negative index in array for that we have following condition   if(index-i>=0){
   ###### Time Complexity: O(N *K)
   ##### Reason: The overlapping subproblems will return the answer in constant time. Therefore the total number of new subproblems we solve is 'n'. At every new subproblem, we are running another loop for K times. Hence total time complexity is O(N * K).

  ##### Iterative solution with two pointer tc-> O(n*k) sc-> O(1)
   * instead of using the dp array we can solve the problem using iterative approach
   * run a loop from 1 to n and run another loop from 1 to k for each subproblem.
   * as check minimum value in above recursive approach similarly we check here.
   * in this approach we can reduce extra rcursive approach
   
   ##### Way to reduce extra dp O(n) space to O(k) space
   * Instead of extra kn space we can take a extra space of k
   * as we move ahead in for loop of i we will add new i index into the k size dp array and remove previous element k-i
   * but in case of k=n it will take similar O(n) space
        
        
     ![image](https://user-images.githubusercontent.com/52101117/207913262-1573e5ae-9471-4e37-b201-1473a42737c5.png)

     ![image](https://user-images.githubusercontent.com/52101117/207913418-a1461832-09a4-48c6-9af4-ce6479e8a33a.png)

----------------------------------------------------------------------------------------------------------------
### Maximum sum of non-adjacent elements
 ##### Recursion+memozation tc-> O(n) sc-> O(n)memoization space + O(n)recursion 
  *  we will a function based on approach if we pickup the current element and then choose current+2 as a next element
  * else ignore current element and choose the next element
  * choose max from pick and non pick element
  * use dp to avoid repeatation
  
 ##### Iterative sol tc-> O(n) sc-> O(n)
  * In recursion we will call function recursively and start from the end to index 0
  * In iteration we will start from 1 to n-1
  * and first dp value initialize with first array value
  * now for pick up or non pick up we will use dp value to currIndex-1 and currentIndex-2
  * if we include the current element then include currentIndex-2 because it's not your adjacent
  * if we don't include the current then include currentIndex-1 
  * choose max value from pick and non pick and initialize it to dp[currentIndex]
  
##### Iterative sol tc-> O(n) sc-> O(1)
 * for space optimization we will use two varable prev1 and prev2
 * intead of storing the data into dp store data into only prev1 and prev2
 
 ![maxsumproblem2](https://user-images.githubusercontent.com/52101117/208286618-81979c2b-77b5-4c9b-9355-d9f486e8e416.jpg)

 --------------------------------------------------------------------------------------------------------------
### 62. Unique Paths
 #####   //tc-> O(m*n) sc-> O(m*n)memoization space+ recursive space O(m-1)+O(n-1)
  * In question they have provided eiather choose right path or down path
  * we have two choices
  * if left==m && right==n mean its reached to the goal then we will return 1 as we counted this path
  * if frog went out of path either left path or right path we will return 0
  * as they mentioned ans should be total number of path, so count both the way and return 
  * for memory optimization we will use dp array to avoid unneccesarry repeatation
 
 ##### tabulation with memoization  //tc-> O(m*n) sc-> O(m*n) memoization space
  * as we know we can either move to right or down 
  * so based on this approach we will start from the index 1 and assign dp[0][0]=1;
  * we can easily count  dp[left][right]=dp[left-1][right]+dp[left][right-1]; and run two loop from m*n
  
  ###### tabulation with space optimization
   * for space optimization instead of choosing dp of m*n we only need two array of size n
   * for previous row and current row
   * dp[left][right]=dp[left-1][right]+dp[left][right-1]; we can see row is always left-1 and left
   *  handle first index case if(i==0 && j==0)  prev1[j]=1;
   * if we follow our previous solution where we were count solution based on prev and current row but
     row fetching from 2d array but here it is seperate 
   if(i>0)left=prev[j];
           if(j>0)right=prev1[j-1];
           prev1[j]=left+right;
           
 ![Unique_Paths](https://user-images.githubusercontent.com/52101117/208712236-91547304-46c3-4dc3-b5a0-3f7e534ff7c4.jpg)
-------------------------------------------------------------------------------------------------------------
 ### 931. Minimum Falling Path Sum
  ##### Memoization //tc-> O(m)+O(m*n)+O(n)=O(m*n) sc-> O(m*n)
  * In case of two choices we can easily start but with three choices we need to take care of first row
  * we will start our call from each element one by one and calculate
  * at the end we will choose minimum as a result
  * we start from the last row and end on row 0
  * base condition       
      if(j<0 ||j>=m)return 1e9; // if we go out of column return max value so that it will be not calcuated in final result
      if(i==0)return mt[0][j]; // if we reached at the first row then include it to the result
  * include current element from the current row and we have three choices from previous row-> 1) i-1,j-1 2) i-1,j 3) i-1, j+1
  * choose mimimum and store it to DP
  
  ##### Tabulation  //tc-> O(m)+O(m*n)+O(n)=O(m*n) sc-> O(m*n)
  * In case of three choices , its little bit difficult to decide way
  * first check based on recursive solution we know we need previous row so we run a loop and store first row in dp
  * we know in top down approach we start from n-1 and calculate result at 0 so in tabulation we need to think from where we could calculate the result so think about the base case of top down
  * in previous approach we have tail recursion so we don't need to worry about first row, it will touch the first row and come back but here we don't have tail recursion so we first initialize the first row with first row of matrix
  * now we can easily calculate the result of prev,curr and next from previous row of dp as we calculate in top down approach
  * dp[i][j]=min(curr,min(prev,next));
  * at the end we have to iterate the last row of the DP and find the minimum value , this minimum value is our result
  ##### Tabulation with memory optimization //tc-> O(m)+O(m*n)+O(n)=O(m*n) sc-> O(m+1)+O(n+1)
  * As we above tabulation approach we don't need m*n dp array two vector of m and n size are enough to provide the same result
  * just replace the array in previous result
  
 ![image](https://user-images.githubusercontent.com/52101117/209432726-8810d696-3de1-41f3-b03d-029fda6e448e.png)
 ![image](https://user-images.githubusercontent.com/52101117/209432654-d2499292-36c0-4eaf-8e54-a413029b1ce5.png)


 ----------------------------------------------------------------------------------------------------------------
  ### 931. Minimum Falling Path Sum
  ##### Memoization //tc-> O(N*M*M) * 9 sc-> O(N) recursion stack space+ O(N*M*M) memoization space
  * In this problem we have a situation where bob and alice can move bottom left, bottom and botttom right. If bob move to bottom left so alice have 3 choice to move so they have total 9 choices.
  * there is we will take 3d dp space for memoization
  * if we talk about the base case they should not cross the left border as well as right border of the row
  *  if(colbob<0 || colalice<0 || colbob>=c || colalice>=c){
        return -1e9;
      }
  * second base case when both reached the last row then we need to decide based on there position if both reached on the same block then we will return only the single value else we will return sum of both
  * Now we will run a loop 3*3 time this loop we tell the relative position of bob and alice
  * if bob at the bottom position then alice can be left bottom ,bottom, and right bottom position
  * and we will also check if bob and alice both located on the same block in this case we will collect candy from only one block
  * else collect from both the block
  * collection the maximum candy and return it
 ------------------------------------------------------------------------------------------------------------------------
 ## DP on Subsequences
 ### Subset Sum Equal To K
 ``
 Note: difference between sequence and subset is sequence follow the order  but for subset it's not compulsary to follow a order
 ``
 ##### Memoization using recursion //tc-> O(n*target) sc-> O(n) recursion+ O(n*target) memoization
 * we will start from n-1 to 0 row and use the technique include or not include
 * if we include then make sure if(k>=arr[n]) else no need to include it
 * base case : if target become 0 if(k==0) return true 
 * base case : if we reached from n-1 to 0 row then check of first element in equals to zero
 * if(n==0){
        return (k==arr[0])?true:false;
    }
 * if we include then check the condition if we get after including
 * if(k>=arr[n])
 * we need only condition where we could get our answer so 
 * return dp[n][k]=(res1 || res2)?true:false;
 * Note: how you decide to take dp of size n*target ->>for getting the target value i need the values whose sum could help me to get target value , so i need the values whose always be less than the target value if it is greater than does not fit into my bucket so i choose the dp of size n*target
 
 ##### Tabulation solution //tc-> O(n*target) sc->  O(n*target) memoization
 * bottom up approach is completely different from top down approach. In this approach we will start from o to n-1
 * first think about the base case 
 *   target can be zero from 0 to n-1 column if we observe the picture properly
 *    for(int i=0;i<n;i++)dp[i][0]=true;
 * if index is zero then the only value can  be zero that is dp[i][0]
 *  if(arr[0]<=k)dp[0][arr[0]]=true;
 * follow the same approach as we follow in recurance
 * previous row will help use to get the current row in case of take and non take case
 * make sure if you include the value then it should be less than or equals to the target value
 * if(arr[ind]<=target)
                take=dp[ind-1][target-arr[ind]];
 * at the end this will be our ans return dp[n-1][k];
 
 ##### Space optimization-->  Tabulation solution //tc-> O(n*target) sc->  O(target)+O(target)=O(target)= memoization
 
 ![image](https://user-images.githubusercontent.com/52101117/209692527-a74852c7-9095-4c31-b75d-7a18d122f235.png)


 -----------------------------------------------------------------------------------------------------------------------------
 ### 416. Partition Equal Subset Sum
 ##### Follow above question for solution (Subset Sum Equal To K) in best case //tc-> O(n) sum+o(n*target) sc-> O(target) memoization
 * if total sum of a array is odd then it is not possible to devide the array into two equal subset sum
 * if total sum is even then we will find the target =totalSum/2 which we did in our previous question
 * if we get totalSum/2 in the array then definately we will get another part of the sub set
 ----------------------------------------------------------------------------------------------------------------------
 ### Partition a set into two subsets such that the difference of subset sums is minimum.
 ##### Follow above question for solution (Subset Sum Equal To K) in best case     //tc-> O(n*target) sc-> O(target)+O(target) memoization
 * our k will be the total sum, instead of calculate the result for only the perticular value we will calculate the difference between total values
 * for more explaination of below code refer the question https://github.com/rambhajansonti/DSA/blob/master/dp/SubsetSumEqualToK.cpp
 * if tabulation last row is very important that tell us about that index if subset sum of that value is possible or not
 * if it is possible then we will consider that value as a s1 and for finding the s2 we reduce s1 from the total sum
 * if we carefully observe the pattern first half of the result has the oposite value of the second half so we no need to calculate the second half , we are just using the absolute difference in our answer
 ----------------------------------------------------------------------------------------------------------------------
 ### Partitions With Given Difference
 * given problem is based on the subset problem
 * there is a change in base case
 * new condition if(ind == 0){
            if(target==0 && arr[0]==0)
                return 2;
            if(target==0 || target == arr[0])
                return 1;
            return 0;
    }
  * previous condition 
  * if(k==0)return true;
    if(n==0){
        return (k==arr[0])?true:false;
    }
  * if target is zero simply return 1 , in this case we will miss few cases which form a combination with zero
  * [0,0,1]
  *  so instead of returning to zero we will explore deeply and check the new condition
  *  ![image](https://user-images.githubusercontent.com/52101117/209782071-5a70a670-1066-42c5-8d69-65f1de0f46a4.png)
  *  ![image](https://user-images.githubusercontent.com/52101117/209782360-2cf1642f-5abd-4b24-ae32-9fd6c594436c.png)
  *  Rest of the code is similar to subset problem that's easy
  
  ##### tabulation approach
  * for tabulation we need to understand the base case of new approach
  * first we will check either we have a condition of pick or not pick
  *  if(num[0] == 0) prev[0] =2;  // 2 cases -pick and not pick
  *  else prev[0] = 1;  // 1 case - not pick 
  * if(num[0]!=0 && num[0]<=tar) prev[num[0]] = 1;  // 1 case -pick
  * Old case : ->
  * prev[0]=1;
  * if(arr[0]<=k)prev[arr[0]]=1;
 -------------------------------------------------------------------------------------------------------------------------------
### 0 1 Knapsack
##### Memoization tc-> O(n*maxWeight) sc-> O(n) recursion +o(n*maxWeight) memoization  //without memoization //tc-> 2^n sc-> O(n)
* for dp size choose the changing parameter , here index and maxWeight is changing parameter
* we have two choices pick or not pick
* when pick reduce the max weight by current pick weight and add value to picj variable
* when not pick then simply decrease the index value by 1
* if index become zero then we have two choices check wheigh max should be less than current zero index weight value
* if fit into the bag then take it else return 0 because we don't have any other option

##### Tabulation tc-> O(n*maxWeight) sc-> o(n*maxWeight) memoization
 * for tabulation dp will be the same only change is fill entire dp with 0 instead of -1 because -1 not required any more
 * in bottom up we have started from n and maxweight to 0 so here we will start from 1-n and 1-maxweight just opposite
 * first row will left for the base casses
 * think about the base case. you can see for the first row i am completely dependent on previous row from 0 to maxweight index
 * so you need to fill previous row from 0 to maxweight
 * in subset i have filled with true so here we we fill with value[0]
 * for take i will target current value + previous row maxWeight-weight[ind] need to reduce the current weight
 * for non take simply target w because we didn't change the weight
 * 
 ##### Tabulation tc-> O(n*maxWeight) sc-> o(n+maxWeight) memoization
 * change dp[ind-1][..] to prev row and curr row
 
 #####  Tabulation tc-> O(n*maxWeight) sc-> o(maxWeight) memoization 
  * How it possible
  * ![image](https://user-images.githubusercontent.com/52101117/209927988-7b210fe4-67aa-4512-abcb-e1bd4fd9be60.png)
  * we can see we are running two loop one ind 1-n and second from 1-maxweight
  * what if we run second loop from maxweight to 1 it fine beacuse we are completely depend on previous row not on current row
  * if we observe the attached pic you can se we are decreasing the value of w to calcuate the next iteration and other two parameter value is fixed so it's confirm that we depend on the left side value of the previous row, so instead of using the two array if we use the single array that is previous row and fill the result to it's right side or current index, it will not effect the next result calculation   take=value[ind]+prev[w-weight[ind]];
 ------------------------------------------------------------------------------------------------------------------
### 322. Coin Change
##### Memoization //tc-> O(n*amount) sc->O(n)recursion+ O(n*amount) n is the no of counts //without memoization tc-> O(2^n) sc-> O(amount) n is the no of counts
  
* **Note :** In problem they mentioned we can take infinite no of coins
* ``why greedy not possible:[9,6,5,1]  11/9=>1 2/1=>2 total 3 coin   ; 11/6=> 1 5/5=>1 2 coin no uniformity``
* problem is simply based on take and not take problem
* while not take we can simply choose next index but in case of take we have to take the same index
* if i am not changing the index that means i will check for the same element again and again?
* ans is no-> for eg i have a 8 and coin is 3 so i took the three and now next time target value is 5 so i have a choice either i will choose the same element again or not 
* take=1+solve(coins,amount-coins[ind],ind,dp);
*  int nottake=0+solve(coins,amount,ind-1,dp);
*  Base case: in case of last index if we don't take then simply return 1e9 (max value) else if we can achive target by last element then check else return max value 
*  if(amount%coins[ind]==0)return amount/coins[ind];

##### Tabulation  //tc-> O(n*amount) sc-> O(n*amount) n is the no of counts
 * **base condition:** convert recursive solution to tabulation base condition for the first row of the DP
 * do reverse of the bottom up solution: start the condition from 1- n for ind and 0 to max amount
 * in all previous solution we are completely dependent on the previous row but here for the case take we are not incresing the index so we depend on the current row
 
 ##### Tabulation with space optimization //tc-> O(n*amount) sc-> O(n+amount) n is the no of counts 
 * convert two row to one row by using two seperate maxamount row
 ---------------------------------------------------------------------------------------------------------------------
### 494. Target Sum
##### Memoization //tc-> O(n*target) sc->O(n)recursion+ O(n*target) n is the no of counts //without memoization tc-> O(2^n) sc-> O(target) n is the no of counts
 * This problem is similar to https://github.com/rambhajansonti/DSA/blob/master/dp/PartitionsWithGivenDifference.cpp
 * only language is different
 * i tried using + and - sign taken approach but only 132/140 cases passeed 
 ------------------------------------------------------------------------------------------------------------------------
### 518. Coin Change II
##### Memoization //tc-> O(n*target) sc->O(n)recursion+ O(n*target) n is the no of counts //without memoization tc-> O(2^n) sc-> O(target) n is the no of counts
 * This problem is similar to https://github.com/rambhajansonti/DSA/blob/master/dp/322.CoinChange.cpp
 * only language is different
 * changes i did 1e9 with 1 and instead of min added take and no take result and return 
 * instead of  if(amount%coins[ind]==0)return amount/coins[ind]; return
 * if(amount%coins[ind]==0)return 1;
 ------------------------------------------------------------------------------------------------------------------------
### Unbounded Knapsack
##### tabulation with space optimation //tc-> O(n*target) sc->O(n)
 * This problem is combination of https://github.com/rambhajansonti/DSA/blob/master/dp/0-1-Knapsack.cpp and https://github.com/rambhajansonti/DSA/blob/master/dp/322.CoinChange.cpp
 * in coin base we have a infinity coin and in knapsack the idea is similar
 * for tabulation in knapsack and unbounded knapsack we have one different that is infinity coin so in unbounded we are depend on current row in case of included
 * so instead of starting second loop from n-1 to 0 we will start from 0 to n-1.
 * **reason:-** in knapsack from included value we depend on previous row so we started from n-1 to 0  and for calculating n-2 we are only depend on 0 to n-3 value we don't even touch value from n-2 to n
 * In unbounded knapsack for included value we are depend on current row so for calulating the current value we are depend on the value we are 0 to cap we are not touching the value from cap to n once cap calculated we replace it we new value and move ahead
 ------------------------------------------------------------------------------------------------------------------------
 ### Rod cutting problem
 ##### problem similar to upnbounded knapsack
 
 --------------------------------------------------------------------------------------------------------------------
 ## Dp On String 
 -------------------------------------------------------------------------------------------------------------------
 ### 1143. Longest Common Subsequence
 ##### recursion with memoization    in case of non memoization tc-> 2^m * 2^n=exponancialy  sc-> O(n) recursion || tc->O(m*n) sc->O(m*n) memoization+O(m+n) auxiliary stack space
* if we reached the out of boundary simply return 0 beacause we are not going to count it
* we maintain two indexes to maintain two string simultaneously
* if the current character matched from both the string then deduct the both index and count this into the result
* if not match then we have two choices either we stood on the  index1 and deduct the index2 or stood on index2 and deduct index1
* store the max result out of this two
* auxilary stack space is O(m+n) **reason**: we are choosing two option in case of not match 
 
##### Index shifting to understand the dp solution easily
* Don't touch the index which belong to the dp on change the index which belong to the string1 and string 2

##### tabulation + memoization //tc->O(m*n) sc->O(m*n) memoization
* for base case we already know below two line based on recursive solution but it's not needed as dp declared with 0
* for(int i=0;i<=m;i++)dp[i][0]=0;
* for(int j=0;j<=n;j++)dp[0][j]=0;
* run two loop from 1 to m and 1 to n and copy the condition of recursion and return dp[m][n] as a ans
##### As we did space optimization earliar , follow the same from O(m*n) to O(m+n) and O(m+n) to (N)
----------------------------------------------------------------------------------
### Print Longest Common Subsequence 
##### tabulation solution: //tc->O(m*n) sc->O(m*n) memoization+ O(n)
* Solution is similar to previous question solution when we find out the length of longest common subsequence
* initialize the dp array similar to Longest Common Subsequence question and then start from the end and check both the index character if its similar , so include into the ans 
* if the character is not similar then we have two choices we can move towards [i-1][j] or [i][j-1]
* if(dp[i-1][j]>dp[i][j-1]) i--;  else j--;
* **reason** : index which is max we will include . decreasing index means incude that into the ans
-----------------------------------------------------------------------------------


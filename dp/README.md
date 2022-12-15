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
----------------------------------------------------------------------------------------------------------------
  

  
  
  
  

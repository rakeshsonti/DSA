class Solution {
  //tc->O(n) sc-> O(1)
public:
    int climbStairs(int n) {
      //if we carefully observe the problem diagram this problem is fibonacci problem
      int prev1=0,prev2=1;
      for(int i=0;i<n;i++){
        int curr=prev1+prev2;
        prev1=prev2;
        prev2=curr;
      } 
      return prev2;
    }
    
};
//-----------------------------------------------------------------------------------------
class Solution {
  //tc->O(n) sc-> O(n+1)[memoization]+O(n)[recursion]
public:
    int climbStairs(int n) {
      if(n==0)return 1;
      if(n<0)return 0;
      vector<int> st(n+1,-1);
      return executeStairs(st,n);  
    }
    int executeStairs(vector<int> &st,int n){
      if(n==0)return 1;
      if(n<0)return 0;
      if(st[n]!=-1)return st[n];
      return st[n]=executeStairs(st,n-1)+executeStairs(st,n-2);
    }
};

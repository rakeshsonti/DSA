class Solution {
  //tc-> O(m*n) sc-> O(n)+O(n)=O(n) memoization space
public:
    int uniquePaths(int m, int n) {
      if(m==1 && n==1)return 1;
      int prev1=0,prev2=1;
      vector<int> prev(n,0);
       for(int i=0;i<m;i++){
         vector<int> prev1(n,0);
         for(int j=0;j<n;j++){
           if(i==0 && j==0){
             prev1[j]=1;
             continue;
           }
           int left=0;int right=0;
           if(i>0)left=prev[j];
           if(j>0)right=prev1[j-1];
           prev1[j]=left+right;
          
         }
         prev=prev1;
       }
       return prev[n-1];
    }
};
//----------------------------------------------------------------------------
class Solution {
  //tc-> O(m*n) sc-> O(m*n) memoization space
public:
    int uniquePaths(int m, int n) {
      if(m==1 && n==1)return 1;
      vector<vector<int>> dp(m+1,vector<int>(n+1,1));
      dp[0][0]=0;
       for(int left=1;left<m;left++){
         for(int right=1;right<n;right++){
           dp[left][right]=dp[left-1][right]+dp[left][right-1];
         }
       }
       return dp[m-1][n-1];
    }
};
//------------------------------------------------------------------------------
class Solution {
  //tc-> O(m*n) sc-> O(m*n)memoization space+ recursive space O(m-1)+O(n-1)
public:
    int uniquePaths(int m, int n) {
      vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(1,1,m,n,dp);
    }
    int solve(int left,int right,int m,int n,vector<vector<int>> & dp){
      if(left==m && right==n)return 1;
      if(left>m || right >n)return 0;
      if(dp[left][right]!=-1)return dp[left][right];
      return dp[left][right]=solve(left+1,right,m,n,dp)+solve(left,right+1,m,n,dp);
    }
};

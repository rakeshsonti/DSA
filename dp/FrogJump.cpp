#include <bits/stdc++.h>
// tc-> O(n) sc-> O(1) bottom up solution
int frogJump(int n, vector<int> &heights)
{
    int jump=0;
    int prev1=0,prev2=0;
    for(int i=1;i<n;i++){
        int left=prev1+abs(heights[i]-heights[i-1]);
        int right =INT_MAX;
        if(i>1) right=prev2+abs(heights[i]-heights[i-2]);
        prev2=prev1;
        int curr=min(left,right);
        prev1=curr;
    }
return prev1;
}
//----------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
// tc-> O(n) sc-> O(n) bottom up solution
int frogJump(int n, vector<int> &heights)
{
  vector<int> dp(n+1,-1);
    dp[0]=0;
    for(int i=1;i<n;i++){
        int left=dp[i-1]+abs(heights[i]-heights[i-1]);
        int right =INT_MAX;
        if(i>1) right=dp[i-2]+abs(heights[i]-heights[i-2]);
        dp[i]=min(left,right);
    }
return dp[n-1];
}
//-------------------------------------------------------------------------------------
#include <bits/stdc++.h>
int fn(int n, vector<int> &heights,vector<int> &dp);
int frogJump(int n, vector<int> &heights)
{
    //tc-> O(n) sc-> o(n)memoization+O(n)recursion top -down
    // 0 based indexing
    n=n-1;
    vector<int>dp(n+1,-1);
    return fn(n,heights,dp);
}
int fn(int n, vector<int> &heights,vector<int> &dp){
    if(n==0)return 0;
    if(dp[n]!=-1)return dp[n];
    int left=fn(n-1,heights,dp)+abs(heights[n]-heights[n-1]);
    int right=INT_MAX;
    //if index is less than equals 1 than i can not jump to n-2
        if(n>1)
        right=fn(n-2,heights,dp)+abs(heights[n]-heights[n-2]);
    return dp[n]=min(left,right);
}

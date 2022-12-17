#include<bits/stdc++.h>
using namespace std;
//tc->O(n*k) sc-> O(n)memoization tabulation
int solve(vector<int> &height,int index,int k,vector<int> &dp);
int solve(vector<int> &height,int index,int k,vector<int> &dp){
 dp[0]=0;
  int n=height.size();
  for(int i=1;i<n;i++){
    int mmstep=INT_MAX;
    for(int j=1;j<=k;j++){
      if(i-j>=0){
        int jump=dp[i-j]+abs(height[i]-height[i-j]);
        mmstep=min(jump,mmstep);
      }
    }
    dp[i]=mmstep;
  }
  return dp[n-1];
}
int main(){
 vector<int> height{30,10,60,10,60,50};
  int n=height.size();
  int k=2;
  vector<int> dp(n,-1);
  cout<<solve(height,n-1,k,dp)<<endl;
}


//=====================================================================================================================
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//tc->O(n*k) sc-> O(n)memoization+O(n)recursion
int solve(vector<int> &height,int index,int k,vector<int> &dp);
int solve(vector<int> &height,int index,int k,vector<int> &dp){
  if(index==0)return 0;
  if(dp[index]!=-1)return dp[index];
int mmstep=INT_MAX;
  for(int i=1;i<=k;i++){
    if(index-i>=0){
      int jump=solve(height,index-i,k,dp)+abs(height[index]-height[index-i]);
      mmstep=min(mmstep,jump);
    }
  }
  return dp[index]=mmstep;
}
int main(){
 vector<int> height{30,10,60,10,60,50};
  int n=height.size();
  int k=2;
  vector<int> dp(n,-1);
  cout<<solve(height,n-1,k,dp)<<endl;
}

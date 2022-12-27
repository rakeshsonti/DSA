#include <bits/stdc++.h> 
//tc-> O(n*target) sc-> O(target)+O(target) memoization
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<bool>prev(k+1,false);
    prev[0]=1;
    if(arr[0]<=k)prev[arr[0]]=1;
    for(int ind=1;ind<n;ind++){
         vector<bool> curr(k+1,false);
        curr[0]=1;
        for(int target=1;target<=k;target++){
            bool nottake=prev[target];
            bool take=false;
            if(arr[ind]<=target)
                take=prev[target-arr[ind]];
            curr[target]=take|nottake;
        }
        prev=curr;
    }
    return prev[k];
}
//-------------------------------------------------------------------------------------------
#include <bits/stdc++.h> 
//tc-> O(n*target) sc->  O(n*target) memoization
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<bool>> dp(n+1,vector<bool>(k+1,false));
   for(int i=0;i<n;i++)dp[i][0]=true;
    if(arr[0]<=k)dp[0][arr[0]]=true;
    for(int ind=1;ind<n;ind++){
        for(int target=1;target<=k;target++){
            bool nottake=dp[ind-1][target];
            bool take=false;
            if(arr[ind]<=target)
                take=dp[ind-1][target-arr[ind]];
            dp[ind][target]=take||nottake;
        }
    }
    return dp[n-1][k];
}
//--------------------------------------------------------------------------------------------------
#include <bits/stdc++.h> 
//tc-> O(n*target) sc-> O(n) recursion+ O(n*target) memoization
bool solve(vector<int> & arr,int k,int n,vector<vector<int>> &dp);
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
    return solve(arr,k,n,dp);
}
bool solve(vector<int> & arr,int k,int n,vector<vector<int>> &dp){
    if(k==0)return true;
    if(n==0){
        return (k==arr[0])?true:false;
    }
    if(dp[n][k]!=-1)return dp[n][k];
    //take it but sum should not cros target value
    bool res1=false;
    if(k>=arr[n])
    res1=solve(arr,k-arr[n],n-1,dp);
    //don't take it
    bool res2=solve(arr,k,n-1,dp);
    return dp[n][k]=(res1 || res2)?true:false;
}
//----------------------------------------------------------------------------------------------
#include <bits/stdc++.h> 
 //tc-> O(n*k) sc-> O(n) recursion+ O(n*k) memoization
bool solve(vector<int> & arr,int k,int n,int sum,int index,vector<vector<int>> &dp);
bool subsetSumToK(int n, int k, vector<int> &arr) {
    int sum=0;
    vector<vector<int>> dp(n,vector<int>(k+1,-1));
    return solve(arr,k,n,sum,0,dp);
}
bool solve(vector<int> & arr,int k,int n,int sum,int index,vector<vector<int>> &dp){
    if(k==sum)return true;
    if(index==n){
        return (sum==k)?true:false;
    }
    if(dp[index][sum]!=-1)return dp[index][sum];
    //take it but sum should not cros target value
    
    bool res1=false;
    if(arr[index]+sum<=k)
    res1=solve(arr,k,n,arr[index]+sum,index+1,dp);
    //don't take it
    bool res2=solve(arr,k,n,sum,index+1,dp);
    return dp[index][sum]=(res1 || res2)?true:false;
}

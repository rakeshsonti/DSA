#include <bits/stdc++.h> 
int findWays(vector<int> &arr, int k)
{
   //tc-> O(n*target) sc->  O(n*target) memoization
    int n=arr.size();
    sort(arr.begin(),arr.end(),greater<int>());
  //for code optimization follow the question https://github.com/rambhajansonti/DSA/blob/master/dp/SubsetSumEqualToK.cpp
    vector<vector<int>> dp(n,vector<int>(k+1,0));
    //if target is 0 then the column from 0 to n will be true from recurance
   for(int i=0;i<n;i++)dp[i][0]=1;
    //if index is zero then the only value can  be zero that is dp[i][0]
    if(arr[0]<=k)dp[0][arr[0]]=1;
    for(int ind=1;ind<n;ind++){
        for(int target=1;target<=k;target++){
            int nottake=dp[ind-1][target];
            int take=0;
            if(arr[ind]<=target)
                take=dp[ind-1][target-arr[ind]];
            dp[ind][target]=take+nottake;
        }
    }
    return dp[n-1][k];
}

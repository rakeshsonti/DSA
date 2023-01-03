#include <bits/stdc++.h> 
//tc-> O(n*W) sc->O(W)
int unboundedKnapsack(int n, int W, vector<int> &val, vector<int> &wt)
{
    vector<int> prev(W+1,0);
    
    for(int ind=wt[0];ind<=W;ind++){
           prev[ind]=(int)(((ind)/wt[0])*val[0]);
    }
    for(int ind=1;ind<n;ind++){
        for(int cap=1;cap<=W;cap++){
        int notinclude=prev[cap];
        int include=INT_MIN;
         if(wt[ind]<=cap){
            include=val[ind]+prev[cap-wt[ind]];
         }
         prev[cap]=max(include,notinclude);
        }
//         prev=curr;
    }
    return prev[W];
}

//-------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h> 
//tc-> O(n*W) sc-> O(W)+O(W)=O(W)
int unboundedKnapsack(int n, int W, vector<int> &val, vector<int> &wt)
{
    vector<int> prev(W+1,0),curr(W+1,0);
    
    for(int ind=wt[0];ind<=W;ind++){
           prev[ind]=(int)(((ind)/wt[0])*val[0]);
    }
    for(int ind=1;ind<n;ind++){
        for(int cap=1;cap<=W;cap++){
        int notinclude=prev[cap];
        int include=INT_MIN;
         if(wt[ind]<=cap){
            include=val[ind]+curr[cap-wt[ind]];
         }
         curr[cap]=max(include,notinclude);
        }
        prev=curr;
    }
    return prev[W];
}
//---------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h> 
//tc-> O(n*W) sc-> O(n*W)
int unboundedKnapsack(int n, int W, vector<int> &val, vector<int> &wt)
{
    vector<vector<int>> dp(n+1,vector<int>(W+1,0));
    for(int ind=wt[0];ind<=W;ind++){
            dp[0][ind]=(int)(((ind)/wt[0])*val[0]);
    }
    for(int ind=1;ind<n;ind++){
        for(int cap=1;cap<=W;cap++){
        int notinclude=dp[ind-1][cap];
        int include=INT_MIN;
         if(wt[ind]<=cap){
            include=val[ind]+dp[ind][cap-wt[ind]];
         }
         dp[ind][cap]=max(include,notinclude);
        }
    }
    return dp[n-1][W];
}
//----------------------------------------------------------------------------------------
#include <bits/stdc++.h> 
//tc-> O(n*W) sc-> O(n) + O(n*W)
int solve(vector<int> &val,vector<int> &wt,int ind,int W,vector<vector<int>> &dp){
    if(ind==0){
    //directly return the result as we can see there is no condition, no need to return minimum as we return when we need to check something but here no need to check
    // we can include more than one the 0 index vaue
         return ((int)(W/wt[ind]))*val[ind];
    }
    if(dp[ind][W]!=-1)return dp[ind][W];
    int notinclude=solve(val,wt,ind-1,W,dp);
    int include=INT_MIN;
    if(wt[ind]<=W){
        include=val[ind]+solve(val,wt,ind,W-wt[ind],dp);
    }
    return dp[ind][W]=max(notinclude,include);
}
int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight)
{
    vector<vector<int>> dp(n+1,vector<int>(w+1,-1));
   int res=solve(profit,weight,n-1,w,dp);
    return (res==INT_MIN)?0:res;
}



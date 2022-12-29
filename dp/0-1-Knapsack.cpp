#include <bits/stdc++.h>
int solve(vector<int> &wt,vector<int> &vt,int n,int wtt,int ind,vector<vector<int>> &dp);
//tc-> O(n*maxWeight) sc-> O(maxWeight) memoization
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
    //for dp size choose the changing parameter , here ind and maxWeight is changing parameter
    vector<vector<int>> dp(n+1,vector<int>(maxWeight+1,0));
    vector<int> prev(maxWeight+1,0);
    for(int i=weight[0];i<=maxWeight;i++){
        prev[i]=value[0];
    }
    for(int ind=1;ind<n;ind++){
//         vector<int> curr(maxWeight+1,0);
        for(int w=maxWeight;w>=0;w--){
            int nontake=0+prev[w];
            int take=-1e9;
                if(weight[ind]<=w){
                    take=value[ind]+prev[w-weight[ind]];
                }
                prev[w]=max(take,nontake);
            }
//         prev=curr;
        }
    return prev[maxWeight];
}
//=====================================================================================================
#include <bits/stdc++.h>
int solve(vector<int> &wt,vector<int> &vt,int n,int wtt,int ind,vector<vector<int>> &dp);
//tc-> O(n*maxWeight) sc-> O(n)+O(maxWeight) memoization
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
    //for dp size choose the changing parameter , here ind and maxWeight is changing parameter
    vector<vector<int>> dp(n+1,vector<int>(maxWeight+1,0));
    vector<int> prev(maxWeight+1,0);
    for(int i=weight[0];i<=maxWeight;i++){
        prev[i]=value[0];
    }
    for(int ind=1;ind<n;ind++){
        vector<int> curr(maxWeight+1,0);
        for(int w=0;w<=maxWeight;w++){
            int nontake=0+prev[w];
            int take=-1e9;
                if(weight[ind]<=w){
                    take=value[ind]+prev[w-weight[ind]];
                }
                curr[w]=max(take,nontake);
            }
        prev=curr;
        }
    return prev[maxWeight];
}

//-----------------------------------------------------------------------
#include <bits/stdc++.h>
int solve(vector<int> &wt,vector<int> &vt,int n,int wtt,int ind,vector<vector<int>> &dp);
//tc-> O(n*maxWeight) sc-> o(n*maxWeight) memoization
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
    //for dp size choose the changing parameter , here ind and maxWeight is changing parameter
    vector<vector<int>> dp(n+1,vector<int>(maxWeight+1,0));
    for(int i=weight[0];i<=maxWeight;i++){
        dp[0][i]=value[0];
    }
    for(int ind=1;ind<n;ind++){
        for(int w=0;w<=maxWeight;w++){
            int nontake=0+dp[ind-1][w];
            int take=-1e9;
                if(weight[ind]<=w){
                    take=value[ind]+dp[ind-1][w-weight[ind]];
                }
                dp[ind][w]=max(take,nontake);
            }
        }
    return dp[n-1][maxWeight];
        }
 //-------------------------------------------------------------
#include <bits/stdc++.h>
int solve(vector<int> &wt,vector<int> &vt,int n,int wtt,int ind,vector<vector<int>> &dp); 
//tc-> O(n*maxWeight) sc-> O(n) recursion +o(n*maxWeight) memoization
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
    //for dp size choose the changing parameter , here ind and maxWeight is changing parameter
    vector<vector<int>> dp(n+1,vector<int>(maxWeight+1,-1)); 
	return solve(weight,value,n,maxWeight,n-1,dp);
}
int solve(vector<int> &wt,vector<int> &vt,int n,int wtt,int ind,vector<vector<int>> &dp){
   //without memoization //tc-> 2^n sc-> O(n)
    //with memoization tc-> O(n)*O(maxWeight) sc-> O(n)*O(maxWeight)+O(n) recursion
    if(ind==0){
        //if last element simply return
        if(wt[ind]<=wtt)return vt[ind];
        else return 0;
    }
    if(dp[ind][wtt]!=-1)return dp[ind][wtt];
  int nottake=0+solve(wt,vt,n,wtt,ind-1,dp);
    int take=-1e9;
    if(wt[ind]<=wtt){
        take=vt[ind]+solve(wt,vt,n,wtt-wt[ind],ind-1,dp);
    }
    return dp[ind][wtt]=max(nottake,take);
}

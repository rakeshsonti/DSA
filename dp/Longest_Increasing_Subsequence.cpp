/*
//print longest incresing subsequence
#include<bits/stdc++.h>
//TC-> o(N*N) SC-> O(N)
int longestIncreasingSubsequence(int nums[], int n)
{
  vector<int>dp(n,1),hash(n);
 int maximum=1,lastIndex=0;
    for(int i=0;i<n;i++){
        hash[i]=i;
        for(int prev=0;prev<i;prev++){
            if(nums[prev]<nums[i] && 1+dp[prev]>dp[i]){
                dp[i]=1+dp[prev];
                hash[i]=prev;
            }
        }
        if(dp[i]>maximum){
            maximum=dp[i];
            lastIndex=i;
        }
    }
    vector<int> tmp;
    tmp.push_back(nums[lastIndex]);    
    while(hash[lastIndex]!=lastIndex){
        lastIndex=hash[lastIndex];
         tmp.push_back(nums[lastIndex]);    
    }
    reverse(tmp.begin(),tmp.end());
    for(auto x:tmp)cout<<x<<" ";
    cout<<endl;
    return maximum;
}
*/
//-----------------------------------------------------------------------------------------------------------
//Algorithmic approach (Binary Search)
#include<bits/stdc++.h>
//TC-> O(N*log(n)) SC-> O(N)

int longestIncreasingSubsequence(int nums[], int n)
{
/*   Lower bound give curr[i] or first index> curr[i]
      1. Lower bound give curr[i] or first index> curr[i]
      2. intution: we will maintain a temp array
      3. if value is exact match then replace it
      4. if value is greater than the max value of array then insert at the end
      5. if value is less than the smallest value of the array then replace 0 index value
      6. if value dones not exists but occur in between the array value then it will replace the just greater of the search value
      7. we are finding the length of the longest subsequence but maintaining a temp array
      8. this temp array is developed by replacing the value
      9. lower bound work on binary search
    */
    vector<int> res;
    res.push_back(nums[0]);
    for(int i=1;i<n;i++){
        if(nums[i]>res.back()){
            res.push_back(nums[i]);
        }else{
            vector<int> ::iterator itr; itr=lower_bound(res.begin(),res.end(),nums[i]);
            int ind=itr-res.begin();
            res[ind]=nums[i];
        }
    }
    return res.size();
}
//-----------------------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
//TC-> o(N*N) SC-> O(N)
int longestIncreasingSubsequence(int nums[], int n)
{
  vector<int>dp(n,1);
 int maximum=1;
    for(int i=0;i<n;i++){
        for(int prev=0;prev<i;prev++){
            if(nums[prev]<nums[i]){
                dp[i]=max(dp[i],1+dp[prev]);
            }
        }
        maximum=max(maximum,dp[i]);
    }
    return maximum;
}

//------------------------------------------
#include<bits/stdc++.h>
//TC-> o(N*N) SC-> O(N+N)
int longestIncreasingSubsequence(int nums[], int n)
{
    //while converting to DP make sure you did cordinate shift on second parameter
    if(n==0)return 0;
//     vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    vector<int> curr(n+1,0),prev(n+1,0);
    for(int index=n-1;index>=0;index--){
        for(int prev_index=index-1;prev_index>=-1;prev_index--){
        int take=0,donottake=0;
            //condinate shift
        donottake=0+prev[prev_index+1];
            //condinate shift
        if(prev_index==-1 || nums[index]>nums[prev_index])take=1+prev[index+1];
        curr[prev_index+1]=max(take,donottake); 
        }
        prev=curr;
    }
    return prev[0];
}
//------------------------------------------------------------
#include<bits/stdc++.h>
//TC-> o(N*N) SC-> O(N*M)
int longestIncreasingSubsequence(int nums[], int n)
{
    //while converting to DP make sure you did cordinate shift on second parameter
    if(n==0)return 0;
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    for(int index=n-1;index>=0;index--){
        for(int prev_index=index-1;prev_index>=-1;prev_index--){
        int take=0,donottake=0;
            //condinate shift
        donottake=0+dp[index+1][prev_index+1];
            //condinate shift
        if(prev_index==-1 || nums[index]>nums[prev_index])take=1+dp[index+1][index+1];
        dp[index][prev_index+1]=max(take,donottake); 
        }
    }
    return dp[0][0];
}
//------------------------------------------------------------
#include<bits/stdc++.h>
//TC-> o(N*N) SC-> O(N*M)+O(N)
//Run time error
int solve(int nums[],int index,int prev_index,int n,
         vector<vector<int>> &dp);
int longestIncreasingSubsequence(int arr[], int n)
{
    if(n==0)return 0;
    vector<vector<int>> dp(n,vector<int>(n+1,-1));
    return solve(arr,0,-1,n,dp);
}
int solve(int nums[],int index,int prev_index,int n,vector<vector<int>> &dp){
        if(index>=n)return 0;//do not proceed with next step
        if(dp[index][prev_index+1]!=-1)return dp[index][prev_index+1];
        int take=0,donottake=0;//have only two either take or not take
        donottake=0+solve(nums,index+1,prev_index,n,dp);//skip current element
        if(prev_index==-1 || nums[index]>nums[prev_index])take=1+solve(nums,index+1,index,n,dp);//include current element if it is greater than previos element
        return dp[index][prev_index+1]=max(take,donottake);//return whichever is maximum
}

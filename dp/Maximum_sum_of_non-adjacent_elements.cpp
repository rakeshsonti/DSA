#include <bits/stdc++.h> 
int maximumNonAdjacentSum(vector<int> &nums){
    //tc-> O(n) sc->O(1);
    int n=nums.size();
    vector<int> dp(n,-1);
     int prev1=nums[0],prev2=nums[0];
    for(int i=1;i<n;i++){
        //pick current element
        int pick=nums[i];
        if(i>1){
            //pick current previos non adjacent element 
            pick+=prev1;
        }
        //don't pickup current element and pickup previous element
        int nonpick=0+prev2;
        //choose max of pick up and non pickup
        int curr=max(pick,nonpick);
        prev1=prev2;
        prev2=curr;
    }
    return prev2;
}
//-----------------------------------------------------------------------------------------
#include <bits/stdc++.h> 
int maximumNonAdjacentSum(vector<int> &nums){
    //tc-> O(n) sc->O(n);
    int n=nums.size();
    vector<int> dp(n,-1);
     dp[0]=nums[0];
    for(int i=1;i<n;i++){
        //pick current element
        int pick=nums[i];
        if(i>1){
            //pick current previos non adjacent element 
            pick+=dp[i-2];
        }
        //don't pickup current element and pickup previous element
        int nonpick=0+dp[i-1];
        //choose max of pick up and non pickup
        dp[i]=max(pick,nonpick);
    }
    return dp[n-1];
}
//------------------------------------------------------------------------------------------------
#include <bits/stdc++.h> 
int fn(vector<int>&vc,int index,vector<int> &dp);
int maximumNonAdjacentSum(vector<int> &nums){
    vector<int> dp(nums.size(),-1);
    return fn(nums,0,dp);
}
int fn(vector<int>&vc,int index,vector<int> &dp){
    if(index>=vc.size())return 0;
    if(dp[index]!=-1)return dp[index];
    //include the current element
    int left=vc[index]+fn(vc,index+2,dp);
    //don't include the current element
    int right=fn(vc,index+1,dp);
    return dp[index]=max(left,right);
}

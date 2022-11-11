class Solution {
public:
    //tc->O(n)
    int rob(vector<int>& nums) {
        int n=nums.size(),prev1=0,prev2=0;
        if(n==0)return 0;
        for(auto i:nums){
            int temp=prev1;
           prev1=max(prev1,prev2+i);
            prev2=temp;
        }
        return prev1;
    }
};

//--------------------------------------------------------------------------------
class Solution {
public:
    //tc->O(n) sc->O(n+1)dp array
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        vector<int> dp(n+1);
        dp[0]=0;dp[1]=nums[0];
        for(int i=1;i<n;i++){
            int currVal=nums[i];
            dp[i+1]=max(dp[i],dp[i-1]+currVal);
        }
        return dp[n];
    }
};

//---------------------------------------------------------------------------------
class Solution {
public:
    //tc->O(n) sc->O(n+2)dp array+O(n) recursion
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+2,-1);
        return solve(nums,n,0,dp);
    }
    int solve(vector<int> & nums,int n,int index,vector<int> & dp){
        if(index>=n)return 0;
        // choose i index
        int first=nums[index]+((dp[index+2]!=-1)?dp[index+2]:solve(nums,n,index+2,dp));
        // don't choose i index instead choose i+1 index
        int first_next=(dp[index+1]!=-1)?dp[index+1]:solve(nums,n,index+1,dp);
        return dp[index]=max(first,first_next);
       
    }
};

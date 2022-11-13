class Solution {
    int dp[101][2];
public:
    public:
    //tc->O(n) sc->O(2*n)dp array+O(n) recursion
    int rob(vector<int>& nums) {
        int n=nums.size();
        bool isFirst=false;
        // vector<vector<int>> dp(n+2,vector<int>(2,-1));
        memset(dp,-1,sizeof(dp));
        return solve(nums,n,0,isFirst);
    }
    
    int solve(vector<int> & nums,int n,int index,bool isFirst){
        if(index>=n || (index==n-1 &&isFirst))return 0;
        
        if(dp[index][isFirst]==-1){
            return dp[index][isFirst]=max(nums[index]+solve(nums,n,index+2,index==0?true:isFirst),solve(nums,n,index+1,isFirst));
        }
        

        return dp[index][isFirst];
       
    }
};

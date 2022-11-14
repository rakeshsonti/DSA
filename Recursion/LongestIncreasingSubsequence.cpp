class Solution {
    //tc-> O(n^2) sc-> O(n)
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return solve(nums,0,-1,dp);
    }
    /*
    pick up current element if greater than previous element
    don't pick current element may be further we get greater element which give optimal result
    if current element smaller of equal so can not puckup
    instead of taking O(n^2) space we can solve the problem in O(n) space
    */
    int solve(vector<int>& nums,int index,int prev,vector<int> &dp){
        if(index>=nums.size())return 0;//do not proceed with next step
        if(dp[prev+1]!=-1)return dp[prev+1];
        int take=0,donottake=0;//have only two either take or not take
        donottake=solve(nums,index+1,prev,dp);//skip current element
        if(prev==-1 || nums[index]>nums[prev])take=1+solve(nums,index+1,index,dp);
        //include current element if it is greater than previos element
        return dp[prev+1]=max(take,donottake);//return whichever is maximum
        
    }
};


//----------------------------------------------------------------------------------
class Solution {
    //tc-> O(n^2) sc-> O(n^2)
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return solve(nums,0,-1,dp);
    }
    
    //pick up current element if greater than previous element
    //don't pick current element may be further we get greater element which give optimal result
    //if current element smaller of equal so can not puckup
    //we can't scale-up our dp array to 1e8 (10^-4 to 10^4) but we can use current index and previous index in dp array 
    
    int solve(vector<int>& nums,int index,int prev,vector<vector<int>> &dp){
        if(index>=nums.size())return 0;//do not proceed with next step
        if(dp[index][prev+1]!=-1)return dp[index][prev+1];
        int take=0,donottake=0;//have only two either take or not take
        donottake=solve(nums,index+1,prev,dp);//skip current element
        if(prev==-1 || nums[index]>nums[prev])take=1+solve(nums,index+1,index,dp);
        //include current element if it is greater than previos element
        return dp[index][prev+1]=max(take,donottake);//return whichever is maximum
        
    }
};

//------------------------------------------------------------------------------------------
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        return solve(nums,0,INT_MIN);
    }
    
    //pick up current element if greater than previous element
    //don't pick current element may be further we get greater element which give optimal result
    //if current element smaller of equal so can not puckup
    
    int solve(vector<int>& nums,int index,int prev){
        if(index==nums.size())return 0;//do not proceed with next step
        int take=0,donottake=0;//have only two either take or not take
        donottake=solve(nums,index+1,prev);//skip current element
        if(nums[index]>prev)take=1+solve(nums,index+1,nums[index]);//include current element if it is greater than previos element
        return max(take,donottake);//return whichever is maximum
    }
};

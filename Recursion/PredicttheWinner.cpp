class Solution {
          int dp[22][22][22];
    //tc->O(n) sc-> O(22+22+22)
public:
    bool PredictTheWinner(vector<int>& nums) {
        // we will calculate the first person score and for finding the second person score we will deduct from first score 
//second person score=total-first person score
        int second=0;
        memset(dp,-1,sizeof(dp));
        for(auto i:nums)second+=i;
        int first=0;
        first=getSum(nums,0,nums.size()-1,0);
        if(first>=(second-first))return true;
        else return false;
    }
    int getSum(vector<int> &nums,int i,int j,int flag){
        if(i>j)return 0;
        if(dp[i][j][flag]!=-1){
            return dp[i][j][flag];
        }
        if(!flag){
            //chance for first person to decide value from end and start
            //but benefit should be max so that first could win
            return dp[i][j][flag]=max(nums[i]+getSum(nums,i+1,j,1),nums[j]+getSum(nums,i,j-1,1));
        }else{
            //try to choose min value because we don't want second to win
            // not adding the score because we don't care about the second pointer value , we are calculating second person value
            return dp[i][j][flag]=min(getSum(nums,i+1,j,0),getSum(nums,i,j-1,0));
        }
    }
};

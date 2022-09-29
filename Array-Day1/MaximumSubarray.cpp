class Solution
{
    //tc-> O(n)
    //sc-> O(1)
    public:
    int maxSubArray(vector<int> &nums){
        int max=INT_MIN,currSum=0;
        for(int val:nums){
            currSum+=val;
            if(currSum>max)max=currSum;
            if(currSum<0)currSum=0;
        }
        return max;
    }
  //--------------------------------------------------------------------------------------------------
       int maxSubArray(vector<int> &nums)
        {
        //tc-> O(n)
        //sc-> O(1)
            if (nums.size() == 1) return nums[0];
            int sum = nums[0], curr =0, flag = 0, minValue = nums[0];
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] > 0) flag = 1;
                if (nums[i] > minValue) minValue = nums[i];
                curr += nums[i];
                if (curr < 0) curr = 0;
                if (curr > sum) sum = curr;
            }
            return (flag == 0) ? minValue : sum;
        }
};

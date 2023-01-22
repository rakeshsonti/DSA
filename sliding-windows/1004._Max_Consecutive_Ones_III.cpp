class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        return solve1(nums,k);
    }
    //O(N). we have used another while loop but it doesn't contribute to the complexity
    //sc-> O(1)
    int solve1(vector<int> &nums,int k){
      int n=nums.size();
      int left=0,right=0,cap=0,ans=0;
      while(right<n){
        if(nums[right]){
          ans=max(ans,right-left+1);
        }else{
          cap++;
          //find the first zero into the windows and start again
          while(cap>k){
           if(nums[left]==0)cap--;
           left++;
          }
          ans=max(ans,right-left+1);
        }
          right++;
      }
      return ans;
    }
};

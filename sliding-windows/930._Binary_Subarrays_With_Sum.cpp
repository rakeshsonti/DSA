class Solution {
  // tc->O(n)+O(n)=2O(n) sc->O(1)
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
      return solve(nums,goal)-solve(nums,goal-1);
    }
    int solve(vector<int> & nums,int goal){
      if(goal<0)return 0;
      int left=0,right=0,n=nums.size(),prefixSum=0,ans=0;
        while(right<n){
          prefixSum+=nums[right];
          while(prefixSum>goal){
            prefixSum-=nums[left];
            left++;
          }
          ans+=right-left+1;
          right++;
        }
        return ans;
    }
};
//-----------------------------------------------------------------------------------------------------
class Solution {
  tc->O(n) sc->O(n)
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       unordered_map<int,int> mp;
       mp[0]=1;
       int n=nums.size(),prefixSum=0,count=0;
       for(int i=0;i<n;i++){
          prefixSum+=nums[i];
          if(mp[prefixSum-goal]){
            count+=mp[prefixSum-goal];
          }
          mp[prefixSum]++;
       }
       return  count;
    }
};

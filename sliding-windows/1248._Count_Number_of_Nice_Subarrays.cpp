
class Solution {
  //tc-> O(n)+O(n)=O(n) sc->O(1)
public:
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
    int numberOfSubarrays(vector<int>& nums, int k) {
      int n=nums.size();
      for(int i=0;i<n;i++)nums[i]=(nums[i]%2==0?0:1);
      return solve(nums,k)-solve(nums,k-1);
    }
};
//-----------------------------------------------------------------------------------------------------------
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        // problem does not care about the value it just check weather it is odd or even
// convert all the even with 0 and odd with 1
// problem: find the subarray with sum k
//tc->O(n)+O(n)=O(n) sc-> O(n)
     unordered_map<int,int> mp;
      //  mp[0]=1;
       int n=nums.size(),prefixSum=0,count=0;
        for(int i=0;i<n;i++)nums[i]=(nums[i]%2==0?0:1);
       for(int i=0;i<n;i++){
          prefixSum+=nums[i];
  //instead of mp[0]=1; we can put 
          if(prefixSum==k)count++;
          if(mp[prefixSum-k]){
            count+=mp[prefixSum-k];
          }
          mp[prefixSum]++;
       }
       return  count;
    }
};

class Solution {
  //tc-> O(n) sc->O(20003) constant
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
    int solve(vector<int> nums,int k){
      if(k<=0)return 0;
      vector<int> mp(20003,0);
      int left=0,right=0,n=nums.size(),ans=0,dist=0;
      while(right<n){
        //if value first time occuring then count it
       if(mp[nums[right]]==0)dist++;
      //  increase the frequency
       mp[nums[right]]++;
       //count the result
       if(dist<=k)ans+=right-left+1;
       else{
         //remove if it cross the boundary
         while( dist>k){
           if(mp[nums[left]]==1)dist--;
           mp[nums[left]]--;
           left++;
         }
         //again calculate the result as it become valid
         ans+=right-left+1;
       }
       right++;
      }
      return ans;
    }
};
//-----------------------------------------------------------------------------------------------------------
class Solution {
//tc-> O(n)+O(n)=O(n) sc-> O(n)
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
      //they asked for exacly k but over solution contains till k so k-(k-1)=exactly k
        return solve(nums,k)-solve(nums,k-1);
    }
    int solve(vector<int> nums,int k){
      if(k<=0)return 0;
      unordered_map<int,int> mp;
      int n=nums.size(),left=0,right=0,ans=0;
      while(right<n){
        mp[nums[right]]++;
        while(right>left && mp.size()>k){
          if(mp[nums[left]]==1)mp.erase(nums[left]);
          else mp[nums[left]]--; 
          left++;
        }
        ans+=right-left+1;
        right++;
      }
      return ans;
    }
};

class Solution {
  //tc-> O(n) sum+o(n*target) sc-> O(target) memoization
  //follow previous question or https://github.com/rambhajansonti/DSA/blob/master/dp/SubsetSumEqualToK.cpp

public:
    bool canPartition(vector<int>& nums) {
        int sum=0,n=nums.size();
       for(auto i:nums)sum+=i;
       if(sum%2)return false;
        int target=sum/2;
        return subsetSumToK(n,target,nums);
    }
   bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<bool>prev(k+1,false);
    prev[0]=1;
    if(arr[0]<=k)prev[arr[0]]=1;
    for(int ind=1;ind<n;ind++){
         vector<bool> curr(k+1,false);
        curr[0]=1;
        for(int target=1;target<=k;target++){
            bool nottake=prev[target];
            bool take=false;
            if(arr[ind]<=target)
                take=prev[target-arr[ind]];
            curr[target]=take|nottake;
        }
        prev=curr;
    }
    return prev[k];
}
};

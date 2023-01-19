class Solution {
  //TC-> O(N*N) SC-> O(N)
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int n=nums.size();
      //each element is a smallest subsequence so assign with 1
      vector<int> dp(n,1),hash(n);
      int maxi=1,lastIndex=0;
      for(int i=0;i<n;i++){
        hash[i]=i;
        for(int prev=0;prev<i;prev++){
          if(nums[i]%nums[prev]==0 && 1+dp[prev]>dp[i]){
            dp[i]=1+dp[prev];
            hash[i]=prev;
          }
        }
        if(dp[i]>maxi){
          maxi=dp[i];
          lastIndex=i;
        }
      }
      //lastIndex is the index which is largest incresing subsequence
      //track back all the index which is part of largest sequence
      vector<int> temp;
      temp.push_back(nums[lastIndex]);
      while(hash[lastIndex]!=lastIndex){
        //track next index related to the sequence
        lastIndex=hash[lastIndex];
        temp.push_back(nums[lastIndex]);
      }
      //according to the question ans required in this passion
      reverse(temp.begin(),temp.end());
      return temp;
    }
    
};

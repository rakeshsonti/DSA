class Solution {
  // tc-> O(n) sc-> O(constant)
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp(3);
        int n=fruits.size(),maxCount=0,left=0,right=0;
        while(right<n){
          mp[fruits[right]]++;
          while(mp.size()>2){
            if(mp[fruits[left]]==1)mp.erase(fruits[left]);
            else mp[fruits[left]]--;
            left++;
          }
          maxCount=max(maxCount,right-left+1);
          right++;
        }
        return maxCount;
    }
};

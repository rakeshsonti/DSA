class Solution {
  // tc-> O(n) sc-> O(constant)
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp(3);
        int n=fruits.size(),maxCount=0,left=0,right=0;
        while(right<n){
          //if value does not exists then add else increase the count 
          mp[fruits[right]]++;
          //if window size overflow simply start removing from the start till size become less than 2
          while(mp.size()>2){
            // remove the element else decrease the frequency
            if(mp[fruits[left]]==1)mp.erase(fruits[left]);
            else mp[fruits[left]]--;
            left++;
          }
          //calculate the max window size till now
          maxCount=max(maxCount,right-left+1);
          right++;
        }
        return maxCount;
    }
};

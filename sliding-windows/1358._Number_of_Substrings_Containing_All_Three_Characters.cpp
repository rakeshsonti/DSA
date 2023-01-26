class Solution {
  //tc->O(n) sc->O(n) extra space=contant space O(3)
public:
    int numberOfSubstrings(string s) {
        int left=0,right=0,n=s.size(),count=0;
        int end=n-1;
        unordered_map<int,int>mp;
        while(right<n){
          mp[s[right]]++;
      //check if we got all three element or if we got any extra
      //element then reduce them and before reduce count them into the ans
        while(mp['a']>=1 && mp['b']>=1 && mp['c']>=1){
        //1 for current substr+include all the substr which is right side
            count+=1+(end-right);
            mp[s[left]]--;
            left++;
          }
          right++;
        }
        return count;
    }
};

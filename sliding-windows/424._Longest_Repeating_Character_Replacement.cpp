class Solution {
  //tc-> O(n) sc->O(256)=constant
public:
    int characterReplacement(string s, int k) {
        int ans=0,n=s.size(),left=0,right=0,maxCount=0;
        // map<int,int> mp;
        vector<int> mp(256,0);
        while(right<n){
          mp[s[right]]++;
          maxCount=max(maxCount,mp[s[right]]);
          if(right-left+1-maxCount>k){
            mp[s[left]]--;
            left++;
          }
          ans=max(ans,right-left+1);
          right++;
        }
        return ans;
    }
};
//------------------------------------------------------------------------------------------------------
class Solution {
  //tc-> O(n) sc->O(n)
public:
    int characterReplacement(string s, int k) {
        int ans=0,n=s.size(),left=0,right=0,maxCount=0;
        map<int,int> mp;
        while(right<n){
          mp[s[right]]++;
          maxCount=max(maxCount,mp[s[right]]);
          if(right-left+1-maxCount>k){
           if(mp[s[left]]==1)mp.erase(s[left]);
            else mp[s[left]]--;
            left++;
          }
          ans=max(ans,right-left+1);
          right++;
        }
        return ans;
    }
};

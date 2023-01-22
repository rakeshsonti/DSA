class Solution {
  //tc-> O(n) sc->O(n) //faster than map (frequency array)
public:
    int lengthOfLongestSubstring(string s) {
      int left=0,right=0,n=s.size(),ans=0;
      vector<int> mp(256,-1);
      while(right<n){
        char ch=s[right];
        if(mp[ch]!=-1)
          left=max(mp[ch]+1,left);
          mp[ch]=right;
          ans=max(ans,right-left+1);
          right++;
      }
      return ans;
    }
};
//---------------------------------------------------------------------------------------------------------------------
class Solution {
  //tc-> O(n) sc->O(n)
public:
    int lengthOfLongestSubstring(string s) {
      int left=0,right=0,n=s.size(),ans=0;
      map<char,int> mp;
      while(right<n){
        char ch=s[right];
        if(mp.find(ch)!=mp.end())
          left=max(mp[ch]+1,left);
          mp[ch]=right;
          ans=max(ans,right-left+1);
          right++;
      }
      return ans;
    }
};
//---------------------------------------------------------------------------------------------------
class Solution {
  //tc-> O(n+n)=O(2n) sc-> O(n) || not passing all the test case
  //reason for tc->O(n+n)
  //abcdebb //we have two pointer left and right 
  //left stay at 0 and right reached to 6 then duplicate find at position 6 so for removing the b at 5 left have to travel the entire length
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int left=0,right=0,n=s.size(),maxValue=0;
        while(right<n && left<=right){
          char ch=s[right];
          if(st.find(ch)!=st.end()){
            st.erase(0);
            left++;
          }else{
            st.insert(ch);
            maxValue=max(maxValue,(right-left+1));
            right++;
          }
        }
        return maxValue;
    }
};

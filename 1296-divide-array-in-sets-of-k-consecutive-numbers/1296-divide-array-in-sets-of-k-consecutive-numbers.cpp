class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
      //map to count frequency
      map<int,int> mp;
      //count frequency
      for(auto x: nums)mp[x]++;
      while(mp.size()>0){
        int snum=mp.begin()->first;
        for(int j=snum;j<k+snum;j++){
          int fr=mp[j];
          if(fr==0)return false;
          if(fr>1)mp[j]--;
          if(fr==1)mp.erase(j);
        }
      }
      return true;
    }
};
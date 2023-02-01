class Solution {
  //tc-> O(N*log(N))+O(Nlog(N))+O(N) sc-> O(1)
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
      sort(g.begin(),g.end(),greater<int>());
      sort(s.begin(),s.end(),greater<int>());
        int ans=0;
        int m=g.size(),n=s.size();
        int j=0;
        int i=0;
        while(i<m &&j<n){
          if(g[i]<=s[j]){
            ans++;i++;j++;
          }else{
            i++;
          }
        }
        return ans;        
    }
};

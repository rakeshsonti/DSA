class Solution {
public:
  //tc-> O(n)
    vector<int> countBits(int n) {
     
      vector<int> ans(n+1);
      ans[0]=0;
      for(int i=1;i<=n;i++){
       ans[i]=ans[i/2]+i%2;
      }
      return ans;
    }
};
/*
class Solution {
//tc nlong(n)
public:
    vector<int> countBits(int n) {
     
      vector<int> ans;
      for(int i=0;i<=n;i++){
       int x=i,sum=0;
        while(x>0){
          sum+=x%2;
          x=x/2;
        }
        ans.push_back(sum);
      }
      return ans;
    }
};
*/
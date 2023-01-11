/*
class Solution {
  //tc-> O(n*m) sc-> O(n+m)RS
  //1518 / 1811 testcases passed not proper solution
public:
bool isAllStars(string & S1, int i) {

  // S1 is taken in 1-based indexing
  for (int j = 1; j <= i; j++) {
    if (S1[j - 1] != '*')
      return false;
  }
  return true;
}
    bool isMatch(string text, string pattern) {
        int n=text.size(),m=pattern.size();
        vector<int> prev(m+1,false),curr(m+1,false);
        prev[0]=true;
        for(int i=1;i<=n;i++)prev[0]=false;
        for(int j=1;j<=m;j++){
          int fl=true;
           for(int ind=1;ind<=j;ind++){
            if(pattern[ind-1]!='*'){
              fl=false;break;
              }
           }
           curr[j]=fl;
        }
        for(int i=1;i<=n;i++){
          curr[0]=isAllStars(pattern,i);
          for(int j=1;j<=m;j++){

            if(text[i-1]==pattern[j-1] || pattern[j-1]=='?')
              curr[j]=prev[j-1];
            else
              if(pattern[j-1]=='*')
                curr[j]=prev[j] || curr[j-1];
              else
                curr[j]=false;
            }
            prev=curr;
        }
        return prev[m];
    }
};
*/
//---------------------------------------------------------------
class Solution {
  //tc-> O(n*m) sc-> O(n*m)RS
public:
    bool isMatch(string text, string pattern) {
        int n=text.size(),m=pattern.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        dp[0][0]=true;

        for(int i=1;i<=n;i++)dp[i][0]=false;
        
        for(int j=1;j<=m;j++){
          int fl=true;
           for(int ind=1;ind<=j;ind++){
            if(pattern[ind-1]!='*'){
              fl=false;break;
              }
           }
            dp[0][j]=fl;
        }

        for(int i=1;i<=n;i++){
          for(int j=1;j<=m;j++){

            if(text[i-1]==pattern[j-1] || pattern[j-1]=='?')
              dp[i][j]=dp[i-1][j-1];
            else
              if(pattern[j-1]=='*')
                dp[i][j]=dp[i-1][j]||dp[i][j-1];
              else
                dp[i][j]=false;
            }
        }
        return dp[n][m];
    }
};
//---------------------------------------------------------------------
class Solution {
  //shifting index for tabulation approach
  //tc-> O(n*m) sc-> O(n*m)RS+O(n+m)ASS
public:
    bool isMatch(string s, string p) {
        int n=s.size(),m=p.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(s,p,n,m,dp);
    }
    bool solve(string text,string pattern,int i,int j,vector<vector<int>> &dp){
      //base condition
      //no char to compare
    if(i==0 &&j==0)return true;
    //text still left to compare
    if(j==0 && i>0)return false;
    //pattern left to compare
    if(i==0 && j>0){
      for(int ind=1;ind<=j;ind++){
        if(pattern[ind-1]!='*')return false;
      }
      return true;
    }
    if(dp[i][j]!=-1)return dp[i][j];
      //? mark can match with any character
      if(text[i-1]==pattern[j-1] || pattern[j-1]=='?'){
        return dp[i][j]=solve(text,pattern,i-1,j-1,dp);
      }else{
      //we have two choices match with * or treat * as nothing and move ahead
        if(pattern[j-1]=='*'){
          return dp[i][j]=solve(text,pattern,i-1,j,dp)
          ||solve(text,pattern,i,j-1,dp);
        }else{
          return dp[i][j]=false;
        }
      }

    }
};
//--------------------------------------------------------------------------
class Solution {
  //tc-> O(n*m) sc-> O(n*m)RS+O(n+m)ASS
public:
    bool isMatch(string s, string p) {
        int n=s.size(),m=p.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(s,p,n-1,m-1,dp);
    }
    bool solve(string text,string pattern,int i,int j,vector<vector<int>> &dp){
      //base condition
      //no char to compare
    if(i<0 &&j<0)return true;
    //text still left to compare
    if(j<0 && i>=0)return false;
    //pattern left to compare
    if(i<0 && j>=0){
      for(int ind=0;ind<=j;ind++){
        if(pattern[ind]!='*')return false;
      }
      return true;
    }
    if(dp[i][j]!=-1)return dp[i][j];
      //? mark can match with any character
      if(text[i]==pattern[j] || pattern[j]=='?'){
        return dp[i][j]=solve(text,pattern,i-1,j-1,dp);
      }else{
      //we have two choices match with * or treat * as nothing and move ahead
        if(pattern[j]=='*'){
          return dp[i][j]=solve(text,pattern,i-1,j,dp)
          ||solve(text,pattern,i,j-1,dp);
        }else{
          return dp[i][j]=false;
        }
      }

    }
};

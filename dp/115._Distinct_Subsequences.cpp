class Solution {
public:
//tc-> O(m*n) sc-> O(n)
    int numDistinct(string s, string t) {
       int m=s.size(),n=t.size();
       //not working with in , long so choose double
      vector<double> prev(n+1,0);
      prev[0]=1;

      for(int i=1;i<=m;i++){
        for(int j=n;j>0;j--){
           if(s[i-1]==t[j-1]){
             prev[j]=prev[j-1]+prev[j];
            }else{
              prev[j]=prev[j];
            }
        }
      }
      return (int)prev[n];
    }
};
//----------------------------------------------------------------------------------------------------------------------------------
class Solution {
public:
//tc-> O(m*n) sc-> O(m+n)
    int numDistinct(string s, string t) {
       int m=s.size(),n=t.size();
       //not working with in , long so choose double
      vector<double> prev(n+1,0),curr(n+1,0);
      curr[0]=prev[0]=1;

      for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
           if(s[i-1]==t[j-1]){
             curr[j]=prev[j-1]+prev[j];
            }else{
              curr[j]=prev[j];
            }
        }
        prev=curr;
      }
      return (int)prev[n];
    }
};
//----------------------------------------------------------------
class Solution {
public:
//tc-> O(m*n) sc-> O(m*n)
    int numDistinct(string s, string t) {
       int m=s.size(),n=t.size();
       //not working with in , long so choose double
      vector<vector<double>> dp(m+1,vector<double>(n+1,0));
      for(int i=0;i<=m;i++)dp[i][0]=1;
      // for(int j=1;j<=n;j++)dp[0][j]=0;

      for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
           if(s[i-1]==t[j-1]){
              dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            }else{
              dp[i][j]=dp[i-1][j];
            }
        }
      }
      return (int)dp[m][n];
    }
};
//--------------------------------------------------------------
class Solution {
public:
//shifting of index
//without memoization tc-> 2^m *2^n =exponantialy sc-> O(m+n) ASS
//tc-> O(n*m) sc->O(m*n)+O(m+n) OSS
    int numDistinct(string s, string t) {
      int m=s.size(),n=t.size();
      vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(s,t,m,n,dp);
    }
    int solve(string s,string t,int i,int j,vector<vector<int>> &dp){
      //if search string find then we are returning 1
      if(j==0)return 1;
      //if base string is finished but search string still available then no way to find the result
      if(i==0)return 0;
      if(dp[i][j]!=-1)return dp[i][j];
      if(s[i-1]==t[j-1]){
        //if string found then reduce the index of both the string+keep searching in remaining string for the next remaining search string 
        return dp[i][j]=solve(s,t,i-1,j-1,dp)+solve(s,t,i-1,j,dp);
      }else{
        //not found means simply search in remaining part of the string
        return dp[i][j]=solve(s,t,i-1,j,dp);
      }
    }
};
//----------------------------------------------------------------------

class Solution {
public:
//without memoization tc-> 2^m *2^n =exponantialy sc-> O(m+n) ASS
//tc-> O(n*m) sc->O(m*n)+O(m+n) OSS
    int numDistinct(string s, string t) {
      int m=s.size(),n=t.size();
      vector<vector<int>> dp(m,vector<int>(n,-1));
        return solve(s,t,m-1,n-1,dp);
    }
    int solve(string s,string t,int i,int j,vector<vector<int>> &dp){
      //if search string find then we are returning 1
      if(j<0)return 1;
      //if base string is finished but search string still available then no way to find the result
      if(i<0)return 0;
      if(dp[i][j]!=-1)return dp[i][j];
      if(s[i]==t[j]){
        //if string found then reduce the index of both the string+keep searching in remaining string for the next remaining search string 
        return dp[i][j]=solve(s,t,i-1,j-1,dp)+solve(s,t,i-1,j,dp);
      }else{
        //not found means simply search in remaining part of the string
        return dp[i][j]=solve(s,t,i-1,j,dp);
      }
    }
};

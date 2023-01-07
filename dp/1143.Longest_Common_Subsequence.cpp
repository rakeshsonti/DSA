class Solution {
  //tc->O(m*n) sc->O(m+n) memoization
public:
    int longestCommonSubsequence(string text1, string text2) {
      int m=text1.size(),n=text2.size();
      vector<int> prev(n+1,0),curr(n+1,0);
      for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
          if(text1[i-1]==text2[j-1])
            curr[j]=1+prev[j-1];
          else
            curr[j]=0+max(prev[j],curr[j-1]);
      }
      prev=curr;
    }
    return prev[n];
    }
};
//---------------------------------------------------------
class Solution {
  //tc->O(m*n) sc->O(m*n) memoization
public:
    int longestCommonSubsequence(string text1, string text2) {
      int m=text1.size(),n=text2.size();
      vector<vector<int>> dp(m+1,vector<int>(n+1,0));
      // for(int i=0;i<=m;i++)dp[i][0]=0;
      // for(int j=0;j<=n;j++)dp[0][j]=0;
      for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
          if(text1[i-1]==text2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
          else
            dp[i][j]=0+max(dp[i-1][j],dp[i][j-1]);
      }
    }
    return dp[m][n];
    }
};
//-------------------------------------------------------------
//shifting of index so that tabulation code become easy to understand
class Solution {
  //(1) in case of non memoization tc-> 2^m * 2^n=exponancial  sc-> O(n) recursion
//tc->O(m*n) sc->O(m*n) memoization+O(m+n) auxiliary stack space
public:
    int longestCommonSubsequence(string text1, string text2) {
      int m=text1.size(),n=text2.size();
      vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
      int res=solve(text1,text2,m,n,dp); 
      return res;     
    }
    int solve(string s1,string s2,int ind1,int ind2,vector<vector<int>> &dp){
      //end of the string if crosss the border
      if(ind1==0 || ind2==0)return 0;
      if(dp[ind1][ind2]!=-1)return dp[ind1][ind2];

      if(s1[ind1-1]==s2[ind2-1]){
        return dp[ind1][ind2]=1+solve(s1,s2,ind1-1,ind2-1,dp);
      }else{
        return dp[ind1][ind2]=0+max(solve(s1,s2,ind1-1,ind2,dp),solve(s1,s2,ind1,ind2-1,dp));
      }
    }
};
//-------------------------------------------------------------
class Solution {
  //(1) in case of non memoization tc-> 2^m * 2^n=exponancial  sc-> O(n) recursion
//tc->O(m*n) sc->O(m*n) memoization+O(m+n) auxiliary stack space
public:
    int longestCommonSubsequence(string text1, string text2) {
      int m=text1.size(),n=text2.size();
      vector<vector<int>> dp(m,vector<int>(n,-1));
      int res=solve(text1,text2,m-1,n-1,dp); 
      return res;     
    }
    int solve(string s1,string s2,int ind1,int ind2,vector<vector<int>> &dp){
      //end of the string if crosss the border
      if(ind1<0 || ind2<0)return 0;
      if(dp[ind1][ind2]!=-1)return dp[ind1][ind2];

      if(s1[ind1]==s2[ind2]){
        return dp[ind1][ind2]=1+solve(s1,s2,ind1-1,ind2-1,dp);
      }else{
        return dp[ind1][ind2]=0+max(solve(s1,s2,ind1-1,ind2,dp),solve(s1,s2,ind1,ind2-1,dp));
      }
    }
};

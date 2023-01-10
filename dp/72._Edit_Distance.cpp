class Solution {
  //tc->O(n*m) sc-> O(n+m)
public:
    int minDistance(string s1, string s2) {
      int n=s1.size(),m=s2.size();
      vector<int>prev(m+1,0),curr(m+1,0);
      for(int j=0;j<=m;j++)prev[j]=j;
      // for(int i=0;i<=n;i++)dp[i][0]=i;
     
      for(int i=1;i<=n;i++){
        curr[0]=i;
        for(int j=1;j<=m;j++){
          if(s1[i-1]==s2[j-1])
            curr[j]=prev[j-1];
          else{
            int ins=1+curr[j-1];
            int del=1+prev[j];
            int rep=1+prev[j-1];
            curr[j]=min(min(ins,del),rep);
            }
        }
        prev=curr;
      } 
      return prev[m];
    }
};
//----------------------------------------------------------------------
class Solution {
  //tc->O(n*m) sc-> O(n*m)
public:
    int minDistance(string s1, string s2) {
      int n=s1.size(),m=s2.size();
      vector<vector<int>> dp(n+1,vector<int>(m+1,0));
      for(int j=0;j<=m;j++)dp[0][j]=j;
      for(int i=0;i<=n;i++)dp[i][0]=i;
     
      for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
          if(s1[i-1]==s2[j-1])
            dp[i][j]=dp[i-1][j-1];
          else{
            int ins=1+dp[i][j-1];
            int del=1+dp[i-1][j];
            int rep=1+dp[i-1][j-1];
            dp[i][j]=min(min(ins,del),rep);
            }
        }
      } 
      return dp[n][m];
    }
};
//----------------------------------------------------------
class Solution {
  //shift the index to make easy tabulation solution
  //tc-> without memoization 3^n * 3*m=exponantially sc->O(n+m)
  //tc->O(n*m) sc-> O(n*m)RS +O(n+m)ASS
public:
    int minDistance(string word1, string word2) {
      int n=word1.size(),m=word2.size();
      vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return solve(word1,word2,n,m,dp);
    }
    int solve(string s1,string s2,int i,int j,vector<vector<int>>&dp){
      //if any of the index exausted we need the no of operation required so that we could insert||delete to find the result
      if(i==0)return j;
      if(j==0)return i;
      if(dp[i][j]!=-1)return dp[i][j];
      // if both the string matched || no operation required||
      //we have done with both the character so decrease it
      if(s1[i-1]==s2[j-1])return 0+solve(s1,s2,i-1,j-1,dp);
      else{
        //insert delete and replcae will be performed on s1
        //insert-> hypothetically we inserted at front position but did not change the position of i
        int ins=1+solve(s1,s2,i,j-1,dp);
        //delete-> we have delete the element at position i so deacrese the i
        int del=1+solve(s1,s2,i-1,j,dp);
        //replace-> if we replaced means now we are looking for the new element from both the string 
        int rep=1+solve(s1,s2,i-1,j-1,dp);
        return dp[i][j]=min(min(ins,del),rep);
      }
    }
};
//---------------------------------------------------------------------
class Solution {
  //tc-> without memoization 2^n * 2^m * 2^m=exponantially sc->O(n+m)
  //tc->O(n*m) sc-> O(n*m)
public:
    int minDistance(string word1, string word2) {
      int n=word1.size(),m=word2.size();
      vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(word1,word2,n-1,m-1,dp);
    }
    int solve(string s1,string s2,int i,int j,vector<vector<int>>&dp){
      //if any of the index exausted we need the no of operation required so that we could insert||delete to find the result
      if(i<0)return j+1;
      if(j<0)return i+1;
      if(dp[i][j]!=-1)return dp[i][j];
      // if both the string matched || no operation required||
      //we have done with both the character so decrease it
      if(s1[i]==s2[j])return 0+solve(s1,s2,i-1,j-1,dp);
      else{
        //insert delete and replcae will be performed on s1
        //insert-> hypothetically we inserted at front position but did not change the position of i
        int ins=1+solve(s1,s2,i,j-1,dp);
        //delete-> we have delete the element at position i so deacrese the i
        int del=1+solve(s1,s2,i-1,j,dp);
        //replace-> if we replaced means now we are looking for the new element from both the string 
        int rep=1+solve(s1,s2,i-1,j-1,dp);
        return dp[i][j]=min(min(ins,del),rep);
      }
    }
};

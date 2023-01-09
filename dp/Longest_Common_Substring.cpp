#include <bits/stdc++.h> 
int lcs(string &str1, string &str2){
    //tc-> O(m*n) sc-> O(m)+O(n)
    int ans=0,m=str1.size(),n=str2.size();
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));
    vector<int> prev(n+1,0),curr(n+1,0);
      // for(int i=0;i<=m;i++)dp[i][0]=0;
      // for(int j=0;j<=n;j++)dp[0][j]=0;
      for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
          if(str1[i-1]==str2[j-1]){
            curr[j]=1+prev[j-1];
              ans=max(curr[j],ans);
          }
          else curr[j]=0;
      }
          prev=curr;
      }
       return ans;
}
//--------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h> 
int lcs(string &str1, string &str2){
    //tc-> O(m*n) sc-> O(m)*O(n)
    int ans=0,m=str1.size(),n=str2.size();
     vector<vector<int>> dp(m+1,vector<int>(n+1,0));
      // for(int i=0;i<=m;i++)dp[i][0]=0;
      // for(int j=0;j<=n;j++)dp[0][j]=0;
      for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
          if(str1[i-1]==str2[j-1]){
            dp[i][j]=1+dp[i-1][j-1];
              ans=max(dp[i][j],ans);
          }
          else dp[i][j]=0;
      }
      }
       return ans;
}
//----------------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h> 
int solve(string &s1,string &s2,int ind1,int ind2,vector<vector<int>> &dp,int &maxValue);
int lcs(string &str1, string &str2){
    //tc-> O(m*n) sc-> O(m)*O(n)
    int count=0,m=str1.size(),n=str2.size();
     vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
    solve(str1,str2,m-1,n-1,dp,count);
       return count;
}
int solve(string &s1,string &s2,int ind1,int ind2,vector<vector<int>> &dp,int &count){
      //end of the string if crosss the border
      if(ind1<0 || ind2<0)return 0;
      if(dp[ind1][ind2]!=-1)return dp[ind1][ind2];
      int take=0;
      if(s1[ind1]==s2[ind2]){
        take=1+solve(s1,s2,ind1-1,ind2-1,dp,count);
      }
    //not putted into the else part beacause we need to explore both the choices
    //we need sequence and exploring all the path is the best choice if we find out that current matching so instead of checking only the both previous element we will check first string previos and second one current and first on current and second one previous
        solve(s1,s2,ind1-1,ind2,dp,count);
        solve(s1,s2,ind1,ind2-1,dp,count);
    //always keep track max result
    count=max(count,take);
//     previous result will help to find the value of current element
    return dp[ind1][ind2]=take;
    }

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

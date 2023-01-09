
#include<bits/stdc++.h>
int lcs(string text1, string text2)
{
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
    int len=dp[m][n];
    string ans="";
    for(int i=0;i<len;i++)ans+='$';
    int index=len-1;
    int i=m,j=n;
    while(i>0 && j>0){
        if(text1[i-1]==text2[j-1]){
            ans[index]=text1[i-1];
            index--;i--;j--;
        }else if(dp[i-1][j]>dp[i][j-1]) i--;
        else j--;
    }
    cout<<ans<<endl;
}

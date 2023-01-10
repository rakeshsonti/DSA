class Solution {
public:
 //tc->O(m*n)+O(n+m) reverse sc->O(m+n) memoization
    string shortestCommonSupersequence(string str1, string str2) {
           int m=str1.size(),n=str2.size();
      vector<vector<int>> dp(m+1,vector<int>(n+1,0));
      // for(int i=0;i<=m;i++)dp[i][0]=0;
      // for(int j=0;j<=n;j++)dp[0][j]=0;
      for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
          if(str1[i-1]==str2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
          else
            dp[i][j]=0+max(dp[i-1][j],dp[i][j-1]);
      }
      }
    int len=dp[m][n];
    string ans="";
    int index=len-1;
    int i=m,j=n;
    //if character match then include once and move the index
    // if not match then also include the character
    while(i>0 && j>0){
        if(str1[i-1]==str2[j-1]){
            ans.push_back(str1[i-1]);
            i--;j--;
        }else if(dp[i-1][j]>dp[i][j-1]){
          ans.push_back(str1[i-1]);
           i--;
           }
        else {
          ans.push_back(str2[j-1]);
          j--;
          }
    }
    while(i>0){
       ans.push_back(str1[i-1]);
       i--;
    }
    while(j>0){
       ans.push_back(str2[j-1]);
       j--;
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};

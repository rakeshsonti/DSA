class Solution {
  //tc-> O(m)+O(m*n)+O(n)=O(m*n) sc-> O(m+1)+O(n+1)
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
      int m=matrix.size();
      int n=matrix[0].size();
      if(m==1 &&n==1)return matrix[m-1][n-1];
    vector<int> prevRow(m+1,0);      
    vector<int> currRow(m+1,0);      
      for(int i=0;i<m;i++){
        prevRow[i]=matrix[0][i];
      }
        for(int i=1;i<m;i++){
          for(int j=0;j<n;j++){
            int prev=1e9;
            int curr=1e9;
            int next=1e9;
            if(j-1>=0)prev=matrix[i][j]+prevRow[j-1];
            if(j<=m)curr=matrix[i][j]+prevRow[j];
            if(j+1<m)next=matrix[i][j]+prevRow[j+1];
            currRow[j]=min(curr,min(prev,next));
          }
          prevRow=currRow;
        }
        int minValue=1e9;
        for(int j=0;j<n;j++){
          minValue=min(minValue,currRow[j]);
        }
        return minValue;
    }
};
//-----------------------------------------------------------------------------------------------------
class Solution {
  //tc-> O(m)+O(m*n)+O(n)=O(m*n) sc-> O(m*n)
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
      int m=matrix.size();
      int n=matrix[0].size();
      vector<vector<int>> dp(m+1,vector<int>(n+1,0));
      for(int i=0;i<m;i++){
        dp[0][i]=matrix[0][i];
      }
        for(int i=1;i<m;i++){
          for(int j=0;j<n;j++){
            int prev=1e9;
            int curr=1e9;
            int next=1e9;
            if(j-1>=0)prev=matrix[i][j]+dp[i-1][j-1];
            if(j<=m)curr=matrix[i][j]+dp[i-1][j];
            if(j+1<m)next=matrix[i][j]+dp[i-1][j+1];
            dp[i][j]=min(curr,min(prev,next));
          }
        }
        int minValue=1e9;
        for(int j=0;j<n;j++){
          minValue=min(minValue,dp[n-1][j]);
        }
        return minValue;
    }
};
//------------------------------------------------------------------------------------------------------------------
class Solution {
  
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
      int minValue=1e9;
      int m=matrix.size();
      vector<vector<int>> dp(m+1,vector<int>(m+1,-1));
        for(int j=0;j<matrix.size();j++)
        minValue=min(minValue,solve(matrix,m-1,j,m,dp));
        return minValue;
    }
    int solve(vector<vector<int>> & mt,int i,int j,int m,vector<vector<int>> &dp){
      if(j<0 ||j>=m)return 1e9;
      if(i==0)return mt[0][j];
      if(dp[i][j]!=-1)return dp[i][j];
      int prev=mt[i][j]+solve(mt,i-1,j-1,m,dp);
      int curr=mt[i][j]+solve(mt,i-1,j,m,dp);
      int next=next=mt[i][j]+solve(mt,i-1,j+1,m,dp);
      return dp[i][j]=min(curr,min(prev,next));
    }
};

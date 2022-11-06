class Solution {
public:
    //tc->O(m*n) sc-> O(m+n)
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int> prev(m,0);
        for(int i=0;i<n;i++){
            vector<int> curr(m,0);
            for(int j=0;j<m;j++){
                if(i==0 && j==0)curr[j]=grid[i][j];
                else{
                    int up=grid[i][j];
                    if(i>0)up+=prev[j];
                    else up+=1e9;
                    int left=grid[i][j];
                    if(j>0)left+=curr[j-1];
                    else left+=1e9;
                   curr[j]=min(left,up);
                }
            }
            prev=curr;
        }
            return prev[m-1];
    }
};

//-----------------------------------------------------------
class Solution {
public:
//tc->O(m*n) sc-> O(m*n)
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 && j==0)dp[i][j]=grid[i][j];
                else{
                    int up=grid[i][j];
                    if(i>0)up+=dp[i-1][j];
                    else up+=1e9;
                    int left=grid[i][j];
                    if(j>0)left+=dp[i][j-1];
                    else left+=1e9;
                    dp[i][j]=min(left,up);
                }
            }
        }
            return dp[n-1][m-1];
    }
};
//-------------------------------------------------------------------------
class Solution {
    //tc->O(m*n) sc-> O(m*n)+O(path length) || O((m-1)+(n-1))
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();//rows
        int n=grid[0].size();//col
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(0,0,m,n,grid,dp);
    }
    long solve(int i,int j,int m,int n,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(i==m-1 && j==n-1){
            return grid[i][j];
        }
        
        if(i==m || j==n){
            return INT_MAX;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        return dp[i][j]=min(grid[i][j]+solve(i+1,j,m,n,grid,dp),grid[i][j]+solve(i,j+1,m,n,grid,dp));
    }
};

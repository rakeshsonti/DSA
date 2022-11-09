class Solution {
    //tc-> O(m*n) sc->O(m+n)-> tabulation space
public:
    int minimumTotal(vector<vector<int>>& tg) {
        int n=tg.size();
        vector<int>next(n,-1);
        //first assign last row to dp
        // iterate from last to first bottom up uproach
        
        for(int i=0;i<n;i++){
            next[i]=tg[n-1][i];
        }
        for(int i=n-2;i>=0;i--){
             vector<int>curr(n,-1);
            for(int j=i;j>=0;j--){
                int bottom=tg[i][j]+next[j];
                int bottom_right=tg[i][j]+next[j+1];
                curr[j]=min(bottom,bottom_right);
            }
            next=curr;
        }
        return next[0];       
    }   
};

/-----------------------------------------------------------------------------------
class Solution {
    //tc-> O(m*n) sc->O(m*n)-> tabulation space
public:
    int minimumTotal(vector<vector<int>>& tg) {
        int n=tg.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        //first assign last row to dp
        // iterate from last to first bottom up uproach
        
        for(int i=0;i<n;i++){
            dp[n-1][i]=tg[n-1][i];
        }
        for(int i=n-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                int bottom=tg[i][j]+dp[i+1][j];
                int bottom_right=tg[i][j]+dp[i+1][j+1];
                dp[i][j]=min(bottom,bottom_right);
            }
        }
        return dp[0][0];
    }
};
/-------------------------------------------------------------------------
class Solution {
    //tc-> O(m*n) sc->O(m*n)->dp+O(log(n))->recursion 
public:
    int minimumTotal(vector<vector<int>>& tg) {
        int n=tg.size();
        vector<vector<int>> dp(n,vector<int>(tg[n-1].size(),-1));
        return solve(0,0,n,tg,dp);
    }
    int solve(int i,int j,int n,vector<vector<int>> &tg,vector<vector<int>> &dp){
        if(i==n-1)return tg[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        int bottom=tg[i][j]+solve(i+1,j,n,tg,dp);
        int bottom_right=tg[i][j]+solve(i+1,j+1,n,tg,dp);
        return dp[i][j]=min(bottom,bottom_right);
    }
};
/-------------------------------------------------------------------
class Solution {
  //tc-> O(m*n) sc->O(m*n)->dp+O(log(n))->recursion 
public:
    int minimumTotal(vector<vector<int>>& tg) {
        int n=tg.size();
        vector<vector<int>> dp(n,vector<int>(tg[n-1].size(),-1));
        return solve(0,0,n,tg,dp);
    }
    int solve(int i,int j,int n,vector<vector<int>> &tg,vector<vector<int>> &dp){
        if(i==n-1)return tg[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        int bottom=tg[i][j]+solve(i+1,j,n,tg,dp);
        int bottom_right=tg[i][j]+solve(i+1,j+1,n,tg,dp);
        return dp[i][j]=min(bottom,bottom_right);
    }
};

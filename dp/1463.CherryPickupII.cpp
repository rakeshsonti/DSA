class Solution {
  //tc-> O(N*M*M) * 9 sc-> O(N) recursion stack space+ O(N*M*M) memoization space
public:
    int cherryPickup(vector<vector<int>>& grid) {
      int row=grid.size(),col=grid[0].size();
        vector<vector<vector<int>>> dp(row,vector<vector<int>>(col,vector<int>(col,-1)));
       return solve(0,0,col-1,row,col,dp,grid);
    }
    int solve(int comrow,int colbob,int colalice,int r,int c,vector<vector<vector<int>>> & dp,vector<vector<int>> & grid ){
      if(colbob<0 || colalice<0 || colbob>=c || colalice>=c){
        return -1e9;
      }
      // if it is last row
      if(comrow==r-1){
        //two scenario of both stood on the same place return only one else return both values
        if(colbob==colalice)
          return grid[comrow][colbob];
        else
        return grid[comrow][colbob]+grid[comrow][colalice];
      }
        if(dp[comrow][colbob][colalice]!=-1)return dp[comrow][colbob][colalice];
        //we have a 9 choice bob and alice can be on different position to coresponding to each other bottm left,bottm and bottom right
        int maxValue=-1e9;
        for(int i=-1;i<=1;i++){
          for(int j=-1;j<=1;j++){
            int ans;
            //if both stood on the same col
            if(colbob==colalice)
              ans=grid[comrow][colbob]+solve(comrow+1,colbob+i,colalice+j,r,c,dp,grid);
            else
              ans=grid[comrow][colbob]+grid[comrow][colalice]+solve(comrow+1,colbob+i,colalice+j,r,c,dp,grid);
            maxValue=max(maxValue,ans);
          } 
        }
        return dp[comrow][colbob][colalice]=maxValue;
      }
};

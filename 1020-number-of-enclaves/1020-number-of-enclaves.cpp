class Solution {
  //BFS solution
  //tc-> O(n)+O(m)+O(n*m*4)+O(m*n)
  //sc-> O(n*m)
  public: int numEnclaves(vector < vector < int >> & grid) {
    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>> vis(n,vector<int>(m,0));
    
    int delrow[]={-1,0,0,1};
    int delcol[]={0,-1,1,0};
    queue<pair<int,int>> q;
    
    for(int i=0;i<m;i++){
      //first row
      if(grid[0][i]==1){
        q.push({0,i});
        vis[0][i]=1;
      }
      //last row
      if(grid[n-1][i]){
        q.push({n-1,i});
        vis[n-1][i]=1;
      }
    }
    
    for(int j=0;j<n;j++){
      //first col
      if(grid[j][0]==1){
        q.push({j,0});
        vis[j][0]=1;
      }
      // last col
      if(grid[j][m-1]==1){
        q.push({j,m-1});
        vis[j][m-1]=1;
      }
    }
   
    while(!q.empty()){
      pair<int,int> node=q.front();
      q.pop();
      // vis[node.first][node.second]=1;
      for(int i=0;i<4;i++){
        int nrow=node.first+delrow[i];
        int ncol=node.second+delcol[i];
        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1 && vis[nrow][ncol]==0){
           q.push({nrow,ncol});
          vis[nrow][ncol]=1;
        }
      }
    }
    int count=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(grid[i][j]==1 && vis[i][j]==0)count++;    
      }
    }
    return count;
  }
};

/*
class Solution {
  //DFS solution
  //tc-> O(n)+O(m)+O(n*m*4)
  //sc-> O(n*m)
  public: int numEnclaves(vector < vector < int >> & grid) {
    int n = grid.size(), m = grid[0].size();

    vector < vector < int >> vis(n, vector < int > (m, 0));
    for (int i = 0; i < m; i++) {
      //first row
      if (grid[0][i] == 1)
        solve(0, i, grid, vis);

      //last row
      if (grid[n - 1][i] == 1)
        solve(n - 1, i, grid, vis);
    }

    for (int j = 0; j < n; j++) {
      //first col
      if (grid[j][0] == 1)
        solve(j, 0, grid, vis);

      //last row
      if (grid[j][m - 1] == 1)
        solve(j, m - 1, grid, vis);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        if (grid[i][j] == 1 && vis[i][j] == 0) count++;

    return count;
  }
  void solve(int row, int col, vector < vector < int >> & grid, vector < vector < int >> & vis) {
    int n = grid.size();
    int m = grid[0].size();
    vis[row][col] = 1;
    int delrow[] = {
      -1,
      0,
      0,
      1
    };
    int delcol[] = {
      0,
      -1,
      1,
      0
    };
    for (int i = 0; i < 4; i++) {
      int nrow = row + delrow[i];
      int ncol = col + delcol[i];
      if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1) {
        solve(nrow, ncol, grid, vis);
      }
    }
  }
};
*/
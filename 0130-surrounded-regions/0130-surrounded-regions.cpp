class Solution {
  //tc-> O(m)+O(n) + O(n*m*4)
  //sc-> O(m+n)rec+O(4)+O(m*n) vis
public:
  void solve(vector<vector<char>>& board){
    int n=board.size(),m=board[0].size();
    vector<vector<int>> vis(n,vector<int>(m,0));
    for(int j=0;j<m;j++){
      //first row
      if(!vis[0][j] && board[0][j]=='O')
        dfs(0,j,vis,board);
      //last row
       if(!vis[n-1][j] && board[n-1][j]=='O')
        dfs(n-1,j,vis,board);
    }
    
    for(int  i=0;i<n;i++){
      //first column
      if(!vis[i][0] && board[i][0]=='O')
      dfs(i,0,vis,board);
      //last column
      if(!vis[i][m-1] && board[i][m-1]=='O')
      dfs(i,m-1,vis,board);
    }
    
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
        if(vis[i][j]==0 && board[i][j]=='O')board[i][j]='X';
    
  }
  void dfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>>& board) {
    vis[row][col]=1;
    
    int delrow[]={-1,0,0,1};
    int delcol[]={0,-1,1,0};
    
    int n=board.size();
    int m=board[0].size();
    
    for(int i=0;i<4;i++){
      int nrow=row+delrow[i];
      int ncol=col+delcol[i];
      if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && board[nrow][ncol]=='O'){
        dfs(nrow,ncol,vis,board);
      }
    }
  }
};
/*
class Solution {
  //tc-> O(m)+O(n)+O(m*n) +O(m*n)~O(m*n) sc-> O(m*n) queue
public:
  void solve(vector<vector<char>>& board) {
     int n=board.size(),m=board[0].size();
     queue<pair<int,int>> q;
     // iterate for the first row || last row
      for(int i=0;i<m;i++){
        if(board[0][i]=='O')q.push({0,i});
        if(board[n-1][i]=='O')q.push({n-1,i});
      }
      // iterate for the  first colomn || last colomn
      for(int i=0;i<n;i++){
         if(board[i][0]=='O')q.push({i,0});
         if(board[i][m-1]=='O')q.push({i,m-1});
      }
      //node whoose connected with border and contains 'O' marked with 1, so change back to 'O' and 'X'
     
      int x1[]={-1,0,0,1};
      int y1[]={0,-1,1,0};
      while(!q.empty()){
        auto node=q.front();
        board[node.first][node.second]='1';
        q.pop();
        for(int i=0;i<4;i++){
          int x=x1[i]+node.first;
          int y=y1[i]+node.second;
          if(x>=0 && y>=0 && x<n && y<m ){
            if(board[x][y]=='O'){
              board[x][y]='1';
               q.push({x,y});
            }
          }
        }
      }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(board[i][j]=='1' )board[i][j]='O';
          else board[i][j]='X';
        }
      }
  }
};

class Solution {
public:
  int n,m;
  
  void solve(vector<vector<char>>& board) {
      n=board.size(),m=board[0].size();
     // iterate for the first row || last row
      for(int i=0;i<m;i++){
        if(board[0][i]=='O')BFS(board,0,i);
        if(board[n-1][i]=='O')BFS(board,n-1,i);
      }
      // iterate for the  first colomn || last colomn
      for(int i=0;i<n;i++){
         if(board[i][0]=='O')BFS(board,i,0);
         if(board[i][m-1]=='O')BFS(board,i,m-1);
      }
      //node whoose connected with border and contains 'O' marked with 1, so change back to 'O' and 'X'
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(board[i][j]=='1' )board[i][j]='O';
          else board[i][j]='X';
        }
      }
      
  }
    void BFS(vector<vector<char>>& board,int a,int b) {
      int x1[]={-1,0,0,1};
      int y1[]={0,-1,1,0};
      queue<pair<int,int>> q;
      q.push({a,b});
      
      while(!q.empty()){
        auto node=q.front();
        board[node.first][node.second]='1';
        q.pop();
        for(int i=0;i<4;i++){
          int x=x1[i]+node.first;
          int y=y1[i]+node.second;
          if(x>=0 && y>=0 && x<n && y<m ){
            if(board[x][y]=='O'){
              board[x][y]='1';
               q.push({x,y});
            }
          }
        }
      }
    
    }
};
*/
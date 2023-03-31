class Solution {
public:
  int n,m;
  
  void solve(vector<vector<char>>& board) {
      n=board.size(),m=board[0].size();
      // vector<vector<bool>> vis(n,vector<bool>(m,false));
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
      //iterate over the vis array and check the non visited value
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
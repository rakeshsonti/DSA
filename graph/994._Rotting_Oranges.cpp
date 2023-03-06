class Solution {
  //tc->  O(N*M)visit first time +O((N*M)*4)queue=o(N*M)
  //sc-> O(N*M) QUEUE +o(N*M) VIS=o(N*M)
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        // vector<vector<int>> vis(vector<vector<int>>(n+1,vector<int>(m+1,0)));
        int vis[n+1][m+1];
        int totalCount=0;
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
            if(grid[i][j]==2){
              q.push({{i,j},0});
              vis[i][j]=2;
            }else vis[i][j]=0;
            if(grid[i][j]==1)totalCount++;
          }
        }
        int time=0,cnt=0;
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        while(!q.empty()){
          int r=q.front().first.first;
          int c=q.front().first.second;
          int t=q.front().second;
          time=max(time,t);
          q.pop();
           for(int i=0;i<4;i++){
             int nrow=r+drow[i];
             int ncol=c+dcol[i];
             //make sure row and col are valid and not visited previosly and it can be rotten
             if(nrow>=0 && nrow<n && ncol>=0 
             && ncol<m && vis[nrow][ncol]!=2 &&grid[nrow][ncol]==1){
               q.push({{nrow,ncol},t+1});
               vis[nrow][ncol]=2;cnt++;
             }
           }
        }
        // for(int i=0;i<n;i++){
        //   for(int j=0;j<m;j++){
        //     if(vis[i][j]!=2 && grid[i][j]==1)return -1;
        //   }
        // }
        return (totalCount==cnt)?time:-1;
    }
};

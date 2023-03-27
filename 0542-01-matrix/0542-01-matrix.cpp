class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
      int n=mat.size(),m=mat[0].size();
      vector<vector<int>> vis(n,vector<int>(m,1));
      vector<vector<int>> ans(n,vector<int>(m,0));
      int level=0;
      queue<pair<pair<int,int>,int>>q;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(mat[i][j]==0){
            q.push({{i,j},level});
            vis[i][j]=0;
          }
        }
      }
      int x1[]={-1,0,0,1};
       int y1[]={0,-1,1,0};
     while(!q.empty()){
       auto tmp=q.front();
       q.pop();
       int a=tmp.first.first,b=tmp.first.second,lvl=tmp.second;
       ans[a][b]=lvl;
         
         for(int i=0;i<4;i++){
           int x=x1[i]+a,y=y1[i]+b;
           if(x>=0 && x<n && y>=0 && y<m && vis[x][y]==1){
             vis[x][y]=0;
             q.push({{x,y},lvl+1});
           }
       }
     }//queue
      return ans;
    }
};
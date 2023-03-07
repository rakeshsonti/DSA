class Solution {
  //tc-> O(n*m*4) sc-> O(n*m) matrix to store the ans +O(n*m)stack space 
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>> vis=image;
        queue<pair<int,int>> q;
        q.push({sr,sc});
        int initColor=image[sr][sc];
        vis[sr][sc]=newColor;
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        while(!q.empty()){
          int r=q.front().first;
          int c=q.front().second;
          q.pop();
           for(int i=0;i<4;i++){
              int nrow=r+drow[i];
              int ncol=c+dcol[i];
             if(nrow>=0 && ncol>=0 && nrow<n &&ncol<m
              &&image[nrow][ncol]==initColor && vis[nrow][ncol]!=newColor){
                q.push({nrow,ncol});
                vis[nrow][ncol]=newColor;
              }
           }
        }
  
        return vis;
    } 
};
//----------------------------------------------------------------------------------------------------------------------------------
class Solution {
  //tc-> O(n*m*4) sc-> O(n*m) matrix to store the ans +O(n*m)stack space 
  private:
  void dfs(int row,int col,vector<vector<int>> &ans,vector<vector<int>> &image,int newColor,int dlr[],int dlc[],int initColor){
    ans[row][col]=newColor;
    int n=image.size();
    int m=image[0].size();
    for(int i=0;i<4;i++){
      int nrow=row+dlr[i];
      int ncol=col+dlc[i];
      //if row and col value is valid row,col value and current element color should be match with the initial color and current element is not already updated 
      if(nrow>=0 && ncol>=0 && nrow<n &&ncol<m
      &&image[nrow][ncol]==initColor && ans[nrow][ncol]!=newColor){
        dfs(nrow,ncol,ans,image,newColor,dlr,dlc,initColor);
      }
    }
  }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
      //we can only change the neighbour if it has the same color as initial element color
      //new color is the desired color in which author want the resulta
       int initColor=image[sr][sc];
       //used for getting the neighbour
       int dlr[]={-1,0,1,0};
       int dlc[]={0,1,0,-1};
       //ans which we need to return
       vector<vector<int>> ans=image;
       dfs(sr,sc,ans,image,newColor,dlr,dlc,initColor);
       return ans;
    } 
};

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        set<vector<pair<int,int>>> st;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    vector<pair<int,int>> currList;
                    dfs(i,j,grid,vis,currList,i,j);
                    st.insert({currList});
                }
            }
        }

        return st.size();
    }
    void dfs(int row,int col,vector<vector<int>> & grid,vector<vector<int>> & vis,vector<pair<int,int>> & v,int row0,int col0){
        int n=grid.size(),m=grid[0].size();
        vis[row][col]=1;
        int drow[]={-1,0,0,1};
        int dcol[]={0,-1,1,0};
        
        v.push_back({row-row0,col-col0});
        for(int i=0;i<4;i++){
                int nrow=drow[i]+row;
                int ncol=dcol[i]+col;
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                    dfs(nrow,ncol,grid,vis,v,row0,col0);
                }
        }
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends
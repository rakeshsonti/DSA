//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    //tc-> O(nxmx4) sc-> O(nxm)+O(nxmx2)=O(nxm)
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        //vector to keep track visiting node
        vector<vector<int>> vis(n,vector<int>(m,0));
        //to store answer
        set<vector<pair<int,int>>> st;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    //list which store one islands cordinates 
                    vector<pair<int,int>> currList;
                    dfs(i,j,grid,vis,currList,i,j);
                    //to avoid duplicates set is using and stored once all island elements stored
                    st.insert({currList});
                }
            }
        }
        //no of islands
        return st.size();
    }
    void dfs(int row,int col,vector<vector<int>> & grid,vector<vector<int>> & vis,vector<pair<int,int>> & v,int row0,int col0){
        int n=grid.size(),m=grid[0].size();
        vis[row][col]=1;
        int drow[]={-1,0,0,1};
        int dcol[]={0,-1,1,0};
        //store current element cordinates such that there is no effect of directions
        v.push_back({row-row0,col-col0});
        for(int i=0;i<4;i++){
                int nrow=drow[i]+row;
                int ncol=dcol[i]+col;
                //if cordinates is valid
                //row0 and col0 is base cordinates so will store all cordinates distance from the base cordinates
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
class Solution {
  //tc-> O(n) for checking all the element+(O(V+2E)) = O(n)
  //sc->O(n) visiting array +O(n) stack space (in case of skeved tree)
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
      int v=isConnected[0].size();
      vector<int> vis(v+1,0);
      vector<int> adjLs[v+1];
      for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
          if(isConnected[i][j] && i!=j){
            adjLs[i].push_back(j);
            adjLs[j].push_back(i);
          }
        }
      }
      int ans=0;
      for(int i=0;i<isConnected.size();i++){
        if(!vis[i]){
          solve(adjLs,vis,i);
          ans++;
        }
      }
      return ans;
    }
     void solve(vector<int> adj[],vector<int> & vis,int node){
        vis[node]=1;
        for(auto y: adj[node]){
                if(!vis[y]){
                    solve(adj,vis,y);
                }
        }
    }
};

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//DFS Solution
class Solution {
  public:
   // TC-> O(n every node+2E(summation of all adjacent node))+O(N)outer for loop
//   dfs traversal sc-> O(N) stack space+O(N) visited array
    bool isCycle(int V, vector<int> adj[]) {
        int vis[V]={0};
        for(int i=1;i<V;i++){
            if(!vis[i])if(dfs(i,-1,vis,adj))return true;
        }
      return false;
    }
 public:
    bool dfs(int node,int parent,int vis[],vector<int> adj[]){
            vis[node] = 1;
            for (auto adjNode: adj[node]) {
              if (!vis[adjNode]){
                  if (dfs(adjNode,node,vis,adj)) return true;
              }
                else if (adjNode!=parent ) return true;
            }
            return false;
    }
};
//----------------------------------------------------------------------------------------------------------
//BFS Solution
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    // TC-> O(N+(2*E))+O(N) sc-> O(N)+O(N)=O(N)
    bool isCycle(int V, vector<int> adj[]) {
      vector<int> vis(V,0);
      for(int k=1;k<V;k++){
          if(!vis[k]){
              queue<pair<int,int>>q;
              q.push({k,-1});
              vis[k]=1;
              while(!q.empty()){
                  auto node=q.front();
                  q.pop();
                  for(auto x:adj[node.first]){
                      if(!vis[x]){
                        q.push({x,node.first});
                        vis[x]=1;
                      }else if(node.second!=x){
                          return true;
                      }
                  }
              }
          }
      }
      
     return false;
    }
};
//----------------------------------------------------------------------------------------------------------

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends

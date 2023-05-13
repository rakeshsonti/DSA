//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    //tc-> O(V+E)
    //SC-> O(2N)+O(N)
    private:
    bool dfs(int node,vector<int> adj[],vector<int> &vis,vector<int> &dfsVis){
        vis[node]=1;
        dfsVis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                if(dfs(it,adj,vis,dfsVis))return true;
            }else if(dfsVis[it]) return true;
        }
        dfsVis[node]=0;
        return false;
    }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        //for tracking the visiting node
        vector<int> vis(V,0);
        //for tracking if visiting node is in same direction of oposite direction
        //in oposite direction will not be consider as a cyclic graph
        vector<int> dfsVis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,adj,vis,dfsVis))return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends
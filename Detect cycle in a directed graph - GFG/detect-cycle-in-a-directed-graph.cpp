//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    //cycle detection using bfs
    //tc-> O(V+E) sc-> O(2E)
    private:
    	bool topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> vis(V,0);
	    queue<int> q;
	    //count degree of the vertices (incoming adges)
	    for(int i=0;i<V;i++){
	        for(auto ind: adj[i])vis[ind]++;
	    }
	    //push the element whoose degree is 0
	    for(int i=0;i<V;i++)if(vis[i]==0)q.push(i);
	    //instead of storing the topo sort we only detect if no of count element is equals to the vetices that means toposort possible and cycle does not exists
	    // if graph is a acyclic and directed then only topo sort is possible
	    int count=0;
	    while(!q.empty()){
	        int val=q.front();
	        q.pop();
	        count++;
	        for(auto it:adj[val]){
	            //decrease the edges and push once incoming adge is zero
	            vis[it]--;
	            if(vis[it]==0)q.push(it);
	        }
	    }
	    return (V!=count);
	}
    public:
     bool isCyclic(int V, vector<int> adj[]) {
         return topoSort(V,adj);
     }
};
/*
 class Solution{
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
*/

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
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    //tc-> O(V+E)+O(V) sc-> O(V)
  public:
    vector<int> eventualSafeNodes(int v, vector<int> adj[]) {
      vector<int> adjrev[v];
      queue<int> q;
      vector<int> indegree(v,0);
      for(int i=0;i<v;i++){
        for(auto it:adj[i]){
          adjrev[it].push_back(i);
          indegree[i]++;
        }
      }
      vector<int> safenode;
      for(int i=0;i<v;i++){
        if(indegree[i]==0)q.push(i);
      }
      while(!q.empty()){
        auto node=q.front();
        q.pop();
        safenode.push_back(node);
        for(auto it:adjrev[node]){
          indegree[it]--;
          if(indegree[it]==0)q.push(it);
        }
      }
      sort(safenode.begin(),safenode.end());
      return safenode;
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
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends
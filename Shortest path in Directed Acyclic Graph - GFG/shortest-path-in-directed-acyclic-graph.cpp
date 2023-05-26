//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
    //O(N+M) //TOPO SHORT ALGO
  public:
  void dfs(vector<pair<int,int>> adj[],vector<bool> &vis,int ind,stack<int> &st){
      vis[ind]=true;
      for(auto it:adj[ind]){
          if(vis[it.first]==false)dfs(adj,vis,it.first,st);
      }
      st.push(ind);
  }
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        int v=N;
        //generate adjacent matrix
        vector<pair<int,int>> adj[v];
       
        for(auto it:edges){
            adj[it[0]].push_back({it[1],it[2]});
        }
        stack<int> st;
        vector<bool> vis(v,false);
        for(int i=0;i<v;i++){
            if(vis[i]==false)dfs(adj,vis,i,st);
        }
        int distance=0;
         vector<int> dis(v,1e9);
         dis[0]=0;
         //O(N+M)
        while(!st.empty()){
           auto it=st.top();
           st.pop();
           distance=dis[it];
            for(auto x:adj[it]){
                if(dis[x.first]>(x.second+distance)){
                    dis[x.first]=(x.second+distance);
                }
            }
        }
        for(int i=0;i<dis.size();i++){
            if(dis[i]==1e9)dis[i]=-1;
        }
        return dis;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends
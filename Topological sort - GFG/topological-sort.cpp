//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    // tc->O(U+V) sc-> O(U+V)+O(U+V)=O(U+V)
    //Kahn's Algorithms
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> vis(V,0);
	    queue<int> q;
	    vector<int> ans;
	    //count degree of the vertices (incoming adges)
	    for(int i=0;i<V;i++){
	        for(auto ind: adj[i])vis[ind]++;
	    }
	    //push the element whoose degree is 0
	    for(int i=0;i<V;i++)if(vis[i]==0)q.push(i);
	    while(!q.empty()){
	        int val=q.front();
	        q.pop();
	        ans.push_back(val);
	        for(auto it:adj[val]){
	            //decrease the edges and push once incoming adge is zero
	            vis[it]--;
	            if(vis[it]==0)q.push(it);
	        }
	    }
	    return ans;
	}
};
/*
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    //DFS Solution
	   // tc->(V+U) sc-> O(V+U)+O(U+V)=O(U+V)
	   //this one is a sinple DFS only result stored in stack data structure
	    stack<int> st;
	    vector<bool> vis(V,false);
	    for(int i=0;i<V;i++){
	            if(vis[i]==false) dfs(adj,vis,i,st);
	    }
	    vector<int> ans;
	    while(!st.empty()){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}
	void dfs(vector<int> adj[],vector<bool> &vis,int val,stack<int> &st){
	    vis[val]=true;
	    for(auto y:adj[val]){
	        if(vis[y]==false) dfs(adj,vis,y,st);
	    }
	    st.push(val);
	}
};
*/

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends
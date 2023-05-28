//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    //tc-> O(E+log(V)) sc-> O(V)
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        //generate adjacency matrix
        vector<pair<int,int>> adj[n+1];
        for(auto x:edges){
            adj[x[0]].push_back({x[1],x[2]});
            adj[x[1]].push_back({x[0],x[2]});
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> parent;
        parent.reserve(n+1);
        for(int i=1;i<=n;i++){
            parent[i]=i;
        }
        vector<int> dis(n+1,1e9);
        pq.push({0,1});
        dis[1]=0;
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int node=it.second;
            int d=it.first;
            for(auto it1:adj[node]){
                int currNode=it1.first;
                int currDist=it1.second;
                if(dis[currNode]>(d+currDist)){
                    dis[currNode]=d+currDist;
                    pq.push({d+currDist,currNode});
                    parent[currNode]=node;
                }
            }
        }
        //if not able to reach 
        if(dis[n]==1e9)return {-1};
        //calculate the path
        int node1=n;
        vector<int> ans;
        ans.reserve(n);  // Reserve space for n elements
        while(parent[node1]!=node1){
            ans.emplace_back(node1);
            node1=parent[node1];
        }
        ans.emplace_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
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
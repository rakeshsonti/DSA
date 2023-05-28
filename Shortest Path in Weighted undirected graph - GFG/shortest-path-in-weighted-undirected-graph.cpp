//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
     // Time complexity: O(E + log(V)), where E is the number of edges and V is the number of vertices
    // Space complexity: O(V)
/*    The code implements Dijkstra's algorithm to find the shortest path from a source node to a destination node in a weighted graph.

Generate adjacency list: Iterate through the edges vector and add edges and weights to the adjacency list.

Initialize data structures: Create a priority queue, parent vector, and distance vector.

Apply Dijkstra's algorithm: Push the source node to the priority queue with a distance of 0. While the queue is not empty, pop the node with the minimum distance. Update distances and parent nodes for neighboring nodes.

Check if the destination is reachable: If the shortest distance to the destination is infinity, return [-1].

Retrieve the shortest path: Starting from the destination node, iterate through parent nodes and add them to the path vector. Reverse the path vector and return it.
*/
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Generate adjacency list
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
        // If not able to reach the destination node
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
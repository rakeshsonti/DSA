//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    //Solutio using Set
    //tc-> O(E+log(V)) E is the total edges and V is the total no of nodes
	//sc-> O(V)
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
       vector<int> dis(V,1e9);
        set<pair<int,int>> st;
       //start from the source
       //distance is of going to the same element using same element as a source
       //This algo will work if The Graph doesn't contain any negative weight cycle.
       // if the graph contains negative weight then it will go into infinite loop and if we go any distance it will consume something , negative weight does not exists
       st.insert({0,S});
       dis[S]=0;
       while(!st.empty()){
           //distance till now
           int dist=(*st.begin()).first;
           int node=(*st.begin()).second;
            st.erase(st.begin(),++st.begin());
           for(auto it1:adj[node]){
               int currWeight=it1[1];
               int currNode=it1[0];
               //calculate new distance
               int currDist=dist+currWeight;
               //update the distance is found better
               if(dis[currNode]>currDist){
                   dis[currNode]=currDist;
                   st.insert({currDist,currNode});
               }
           }
       }
       return dis;
    }
};
/*
class Solution
{
    //Solutio using Priority Queue (MIN heap)
    //tc-> O(E+log(V)) E is the total edges and V is the total no of nodes
	//sc-> O(V)
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
       vector<int> dis(V,1e9);
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
       //start from the source
       //distance is of going to the same element using same element as a source
       //This algo will work if The Graph doesn't contain any negative weight cycle.
       // if the graph contains negative weight then it will go into infinite loop and if we go any distance it will consume something , negative weight does not exists
       pq.push({0,S});
       dis[S]=0;
       while(!pq.empty()){
           //distance till now
           int dist=pq.top().first;
           int node=pq.top().second;
           pq.pop();
           for(auto it1:adj[node]){
               int currWeight=it1[1];
               int currNode=it1[0];
               //calculate new distance
               int currDist=dist+currWeight;
               //update the distance is found better
               if(dis[currNode]>currDist){
                   dis[currNode]=currDist;
                   pq.push({currDist,currNode});
               }
           }
       }
       return dis;
    }
};
*/


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends
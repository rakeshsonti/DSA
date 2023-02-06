//graph
/*
type of graph- directed and undirected
degree- no of incoming and outgoing edges in a graph
edge,node/vertex
u,v
undirected graph-degree-no of connected edges
Total no of degree of all the node=2*edges
Directed graph-
Indegree- incoming edges
Outdegree- outgoing edges
path:
(undirected cyclic graph (if cyclic exist) undirected acyclic graph(if cycle does not exist)
udg->a path you can not visit a node twise
dg->directed cyclic graph ,directed acyclic graph (dag)
weight
//way to store graph 1) adjacency matrix
int adj[n+1][m+1];
adj[u][v]=1;
adj[v][u]=1;
cons: can not create 10^5* 10^5 array
vector<int> adj[n+1]
(1-2),(1-5),(1-3),(3-5),(2-3),(2-4),(3-4)
[0]->
[1]->(2,5,3)
[2]->(1,3,4)
[3]->(1,5,2,4)
[4]->(2,3)
[5]->(1,3)
storing 2*edges element
Space compl (N+2*E) (when will use vector)
(n^2 when use matrix)
adj[u].push_back(v);
adj[v].push_back(u);
if edges given
vector<pair<a,b>> vc;
*/ 
#include<bits/stdc++.h>
using namespace std;
void representGraph();
int main(){
return 0;
}
void representGraph(){
	//tc-> O(n) sc-> O(n*n)
   cout << "Adjacency Array/Matrix way to store graph"<<endl;
    int n, m;
	cin>>n>>m;
	int adj[n+1][m+1];
	for(int i=0;i<n;i++){
			int u,v;
			cin>>u>>v;
			adj[u][v]=1;
			adj[v][u]=1;
	}
	
	//---------------------------------------------------------
	//Adjacancy List way to store matrix
	//sc-> O(2*E) E is edges (better)
	 int n,m;
	 //n-node, m-edges
	 cin>>n>>m;
	 vector<int> adj[n+1];
 for(int i=0;i<m;i++){
	 int u,v;
	 cin>>u>>v;
	 adj[u].push_back(v);
	 adj[v].push_back(u);
	 /*
	if directed graph
	//sc-> O(E) e-edges
	adj[u].push_back(v);
	//adj[v].push_back(u);
	 */
	/*
	 vector<pair<int,int>> adj[n+1];
	adj[u].push_back({v,wt});
	adj[v].push_back({u,wt});

		*/
 //----------------------------------------------------------------
 //waighted graph
	//tc-> O(n) sc-> O(n*n)
   cout << "Adjacency Array/Matrix way to store graph"<<endl;
    int n, m;
cin>>n>>m;
int adj[n+1][m+1];
for(int i=0;i<n;i++){
	int u,v,wt;
cin>>wt;
	cin>>u>>v;
	adj[u][v]=wt;
	adj[v][u]=wt;
}
 //----------------------------------------
//Adjacancy List way to store matrix waighted graph
	//sc-> O(2*E) E is edges (better)
	 int n,m;
	 //n-node, m-edges
	 cin>>n>>m;
	 vector<pair<int,int>> adj[n+1];
 for(int i=0;i<m;i++){
	 int u,v;
	 cin>>u>>v;//{edge,waight}
	 adj[u].push_back({1,2});
	 adj[v].push_back({3,4});		 
		 
		 
		 
	 }

}





class Solution
{
  //tc-> O(V+E) sc-> O(2V)
    private:
        bool topoSort(int V, vector<int> adj[])
        {
            vector<int> vis(V, 0);
            queue<int> q;
           	//count degree of the vertices (incoming adges)
            for (int i = 0; i < V; i++)
            {
                for (auto ind: adj[i]) vis[ind]++;
            }
           	//push the element whoose degree is 0
            for (int i = 0; i < V; i++)
                if (vis[i] == 0) q.push(i);
           	//instead of storing the topo sort we only detect if no of count element is equals to the vetices that means toposort possible and cycle does not exists
           	// if graph is a acyclic and directed then only topo sort is possible
            int count = 0;
            while (!q.empty())
            {
                int val = q.front();
                q.pop();
                count++;
                for (auto it: adj[val])
                {
                   	//decrease the edges and push once incoming adge is zero
                    vis[it]--;
                    if (vis[it] == 0) q.push(it);
                }
            }
            return (V == count);
        }
    public:
        bool canFinish(int numCourses, vector<vector < int>> &prerequisites)
        {
            vector<int> adj[numCourses];
            for (auto x: prerequisites)
            {
                adj[x[1]].push_back(x[0]);
            }
            return (topoSort(numCourses, adj));
        }
};
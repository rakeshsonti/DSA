class Solution
{
    private:
        vector<int> topoSort(int V, vector<int> adj[])
        {
            queue<int> q;
            vector<int> incm(V, -0);
           	//count incoming ages
            for (int i = 0; i < V; i++)
            {
                for (auto y: adj[i]) incm[y]++;
            }
           	//start from the element whoose degree is 0
            for (int i = 0; i < V; i++)
            {
                if (incm[i] == 0) q.push(i);
            }
            vector<int> ans;
            while (!q.empty())
            {
                auto node = q.front();
                q.pop();
                ans.push_back(node);
                for (auto z: adj[node])
                {
                    incm[z]--;
                    if (incm[z] == 0) q.push(z);
                }
            }
            if (V == ans.size()) return ans;
            return {};
        }
    public:
        vector<int> findOrder(int numCourses, vector<vector < int>> &prerequisites)
        {
            vector<int> adj[numCourses];
            for (auto x: prerequisites)
            {
                adj[x[1]].push_back(x[0]);
            }
            return topoSort(numCourses, adj);
        }
};
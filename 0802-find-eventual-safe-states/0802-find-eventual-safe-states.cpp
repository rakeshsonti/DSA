class Solution
{
    public:
        vector<int> eventualSafeNodes(vector<vector < int>> &adj)
        {
            int v=adj.size();
            vector<int> adjrev[v];
            queue<int> q;
            vector<int> indegree(v, 0);
           	//create adjcent node in reverse order and count the degree
           	//as togo logical algo work with incoming adges, so we reverse it to work according to the question to work with outgoing adges
            for (int i = 0; i < v; i++)
            {
                for (auto it: adj[i])
                {
                    adjrev[it].push_back(i);
                    indegree[i]++;
                }
            }
            vector<int> safenode;
            for (int i = 0; i < v; i++)
            {
               	//push all the node whoose indegree is 0 because 0 indegree node don't have outgoing node, it's safe 
                if (indegree[i] == 0) q.push(i);
            }
            while (!q.empty())
            {
                auto node = q.front();
                q.pop();
                safenode.push_back(node);
                for (auto it: adjrev[node])
                {
                    indegree[it]--;
                    if (indegree[it] == 0) q.push(it);
                }
            }
           	//sort as question needed as in sorted order
            sort(safenode.begin(), safenode.end());
            return safenode;
        }
};
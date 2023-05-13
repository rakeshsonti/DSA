class Solution
{
   	//tc-> O(V+2E) sc-> O(V+2E)
    public:
        bool isBipartite(vector<vector < int>> &graph)
        {
            int n = graph.size();
           	// if (n == 0) return false;
            vector<int> color(n, -1);
            for (int i = 0; i < n; i++)
            {
                if (color[i] == -1)
                    if (false == dfs(graph, color, 0, i)) return false;
            }
            return true;
        }

    private:
        bool dfs(vector<vector < int>> &graph, vector< int > &color, int clr, int node)
        {
           	//color the incoming node
            color[node] = clr;
            for (int val: graph[node])
            {
               	//check if node already colored or not
                if (color[val] == -1)
                {
                    if (dfs(graph, color, !clr, val) == false) return false;
                }
                else if (clr == color[val]) return false;
            }
            return true;
        }
};
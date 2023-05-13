class Solution
{
  //tc-> O(V+2E) sc-> O(V+2E)
    public:
        bool isBipartite(vector<vector < int>> &graph)
        {
            int n = graph.size();
            // if (n == 0) return false;
            vector<int> color(n , -1);
            for (int i = 0; i < n; i++)
            {
                if (color[i] == -1)
                    if (false == dfs(i,0,color,graph)) return false;
            }
            return true;
        }
   bool dfs(int i,int col,vector<int>&color,vector<vector<int>>&adj){
        color[i]=col;
        for(auto it:adj[i]){
            if(color[it]==-1){
                if(dfs(it,!col,color,adj)==false) return false;
            }
            else if(color[it]==col) return false;
        }
        return true;
    }
    private:
        bool dfs1(vector<vector < int>> &graph, vector< int > &color, int clr, int node)
        {
           	//color the incoming node
            color[node] = clr;
            for (int val: graph[node])
            {
               	//check if node already colored or not
                if (color[val] == -1)
                    if(dfs1(graph, color, !clr, val)==false)return false;
                else if (clr == color[val]) return false;
            }
            return true;
        }
};
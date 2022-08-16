#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
bool isCycle(int n, vector<int> adj[]);
bool dfs(int n, vector<int> adj[], vector<int> &vis, int parent);
int main()
{
    int m, n;
    // n-nodes, m-edges
    //  read input from file
    // tc O(n) sc O(n)
    fstream file;
    string word, filename;
    filename = "input.txt";
    file.open(filename.c_str());
    file >> word;
    m = stoi(word);
    file >> word;
    n = stoi(word);
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        file >> word;
        u = stoi(word);
        file >> word;
        v = stoi(word);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool result = isCycle(n, adj);
    cout << "Final DFS Result: " << result << endl;
    return 0;
}
bool isCycle(int n, vector<int> adj[])
{
    vector<int> vis(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            if (dfs(i, adj, vis, -1))
                return true;
        }
    }
    return false;
}
bool dfs(int n, vector<int> adj[], vector<int> &vis, int parent)
{
    vis[n] = 1;
    for (auto i : adj[n])
    {
        if (!vis[i])
        {
            if (dfs(i, adj, vis, n))
                return true;
        }
        else if (i != parent)
            return true;
    }
    return false;
}

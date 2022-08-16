#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &storeDfs);
int main()
{
    /*
    (dfs)- depth first search
     time complexity: O(n)+O(n) or O(n+E)
     space complexity:O(n+e)+O(n)+O(n)
    */
    // take input
    int m, n;
    // n-nodes, m-edges
    //  read input from file
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
    // take input
    vector<int> storeDfs;
    vector<int> vis(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i, vis, adj, storeDfs);
        }
    }
    for (auto ii : storeDfs)
        cout << ii << " ";
    cout << endl;

    return 0;
}
void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &storeDfs)
{
    storeDfs.push_back(node);
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, vis, adj, storeDfs);
        }
    }
}

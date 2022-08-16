#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
using namespace std;
bool bfs(int n, vector<int> adj[]);
bool checkCycle(int s, int n, vector<int> adj[], vector<int> &vis);
int main()
{
    // any of the graph contain cycle means it contgain cycle
    fstream file;
    file.open("input.txt");
    string word;
    file >> word;
    int n, m;
    m = stoi(word);
    file >> word;
    n = stoi(word);
    vector<int> adj[n + 1];
    while (file >> word)
    {
        int u = stoi(word);
        file >> word;
        int v = stoi(word);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool res = bfs(n, adj);
    cout << "final result: " << res << endl;
    return 0;
}
bool bfs(int n, vector<int> adj[])
{
    vector<int> vis(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
            if (checkCycle(i, n, adj, vis))
                return true;
    }
    return false;
}
bool checkCycle(int s, int n, vector<int> adj[], vector<int> &vis)
{
    queue<pair<int, int>> q;
    vis[s] = true;
    q.push({s, -1});
    while (!q.empty())
    {
        int node = q.front().first;
        int prev = q.front().second;
        q.pop();
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push({it, node});
            }
            else if (prev != it)
            {
                return true;
            }
        }
    }
    return false;
}

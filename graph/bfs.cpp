#include <iostream>
#include <queue>
#include <vector>
#include <fstream>

using namespace std;
vector<int> bfs(int v, vector<int> adj[]);

int main()
{
    /*bfs (breadth first search)
    traversing the adjacency node at first
     run a for loop for each node
    if node is unvisited-> call bfs(i);
      queue will be used for keep traverse visit track
      add curr element to resultant list
      and marks curr element as visited
      if queue is not empty
      pop top element from queue and add to resultant list
        mark all adjacent element as visited
        and add to queue

    time complexity->O(n)
    space complexity-> O(n)
      */
    cout << "Hello bfs \n";
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
    vector<int> res = bfs(n, adj);
    for (auto x : res)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
vector<int> bfs(int v, vector<int> adj[])
{
    vector<int> bfs;
    vector<int> vis(v + 1, 0);
    for (int i = 1; i <= v; i++)
    {
        if (!vis[i])
        {
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                bfs.push_back(node);
                for (auto it : adj[node])
                {
                    if (!vis[it])
                    {
                        q.push(it);
                        vis[it] = 1;
                    }
                }
            }
        }
    }
    return bfs;
}

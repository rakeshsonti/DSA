#include <iostream>
#include <fstream>
#include <queue>
#include <cstring>
using namespace std;
// the graph that can be colored using exact 2 color such that no two adjacent node have same color
// any graph which have a even length cycle is a bipartite graph and an graph which have odd length cycle not a bipartite graph
// without even length it can be possible graph is a bipartite
// tc-> O(n+e)
// sc-> O(n+e)+O(n)+O(n)
bool isBipartite(int n, vector<int> adj[], int color[]);
bool checkbipartite(vector<int> adj[], int n);
bool checkbipartite(vector<int> adj[], int n)
{
  int color[n + 1];
  memset(color, -1, sizeof color);
  for (int i = 1; i <= n; i++)
  {
    if (color[i] == -1)
    {
      if (!isBipartite(i, adj, color))
      {
        return false;
      }
    }
  }
  return true;
}
bool isBipartite(int n, vector<int> adj[], int color[])
{
  queue<int> q;
  q.push(n);
  color[n] = 1;
  while (!q.empty())
  {
    int node = q.front();
    q.pop();
    for (auto it : adj[node])
    {
      if (color[it] == -1)
      {
        color[it] = 1 - color[node];
        q.push(it);
      }
      else if (color[it] == color[node])
      {
        return false;
      }
    }
  }
  return true;
}
int main()
{
  cout << "Bipartite Graph.....bfs " << endl;
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
  for (int i = 1; i <= m; i++)
  {
    int u, v;
    file >> word;
    u = stoi(word);
    file >> word;
    v = stoi(word);
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  bool result = checkbipartite(adj, n);
  cout << "Final Result: " << result << endl;
  return 0;
}

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
//level order traversing technique
vector<int> bfs(int v, vector<int> adj[])
{
    //Answer data structure
    vector<int> bfs;
    //visited array
    vector<int> vis(v + 1, 0);
    //Visited all the element one by one and if element already visited then check next element
    //this element is considered as start element
    for (int i = 1; i <= v; i++)
    {
        if (!vis[i])
        {
            //FIFO(First In First Out)
            queue<int> q;
            //push start element into the queue and marks as visited
            q.push(i);
            vis[i] = 1;
            //run the loop till queue is not empty
            //remove the element from the queue and add to ans
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                bfs.push_back(node);
                //marks all the sub element which can be visited by considering the queue element as a start element 
               //and add all the sub-element to the queue 
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

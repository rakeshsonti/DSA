class Solution
{
    public:
        int findCheapestPrice(int n, vector<vector < int>> &flights, int src, int dst, int k)
        {
            if (src == dst) return 0;
            vector<pair<int, int>> adj[n];
            for (int i = 0; i < flights.size(); i++)
            {
                adj[flights[i][0]].push_back({ flights[i][1],
                    flights[i][2] });
            }
            queue<pair<int, pair<int, int>>> pq;

            vector<int> dist(n, 1e9);
            pq.push({ 0,
                {
                    src,
                    0
                } });
            dist[src] = 0;
            while (!pq.empty())
            {
                auto node = pq.front();
                pq.pop();
                int stop = node.first;
                int val = node.second.first;
                int d = node.second.second;
                for (auto it: adj[val])
                {
                    if (stop > k) break;
                    int newWeight = d + it.second;
                    int newNode = it.first;

                    if (dist[newNode] > newWeight && stop <= k)
                    {
                        pq.push({ stop + 1,
                            {
                                newNode,
                                newWeight
                            } });
                        dist[newNode] = newWeight;
                    }
                }
            }
            if (dist[dst] == 1e9) return -1;

            return dist[dst];
        }
};
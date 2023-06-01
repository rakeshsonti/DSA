class Solution {
	//tc-> O(|V| * |E| * k) sc-> O(|V|)
public:
int findCheapestPrice(int n, vector<vector < int>> &flights, int src, int dst, int k) {
if (src == dst) return 0;
 // Create an adjacency list representation of the graph.
        vector<pair<int, int>> adj[n];
        for (int i = 0; i < flights.size(); i++) {
            adj[flights[i][0]].push_back({ flights[i][1],
                flights[i][2] });
        }

        // Create a priority queue to store the distances to each vertex.
        queue<pair<int, pair<int, int>>> pq;

        // Initialize the distances to all vertices to infinity.
        vector<int> dist(n, 1e9);

        // Mark the source vertex as visited.
        dist[src] = 0;

        // Add the source vertex to the priority queue.
        pq.push({ 0,
            {
                src,
                0
            } });

        // While the priority queue is not empty, do the following:
        while (!pq.empty()) {
            // Get the vertex with the minimum distance from the priority queue.
            auto node = pq.front();
            pq.pop();

            // Get the current stop, the current vertex, and the current distance.
            int stop = node.first;
            int val = node.second.first;
            int d = node.second.second;

            // For each neighbor of the current vertex, do the following:
            for (auto it: adj[val]) {
                // If the current stop is greater than `k`, then break.
                if (stop > k) break;

                // Calculate the new distance to the neighbor.
                int newWeight = d + it.second;
                int newNode = it.first;

                // If the new distance is less than the current distance, then do the following:
                if (dist[newNode] > newWeight && stop <= k) {
                    // Update the distance to the neighbor.
                    dist[newNode] = newWeight;

                    // Add the neighbor to the priority queue.
                    pq.push({ stop + 1,
                        {
                            newNode,
                            newWeight
                        } });
                }
            }
        }

        // If the destination vertex is not reachable, then return -1.
        if (dist[dst] == 1e9) return -1;

        // Return the distance to the destination vertex.
        return dist[dst];
    }
};
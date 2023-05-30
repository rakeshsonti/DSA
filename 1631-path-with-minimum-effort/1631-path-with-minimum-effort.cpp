class Solution {
  // Time complexity: O(E * log(V))
  // Space complexity: O(V * M)
  
  public:
    int minimumEffortPath(vector<vector<int>> &heights) {
      // Get the dimensions of the grid.
      int n = heights.size(), m = heights[0].size();

        // The four possible directions to move in.
        int drow[] = {-1, 0, 0, 1};
        int dcol[] = {0, -1, 1, 0};
      // Initialize the distance array.
      vector<vector<int>> dist(n, vector<int>(m, INT_MAX));

      // Initialize the source and destination nodes.
      pair<int, int> source = {0, 0}, destination = {n - 1, m - 1};

      // Initialize the priority queue.
      priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;

      // Add the source node to the priority queue.
      q.push({0, source});

      // Mark the source node as visited.
      dist[source.first][source.second] = 0;

      // While the priority queue is not empty, do the following:
      while (!q.empty()) {
        // Get the top node from the priority queue.
        auto node = q.top();
        q.pop();

        // Get the distance to the node.
        int dis = node.first;

        // Get the row and column of the node.
        int r = node.second.first;
        int c = node.second.second;

        // If the node is the destination, return the distance.
        if (r == destination.first && c == destination.second) {
          return dis;
        }

        // For each neighbor of the node, do the following:
        for (int i = 0; i < 4; i++) {
          // Get the row and column of the neighbor.
          int nrow = r + drow[i];
          int ncol = c + dcol[i];

          // If the neighbor is within the bounds of the grid, do the following:
          if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m) {
            // Calculate the new distance to the neighbor.
            int newdiff = max(abs(heights[nrow][ncol] - heights[r][c]), dis);

            // If the new distance is less than the current distance, do the following:
            if (newdiff < dist[nrow][ncol]) {
              // Update the distance to the neighbor.
              dist[nrow][ncol] = newdiff;

              // Add the neighbor to the priority queue.
              q.push({newdiff, {nrow, ncol}});
            }
          }
        }
      }

      // Return -1 if the destination node is not reachable.
      return -1;
    }


};

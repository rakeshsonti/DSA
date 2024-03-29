class Solution
{
    public:
        int shortestPathBinaryMatrix(vector<vector < int>> &grid)
        {
          //if size if 1 and start point is not valid
            if (grid.size() == 1 && grid[0][0] == 1) return -1;
            if (grid[0].size() == 1) return 1;
            if (grid[0][0] == 1) return -1;
          
            int n = grid.size();
            int m = grid[0].size();
            pair<int, int> source = { 0,
                0
            };
            pair<int, int> destination = { n - 1,
                m - 1
            };

            // if (source.first == destination.first && source.second == destination.second)
            //     return 0;

            queue<pair<int, pair<int, int>>> q;

            vector<vector < int>> dist(n, vector<int> (m, 1e9));	// Distance matrix initialized with a large value
            dist[source.first][source.second] = 0;	// Distance of source is set to 0
            q.push({ 0,
                {
                    source.first,
                    source.second
                } });	// Push the source into the queue with distance 0

            int drow[] = { -1,
                0,
                0,
                1,
                -1,
                -1,
                1,
                1
            };	// Offsets for exploring neighboring cells
            int dcol[] = { 0,
                -1,
                1,
                0,
                -1,
                1,
                1,
                -1
            };

            while (!q.empty())
            {
                auto node = q.front();
                q.pop();
                int dis = node.first;	// Current distance from the source
                int r = node.second.first;	// Current row coordinate
                int c = node.second.second;	// Current column coordinate

                for (int i = 0; i < 8; i++)
                {
                    int nrow = r + drow[i];	// New row coordinate for the neighboring cell
                    int ncol = c + dcol[i];	// New column coordinate for the neighboring cell

                   	// Check if the neighboring cell is within the grid bounds, accessible, and has a shorter distance
                    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 0 && (dis + 1 < dist[nrow][ncol]))
                    {
                        dist[nrow][ncol] = 1 + dis;	// Update the distance to the neighboring cell
                        if (nrow == destination.first && ncol == destination.second)
                            return dis + 2;	// If the destination is reached, return the distance
                        q.push({ 1 + dis,
                            {
                                nrow,
                                ncol
                            } });	// Push the neighboring cell into the queue
                    }
                }
            }

            return -1;	// If the destination is not reachable, return -1

        }
};
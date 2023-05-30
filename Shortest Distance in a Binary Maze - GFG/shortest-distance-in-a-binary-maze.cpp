//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    //tc-> O(N * M) sc-> O(N * M)
public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
                         //if source and destination is same then return 
        if (source.first == destination.first && source.second == destination.second)
            return 0;

        queue<pair<int, pair<int, int>>> q;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dist(n, vector<int>(m, 1e9));  // Distance matrix initialized with a large value
        dist[source.first][source.second] = 0;  // Distance of source is set to 0
        q.push({0, {source.first, source.second}});  // Push the source into the queue with distance 0

        int drow[] = {-1, 0, 0, 1};  // Offsets for exploring neighboring cells
        int dcol[] = {0, -1, 1, 0};

        while (!q.empty()) {
            auto node = q.front();
            q.pop();
            int dis = node.first;  // Current distance from the source
            int r = node.second.first;  // Current row coordinate
            int c = node.second.second;  // Current column coordinate

            for (int i = 0; i < 4; i++) {
                int nrow = r + drow[i];  // New row coordinate for the neighboring cell
                int ncol = c + dcol[i];  // New column coordinate for the neighboring cell

                // Check if the neighboring cell is within the grid bounds, accessible, and has a shorter distance
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1 && (dis + 1 < dist[nrow][ncol])) {
                    dist[nrow][ncol] = 1 + dis;  // Update the distance to the neighboring cell
                    if (nrow == destination.first && ncol == destination.second)
                        return dis + 1;  // If the destination is reached, return the distance
                    q.push({1 + dis, {nrow, ncol}});  // Push the neighboring cell into the queue
                }
            }
        }

        return -1;  // If the destination is not reachable, return -1
    }
    /*
    Time Complexity: The time complexity of this code is O(N * M), where N is the number of rows in the grid and M is the number of columns. This is because the code iterates over each cell in the grid at most once.

Space Complexity: The space complexity is O(N * M) as well. The space is used to store the dist matrix, which has dimensions N * M, and the queue q, which can store at most N * M elements in the worst case.

Overall, your solution has a time and space complexity of O(N * M).






    
    */
};



//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends
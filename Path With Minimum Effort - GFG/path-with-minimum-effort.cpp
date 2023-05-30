//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int MinimumEffort(vector<vector<int>>& heights) {
                  int n = heights.size(), m = heights[0].size();
            vector<vector < int>> dist(n, vector<int> (m, 1e9));
            pair<int, int> source = { 0,
                0
            }, destination = { n - 1,
                m - 1
            };
            priority_queue<pair<int, pair<int, int>>, vector< pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;
            q.push({ 0,
                source });
            dist[source.first][source.second] = 0;
            int drow[] = { -1,
                0,
                0,
                1
            };
            int dcol[] = { 0,
                -1,
                1,
                0
            };
            while (!q.empty())
            {
                auto node = q.top();
                q.pop();
                int dis = node.first;
                int r = node.second.first;
                int c = node.second.second;
                if (r == destination.first && c == destination.second) return dis;
                for (int i = 0; i < 4; i++)
                {
                    int nrow = r + drow[i];
                    int ncol = c + dcol[i];
                    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m)
                    {
                        int newdiff = max(abs(heights[nrow][ncol] - heights[r][c]), dis);
                        if (newdiff < dist[nrow][ncol])
                        {
                            dist[nrow][ncol] = newdiff;
                            q.push({ newdiff,
                                {
                                    nrow,
                                    ncol
                                } });
                        }
                    }
                }
            }
            return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n,m; cin>>n>>m;
        vector<vector<int>> heights;
       
        for(int i=0; i<n; ++i){
            vector<int> temp;
            for(int j=0; j<m; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            heights.push_back(temp);
        }
       
        Solution obj;
        cout<<obj.MinimumEffort(heights)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
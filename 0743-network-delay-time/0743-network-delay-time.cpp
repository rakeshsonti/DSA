class Solution
{
   	//tc-> O(E+log(V)) E is the total edges and V is the total no of nodes
   	//sc-> O(V)
    public:
        int networkDelayTime(vector<vector < int>> &times, int n, int k)
        {
           	//adjacency node 
            vector<pair<int, int>> adj[n + 1];
            for (auto it: times)
            {
                adj[it[0]].push_back({ it[1],
                    it[2] });
            }
            vector<int> dis(n + 1, 1e9);
            dis[k] = 0;
            dis[0] = 0;
           	//min heap
            set<pair<int, int>> st;
            st.insert({ 0,
                k });
            while (!st.empty())
            {
                auto node = *st.begin();
                st.erase(node);
                int d = node.first;
                int nd = node.second;
                for (auto it1: adj[nd])
                {
                    int currDis = d + it1.second;
                    int currNode = it1.first;
                    if (currDis < dis[currNode])
                    {
                        dis[currNode] = currDis;
                        st.insert({ currDis,
                            currNode });
                    }
                }
            }
            int ans = 0;
            for (int i = 0; i < dis.size(); i++)
            {
                if (dis[i] == 1e9) return -1;
                if (ans < dis[i]) ans = dis[i];
            }
            return ans;
        }
};
/*
class Solution
{
    public:
        int networkDelayTime(vector<vector < int>> &times, int n, int k)
        {
           	//adjacency node 
            vector<pair<int, int>> adj[n + 1];
            for (auto it: times)
            {
                adj[it[0]].push_back({ it[1],
                    it[2] });
            }
            vector<int> dis(n + 1, 1e9);
            dis[k] = 0;
            dis[0] = 0;
           	//min heap
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
            pq.push({ 0,
                k });
            while (!pq.empty())
            {
                auto node = pq.top();
                pq.pop();
                int d = node.first;
                int nd = node.second;
                for (auto it1: adj[nd])
                {
                    int currDis = d + it1.second;
                    int currNode = it1.first;
                    if (currDis < dis[currNode])
                    {
                        dis[currNode] = currDis;
                        pq.push({ currDis,
                            currNode });
                    }
                }
            }
            int ans = 0;
            for (int i = 0; i < dis.size(); i++)
            {
                if (dis[i] == 1e9) return -1;
                if (ans < dis[i]) ans = dis[i];
            }
            return ans;
        }
};
*/
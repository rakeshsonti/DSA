class Solution
{
    public:
        bool stoneGame(vector<int> &piles)
        {
            int vis[501][501];
            memset(vis,-1,sizeof(vis));
            int alex_sum = solve(piles, 0, piles.size() - 1,vis);
            int total = 0;
            for (int val: piles) total += val;
            int bob_sum = total - alex_sum;
            return alex_sum > bob_sum;
        }
    int solve(vector<int> &piles, int start, int end,int vis[501][501])
    {
      if(start>end)return 0;
      if(vis[start][end]!=-1)return vis[start][end];
        if (start == end)
        {
            return vis[start][end]=max(piles[start],piles[end]);
        }

        int left = piles[start] + max(solve(piles, start + 2, end,vis), solve(piles, start + 1, end - 1,vis));
        int right = piles[end] + max(solve(piles, start, end - 2,vis), solve(piles, start + 1, end - 1,vis));
        return vis[start][end]=max(left, right);
    }
};
class Solution
{
  //tc-> O(4*n) sc-> O(N*N)
    public:
        bool stoneGame(vector<int> &piles)
        {
          return true;
        }
};
/*
class Solution
{
  //tc-> O(4*n) sc-> O(N*N)
    public:
        bool stoneGame(vector<int> &piles)
        {
            int vis[501][501];
            memset(vis, -1, sizeof(vis));
           	//calculate only for the alex
            int alex_sum = solve(piles, 0, piles.size() - 1, vis);
            int total = 0;
            for (int val: piles) total += val;
            int bob_sum = total - alex_sum;
            return alex_sum > bob_sum;
        }
    int solve(vector<int> &piles, int start, int end, int vis[501][501])
    {
       	//base case
        if (start > end) return 0;
       	//already visited the return from memoization
        if (vis[start][end] != -1) return vis[start][end];
       	//if last two element left hen we don't have more choices left
        if (start == end)
        {
            return vis[start][end] = max(piles[start], piles[end]);
        }
        //we have 4 choice 
      //either choose left ot right
      //if we choose left then also two choices either both choose start element or one start and one end
      //either both choose end or one start or one end
        int left = piles[start] + max(solve(piles, start + 2, end, vis), solve(piles, start + 1, end - 1, vis));
        int right = piles[end] + max(solve(piles, start, end - 2, vis), solve(piles, start + 1, end - 1, vis));
      //return max of all because we want always alex win
        return vis[start][end] = max(left, right);
    }
};*/
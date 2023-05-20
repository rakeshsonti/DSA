class Solution
{
   	//tc-> O(n) sc->O(n)
    public:
        long long mostPoints(vector<vector < int>> &questions)
        {
            int n = questions.size(), jumpInd = 0;
            long long pick = 0, notPick = 0;
            vector < long long > vis(n, 0);
            for (int ind = n - 1; ind >= 0; ind--)
            {
               	//in case of include calculate jump index
                jumpInd = ind + questions[ind][1] + 1;
               	//include current element
                pick = questions[ind][0];
                if (jumpInd < n)
                {
                    pick += vis[jumpInd];
                }
                notPick = 0;
               	//include just next element
                if (ind + 1 < n)
                {
                    notPick += vis[ind + 1];
                }
                vis[ind] = max(pick, notPick);
            }
            return vis[0];
        }
};
/*
class Solution
{
 	//tc-> O(n) sc->O(n)+O(n)rec
    public:
        long long mostPoints(vector<vector < int>> &questions)
        {
            int n = questions.size();
            vector<int> dp(n, -1);
            return solve(questions, 0, n, dp);
        }
    long long solve(vector<vector < int>> que, int ind, int n, vector<int> &dp)
    {
        if (ind >= n) return 0;
        if (dp[ind] != -1) return dp[ind];
        long long take = que[ind][0] + solve(que, ind + que[ind][1] + 1, n, dp);
        long long nottake = solve(que, ind + 1, n, dp);
        return dp[ind] = max(take, nottake);
    }
};
*/
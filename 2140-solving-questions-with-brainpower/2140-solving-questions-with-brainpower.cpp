class Solution
{
   	//tc-> O(n) sc->O(n)
    public:
        long long mostPoints(vector<vector < int>> &questions)
        {
            int n = questions.size(), jumpInd = 0;
            long long pick = 0, notPick = 0;
            vector < long long > dp(n, 0);
            for (int ind = n - 1; ind >= 0; ind--)
            {
                jumpInd = ind + questions[ind][1] + 1;
                pick = questions[ind][0];
                if (jumpInd < n)
                {
                    pick += dp[jumpInd];
                }
                notPick = 0;
                if (ind + 1 < n)
                {
                    notPick += dp[ind + 1];
                }
                dp[ind] = max(pick, notPick);
            }
            return dp[0];
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
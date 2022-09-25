class Solution
{
    //tc-> O(n*(n-1))-> O(n^2) 
    //sc-> O(1)
    public:
        vector<vector < int>> generate(int numRows)
        {
            vector<vector < int>> ans;
            for (int i = 0; i <= numRows; i++)
            {
                getPascleTringle(i, ans);
            }
            ans.erase(ans.begin());
            return ans;
        }
    void getPascleTringle(int n, vector<vector < int>> &ans)
    {
        vector<int> vc;
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || i == n - 1)
            {
                vc.push_back(1);
            }
            else
            {
                vc.push_back(ans[n - 1][i - 1] + ans[n - 1][i]);
            }
        }
        ans.push_back(vc);
    }
};

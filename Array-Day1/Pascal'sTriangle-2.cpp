class Solution
{
   	//tc-> O(n)
   	//sc->O(1)
    public:
        vector<int> getRow(int rowIndex)
        {
            vector<int> ans = { 1 };
            long prev = 1;
            for (int i = 1; i <= rowIndex; i++)
            {
                long curr = (prev *(rowIndex - i + 1)) / i;
                ans.push_back(curr);
                prev = curr;
            }
            return ans;
        }
};
----------------------------------------------------------------------------------------------
class Solution
{
   	//tc-> O(n^2)
   	//sc->O(n)
    public:
        vector<int> getRow(int rowIndex)
        {
            vector<int> ans;
            rowIndex++;
            for (int i = 0; i <= rowIndex; i++)
            {
                getPascleTringle(i, ans);
            }
            return ans;
        }
    void getPascleTringle(int n, vector<int> &ans)
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
                vc.push_back(ans[i - 1] + ans[i]);
            }
        }
        ans = vc;
    }
};

class Solution
{
   	//tc-> O(n) sc-> O(n)
    public:
        int maxRotateFunction(vector<int> &nums)
        {
            int n = nums.size();
            vector<int> dp(n, 0);
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += nums[i];
                dp[0] += (i *nums[i]);
            }
            int ans = dp[0];

            int ind = n - 1;
            for (int i = 1; i < n; i++)
            {
                dp[i] = sum + dp[i - 1] - (n *nums[ind]);
                ind--;
                ans = max(dp[i], ans);
            }
            return ans;
        }
};
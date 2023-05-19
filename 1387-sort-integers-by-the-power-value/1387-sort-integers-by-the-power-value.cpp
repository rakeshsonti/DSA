class Solution
{
    public:

        int getKth(int lo, int hi, int k)
        {
            vector<pair<int, int>> ans;
            for (int i = lo; i <= hi; i++)
            {
                int level = power(i);
                ans.push_back({ level,
                    i});
            }
            sort(ans.begin(), ans.end());
            return ans[k - 1].second;
        }
    unordered_map<int,int> mp;
    int power( int num)
    {
        if (mp[num] ||num == 1)
        {
            return mp[num];
        }
        if (num % 2 == 0)
        {
            return mp[num]=1+power( num / 2);
        }
        else
        {
            return mp[num]=1+power(num *3 + 1);
        }
    }
};
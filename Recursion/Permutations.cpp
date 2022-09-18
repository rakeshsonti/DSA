class Solution
{
    //tc-> O(n!* n)
    //sc-> O(n)
    public:
        vector<vector < int>> permute(vector<int> &nums)
        {
            vector<vector < int>> ans;
            func(nums, ans, 0);
            return ans;
        }
    void func(vector<int> &nums, vector<vector< int>> &ans, int index)
    {
        if (index == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[i], nums[index]);
            func(nums, ans, index + 1);
            swap(nums[i], nums[index]);
        }
    }
};
/*
class Solution
{
   	//tc-> O(n!*n)
   	//sc-> O(n)
    public:
        vector<vector < int>> permute(vector<int> &nums)
        {
            int mp[nums.size()];
            for (int i = 0; i < nums.size(); i++) mp[i] = 0;
            vector<vector < int>> ans;
            vector<int> sb;
            func(nums, ans, sb, mp);
            return ans;
        }
    void func(vector<int> &nums, vector<vector < int>> &ans, vector<int> &sb, int mp[])
    {
        if (sb.size() == nums.size())
        {
            ans.push_back(sb);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (!mp[i])
            {
                sb.push_back(nums[i]);
                mp[i] = 1;
                func(nums, ans, sb, mp);
                sb.pop_back();
                mp[i] = 0;
            }
        }
    }
};
*/

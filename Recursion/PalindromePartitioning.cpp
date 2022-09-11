class Solution
{
    //tc->O((2^n)*(k)*(n/2)) 
    //sc->O(k*x)-> k is the length of the substring and x is the number of palindrom substring
    public:
        vector<vector < string>> partition(string s)
        {
            vector<vector < string>> res;
            vector<string> sb;
            func(s, 0, res, sb);
            return res;
        }
    void func(string s, int index, vector<vector < string>> &res, vector< string > &sb)
    {
        if (index == s.length())
        {
            res.push_back(sb);
            return;
        }
        for (int i = index; i < s.length(); ++i)
        {
            if (isPalindrom(s, index, i))
            {
                sb.push_back(s.substr(index, i - index + 1));
                func(s, i + 1, res, sb);
                sb.pop_back();
            }
        }
    }

    bool isPalindrom(string s, int left, int right)
    {
        while (left < right)
        {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};

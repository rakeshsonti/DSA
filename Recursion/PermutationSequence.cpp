class Solution
{
    //tc->O(n) generating a number+O(n)-> remove sarch space in each step=O(n^2)
    //sc-> O(n) storing the number in each step
    public:
        string getPermutation(int n, int k)
        {
            vector<int> number;
            int fact = 1;
            for (int i = 1; i < n; i++)
            {
                fact = fact * i;
                number.push_back(i);
            }
            number.push_back(n);
            string ans = "";
            k = k - 1;
            while (true)
            {
                ans += to_string(number[k / fact]);
                number.erase(number.begin() + (k / fact));
                if (number.size() == 0) break;
                k = k % fact;
                fact = fact / number.size();
            }

            return ans;
        }
};

//=============================================================================================
class Solution
{
   	//tc->O(n)-to generate a number+O(n! *n) recursion *push deep copy into data structure +O(n!log(n!)) sorting the array
   	//sc-> O(n) we are uisng a recursion
    public:
        string getPermutation(int n, int k)
        {
            vector<string> sv;
            string num = "";
            for (int i = 1; i <= n; ++i)
            {
                num.push_back(i+'0');
            }
           	// cout<<num<<endl;
            permute(num, 0, sv);
            sort(sv.begin(), sv.end());
           	// for(auto x: sv)cout<<x<<" ";
           	// cout<<endl;
            auto itr = sv.begin() + k - 1;
            return * itr;
        }

    void permute(string &s, int index, vector<string> &sb)
    {
        if (index == s.length())
        {
            sb.push_back(s);
            return;
        }
        for (int i = index; i < s.length(); i++)
        {
            swap(s[index], s[i]);
            permute(s, index + 1, sb);
            swap(s[index], s[i]);
        }
    }
};

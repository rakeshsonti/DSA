class Solution
{
   	//time limit exceed O(n) sc-> O(1)
    public:
        int maxProfit(vector<int> &prices)
        {
            int min = prices[0], diff = 0;
            for (int i = 1; i < prices.size(); i++)
            {
                if ((prices[i] - min) > diff) diff = prices[i] - min;
                if (prices[i] < min) min = prices[i];
            }
            return diff;
        }
};

//=================================================================
class Solution
{
//time limit exceed O(n^2) sc-> O(1)
public:
int maxProfit(vector<int> &prices)
{
int sum = 0;
for (int i = 0; i < prices.size() - 1; i++)
{
for (int j = i + 1; j < prices.size(); j++)
{
if ((prices[j] - prices[i]) > sum)
{
sum = prices[j] - prices[i];
}
}
}
return sum;
}
};

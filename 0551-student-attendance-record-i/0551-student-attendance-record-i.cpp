class Solution
{
    public:
        bool checkRecord(string s)
        {
            int feq[127];
            memset(feq, 0, sizeof(feq));
            bool isConsecutive = true;
            int count = 0;
            for (char ch: s)
            {
                if (ch == 'L') count++;
                else
                {
                    if (count >= 3) isConsecutive = false;
                    count = 0;
                }
                feq[ch]++;
            }
            if (count >= 3) isConsecutive = false;
            return feq['A'] < 2 && (feq['L'] <= 2 || isConsecutive);
        }
};
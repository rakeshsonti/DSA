class Solution
{
   	//tc-> O(n)+O(K) where n is the length of the string and k is the sum of all digits
   	//sc->O(n) beacause of recursion
    string decodeString(string &s, int &index)
    {
        string result;
        while (index < s.length() && s[index] != ']')
        {
            if (isdigit(s[index]))
            {
               	//way to create number beacause we fatching value one by one
                int k = 0;
                while (index < s.length() && isdigit(s[index]))
                {
                    k = k *10 + (s[index++] - '0');
                }
               	//index increased twice because we know[ will come after digit so skip[ parenthesis
                index++;
                string rr = decodeString(s, index);
                while (k-- > 0)
                {
                    result += rr;
                }
                index++;
            }
            else
            {
                result += s[index++];
            }
        }
        return result;
    }
    public:
        string decodeString(string s)
        {
            int i = 0;
            return decodeString(s, i);
        }
};

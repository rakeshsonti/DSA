class Solution
{
    unordered_map<string, int> map;
    vector<vector < string>> ans;
    string b;
    private:
        void dfs(string word, vector<string> &seq)
        {
            if (word == b)
            {
                reverse(seq.begin(), seq.end());
                ans.push_back(seq);
                reverse(seq.begin(), seq.end());
                return;
            }
            int steps = map[word];
            int sz = word.size();
            for (int i = 0; i < sz; i++)
            {
                char original = word[i];
                for (char ch = 'a'; ch <= 'z'; ch++)
                {
                    word[i] = ch;
                    if (map.find(word) != map.end() &&
                        map[word] + 1 == steps)
                    {
                        seq.push_back(word);
                        dfs(word, seq);
                        seq.pop_back();
                    }
                }
                word[i] = original;
            }
        }
    public:
        vector<vector < string>> findLadders(string beginWord, string endWord, vector<string> &wordList)
        {
            queue<string> q;
            b = beginWord;
            unordered_set<string> st(wordList.begin(), wordList.end());
            q.push({ beginWord });
            map[beginWord] = 1;
            st.erase(beginWord);
            int sz = beginWord.size();
            while (!q.empty())
            {
                string word = q.front();
                int steps = map[word];
                q.pop();
                if (word == endWord) break;
                for (int i = 0; i < sz; i++)
                {
                    char original = word[i];
                    for (char ch = 'a'; ch <= 'z'; ch++)
                    {
                        word[i] = ch;
                        if (st.count(word) > 0)
                        {
                            q.push(word);
                            st.erase(word);
                            map[word] = steps + 1;
                        }
                    }
                    word[i] = original;
                }
            }
            if (map.find(endWord) != map.end())
            {
                vector<string> seq;
                seq.push_back(endWord);
                dfs(endWord, seq);
            }
            return ans;
        }
};
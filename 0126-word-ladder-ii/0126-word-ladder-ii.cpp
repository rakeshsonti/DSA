class Solution
{ 
  //tc-> O(nx26xm) where n is the length of the wordlist and m is the length of the word sc-> O(nxm)
    unordered_map<string, int> map;
    vector<vector < string>> ans;
   	//to store the begin word
    string b;
    private:
        void dfs(string word, vector<string> &seq)
        {
           	//if the beginWord matched then reverse it and store to the answer and reverse back to the original sequence to process other sequence
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
                  //check if new word have not the same level and should be neighbour level
                    if (map.find(word) != map.end() &&
                        map[word] + 1 == steps)
                    {
                       	//add to sequence and change back to the original one to process with other sequence
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
           	//start from the first word
            q.push({ beginWord });
           	//assign as step first
            map[beginWord] = 1;
           	//once stored remove the word from the original list
            st.erase(beginWord);
            int sz = beginWord.size();
            while (!q.empty())
            {
                string word = q.front();
                int steps = map[word];
                q.pop();
               	//if match with endword then return no need to continue futher
                if (word == endWord) break;
                for (int i = 0; i < sz; i++)
                {
                   	//take backup original word to restore later
                    char original = word[i];
                    for (char ch = 'a'; ch <= 'z'; ch++)
                    {
                        word[i] = ch;
                       	//if word matched then store that word to map and remove from the original list
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
           	//if end word find then start from the end and track till the beginWord
            if (map.find(endWord) != map.end())
            {
                vector<string> seq;
                seq.push_back(endWord);
                dfs(endWord, seq);
            }
            return ans;
        }
};
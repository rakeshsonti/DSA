class Solution
{
    public:
        int ladderLength(string beginWord, string endWord, vector<string> &wordList)
        {
            unordered_set<string> words(wordList.begin(), wordList.end());
            if (words.find(endWord) == words.end()) return 0;
            queue<string> q;
            q.push(beginWord);
            set<string> vis;
            int changes = 1;
            while (!q.empty())
            {
                int size = q.size();
                for (int i = 0; i < size; i++)
                {
                    string word = q.front();
                  // cout<<word<<endl;
                    q.pop();
                    
                    if (word == endWord) return changes;
                    for (int j = 0; j < word.size(); j++)
                    {
                      char chh=word[j];
                        for (char k = 'a'; k <= 'z'; k++)
                        {
                            word[j] = k;
                            // cout<<"word: "+word<<endl;
                            if (words.find(word) != words.end() && vis.find(word) == vis.end())
                            {
                                q.push(word);
                                vis.insert({ word });
                            }
                        }
                      word[j]=chh;
                    }
                }
                changes++;
            }
            return 0;
        }
};
class Solution
{
   	//tc-> O(n^2*m*26) where n is the size of the wordList and m is the length of the word
   	//sc-> O(n*m) where n is the size of the wordList and m is the length of the word
    public:
        int ladderLength(string beginWord, string endWord, vector<string> &wordList)
        {
            unordered_set<string> words(wordList.begin(), wordList.end());
            if (words.find(endWord) == words.end()) return 0;
            queue<string> q;
            q.push(beginWord);
            unordered_set<string> vis;
          vis.insert({beginWord});
            int changes = 1;
            while (!q.empty())
            {
                int size = q.size();
                for (int i = 0; i < size; i++)
                {
                    string word = q.front();
                    q.pop();

                    if (word == endWord) return changes;
                    for (int j = 0; j < word.size(); j++)
                    {
                        char chh = word[j];
                        for (char k = 'a'; k <= 'z'; k++)
                        {
                            word[j] = k;
                            if (words.find(word) != words.end() && vis.find(word) == vis.end())
                            {
                                q.push(word);
                                vis.insert({ word });
                            }
                        }
                        word[j] = chh;
                    }
                }
                changes++;
            }
            return 0;
        }
};
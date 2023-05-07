//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<vector<string>> findSequences(string beginWord, string endWord, vector<string>& wordList) {
           queue<vector<string>> q;
        q.push({beginWord});
      unordered_set<string> list(wordList.begin(),wordList.end());
      vector<string> usedList;
      usedList.push_back(beginWord);
      vector<vector<string>> ans;
      int level=0;
      while(!q.empty()){
        vector<string> vc=q.front();
        q.pop();
        //erase all words that has been used
        //in previous level from the original list
        if(vc.size()>level){
          level++;
          for(auto it:usedList){
            list.erase(it);
          }
        }
        string word=vc.back();
        if(word==endWord){
          //the first sequence where we reached end
          if(ans.size()==0){
            ans.push_back(vc);
          }else if(ans[0].size()==vc.size()){
            ans.push_back(vc);
          }
        }
        for(int i=0;i<word.size();i++){
          char originalWord=word[i];
          for(char ch='a';ch<='z';ch++){
            word[i]=ch;
            if(list.find(word)!=list.end()){
              vc.push_back(word);
              q.push(vc);
              //mark on the level as visited
              usedList.push_back(word);
              vc.pop_back();
            }
          }
          word[i]=originalWord;
        }
      }
return ans;
    }
};

//{ Driver Code Starts.

bool comp(vector<string> a, vector<string> b)
{
    string x = "", y = "";
    for(string i: a)
        x += i;
    for(string i: b)
        y += i;
    
    return x<y;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		vector<vector<string>> ans = obj.findSequences(startWord, targetWord, wordList);
		if(ans.size()==0)
		    cout<<-1<<endl;
		else
		{
		    sort(ans.begin(), ans.end(), comp);
            for(int i=0; i<ans.size(); i++)
            {
                for(int j=0; j<ans[i].size(); j++)
                {
                    cout<<ans[i][j]<<" ";
                }
                cout<<endl;
            }
		}
	}
	return 0;
}
// } Driver Code Ends
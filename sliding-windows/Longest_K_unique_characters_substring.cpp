
#include <bits/stdc++.h>
using namespace std;

class Solution{
    // tc-> O(n) sc-> O(constant)
  public:
    int longestKSubstr(string s, int k) {
        int ans= solve(s,k);
        return ans==0?-1:ans;
    }
    int solve(string s,int k){
        if(k<0)return 0;
        vector<int> mp(26,0);
        int left=0,right=0,n=s.size();
        int ans=0,distCount=1;//count of distinct element
        mp[s[0]-'a']=1;
        while(right<n){
            //check if distinct element cross the border
            if(distCount<k){
                right++;
                //if value first time came 
                if(mp[s[right]-'a']==0)distCount++;
                //increase the frequency into the frequency array
                mp[s[right]-'a']++;
            }else if(distCount==k){
                //if distinct element is equals to the k
                //calculate and update the result
                ans=max(ans,right-left+1);
                right++;
                if(mp[s[right]-'a']==0)distCount++;
                mp[s[right]-'a']++;
            }else{
                //distinct element over the limit k
                if(mp[s[left]-'a']==1)distCount--;
                mp[s[left]-'a']--;
                left++;
            }
        }
        return ans;
    }
};
//-----------------------------------------------------------------------------------------------------------
class Solution{
    // tc-> O(n) sc-> O(n)
  public:
    int longestKSubstr(string s, int k) {
        unordered_map<int,int> mp;
        // mp[0]=1;
        int left=0,right=0,n=s.size(),ans=0;
        while(right<n){
            mp[s[right]]++;
            while(mp.size()>k){
                if(mp[s[left]]==1)mp.erase(s[left]);
                else mp[s[left]]--;
                left++;
            }
            if(mp.size()==k)
            ans=max(ans,right-left+1);
            right++;
        }
        return (ans==0)?-1:ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

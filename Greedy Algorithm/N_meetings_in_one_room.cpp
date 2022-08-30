//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1
// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    //tc->O(n)iterate start value to vector+O(nlog(n)) for sort+O(n) iterate the sort array
    //sc-> O(n) for storing maintaining the pair
    static bool compare(pair<int ,int> &a,pair<int,int> &b){
        return a.second<b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        if(n==0)return 0;
        vector<pair<int,int>> vc;
        //tc-> o(n) for iterating the array
        for(int i=0;i<n;i++){
            vc.push_back({start[i],end[i]});
        }
        sort(vc.begin(),vc.end(),compare);
       // for(auto x:vc)cout<<x.first<<"->"<<x.second<<endl;
        int cmp=1;
        int prev=vc[0].second;
        for(auto x=(vc.begin()+1);x!=vc.end();x++){
                if(x->first>prev){
                    cmp++;
                    prev=x->second;
                }
            }
        return cmp;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends

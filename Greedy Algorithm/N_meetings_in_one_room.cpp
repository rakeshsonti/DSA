//https://www.codingninjas.com/codestudio/problems/1062658?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include<algorithm>
#include<bits/stdc++.h>
struct Node{
    int start;
    int end;
    int index;
    Node(int a,int b,int c){
        start=a;
        end=b;
        index=c;
    };
};
static bool cmp(Node *a,Node *b){
//     return a->end<b->end;
    if(a->end<b->end)return true;
    else if(a->end>b->end)return false;
    else if(a->index<b->index)return true;
    else return false;
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
  vector<int> vc;
    vector<Node *> st;
    for(int i=0;i<start.size();i++){
        Node *nd=new Node(start[i],end[i],i+1);
        st.push_back(nd);
    }
    sort(st.begin(),st.end(),cmp);
//     for(auto y: st)cout<<y->end<<" ";
    int prev=-1;;
//     vc.push_back(1);
    for(auto x : st){
//         if(x==st.begin())continue;
          if((x->start)>prev){
            prev=x->end;
            vc.push_back(x->index);
        }        
    }
//     for(auto x=st.begin();x!=st.end();x++){
//         if(x==st.begin())continue;
//         if((x->start)>prev){
//             prev=x->end;
//             vc.push_back(x->index+1);
//         }
//     }
    return vc;
}

//==============================================================================================================


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

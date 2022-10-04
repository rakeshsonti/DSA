//tc->O(nlong(n))+O(n)=O(nlog(n)) sc-> O(1)
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) { 
        sort(intervals.begin(),intervals.end());//O(nlong(n))
        int start=intervals[0][0],end=intervals[0][1];
        vector<vector<int>> ans;
         for(int i=1;i<intervals.size();i++){//O(n)
             if(intervals[i][0]<=end){
               if(end<intervals[i][1])
               end=intervals[i][1];
           }else{
                ans.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
                }
         }
         ans.push_back({start,end});
        return ans;
    }
};
//--------------------------------------------------------------------------
//tc-> O(nlog(n))+O(n-1)+O(n)=O(nlog(n)) sc-> O(n) because of map 
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) { 
        sort(intervals.begin(),intervals.end());//O(nlong(n))
        map<int,int> mp;
        mp.insert({intervals[0][0],intervals[0][1]});
        vector<vector<int>> vc; 
        int prevKey=intervals.at(0).at(0);//O(n-1)
        for(int i=1;i<intervals.size();i++){
           if(intervals[i][0]<=mp[prevKey]){
               if(mp[prevKey]<intervals[i][1])
               mp[prevKey]=intervals[i][1];
           }else{
               for(auto x: mp){
                   vc.push_back({x.first,x.second});
               }
               mp.clear();
               mp[intervals[i][0]]=intervals[i][1];
               prevKey=intervals[i][0];
           }
        }
        for(auto i: mp){//O(n)
            vc.push_back({i.first,i.second});
        }
        return vc;
    }
};

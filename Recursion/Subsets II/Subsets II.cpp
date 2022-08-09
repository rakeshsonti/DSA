//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void getSubSet(int n,vector<int> &ar,set<vector<int>> &res,vector<int> sb,int index);
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    set<vector<int>> res;
    vector<int> sb;
    getSubSet(arr.size(),arr,res,sb,0);
    vector<vector<int>> result;
    for(vector<int> i:res)result.push_back(i);
    return result;
}
void getSubSet(int n,vector<int> &ar,set<vector<int>> &res,vector<int> sb,int index){
    if(index==n){
        sort(sb.begin(),sb.end());
        res.insert(sb);
        return;
    }
    sb.push_back(ar[index]);
    getSubSet(n,ar,res,sb,index+1);
    sb.pop_back();
    getSubSet(n,ar,res,sb,index+1);
}

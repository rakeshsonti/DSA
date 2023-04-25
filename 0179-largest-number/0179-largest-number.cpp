class Solution {
public:
  static bool compareFunc(string a,string b){
    return (a+b)>(b+a);
  }
    string largestNumber(vector<int>& nums) {
      vector<string> ans;
      //O(n)
      for(auto x: nums)ans.push_back(to_string(x));
      // O(nlog(n))
      sort(ans.begin(),ans.end(),compareFunc);
      if(ans[0]=="0")return "0";
      string result="";
      //O(n)
      for(auto x: ans)result+=x;
      return result;
    }
};
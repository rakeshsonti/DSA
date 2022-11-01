class Solution {
public:
    //sc-> O(n)  tc-> O(n)
    vector<int> diffWaysToCompute(string exp) {
        vector<int> ans;
        unordered_map<string,vector<int>> dp;
        //loop helps to calculate different result over the operator
        for(int ind=0;ind<exp.length();ind++){
            char curr=exp[ind];
            if(curr=='+'||curr=='-'||curr=='*'){
                vector<int>left,right;
                string s1=exp.substr(0,ind);
                string s2=exp.substr(ind+1);
                //left find
                if(dp.find(s1)!=dp.end()){
                    left=dp[s1];
                }else{
                    //left subtree calculate
                left=diffWaysToCompute(s1);
                }
                 //right find
                if(dp.find(s2)!=dp.end()){
                    right=dp[s2];
                }else{
                //right subtree calculate
                    right=diffWaysToCompute(s2);
                }
                
                //recursive left and right can contains multiple value in ans
                for(auto i:left){
                    for(int j:right){
                        if(curr=='+')ans.push_back(i+j);                                                        else if(curr=='-')ans.push_back(i-j);
                        else if(curr=='*')ans.push_back(i*j);
                    }
                }
            }
        }
        //in case of single value, that single value should push to ans
        if(ans.empty())ans.push_back(stoi(exp));
        return ans;
    }
};
//-----------------------------------------------------------------------------------
class Solution {
public:
//tc-> o(2^n) sc-> O(1)
    vector<int> diffWaysToCompute(string exp) {
        vector<int> ans;
        //loop helps to calculate different result over the operator
        for(int ind=0;ind<exp.length();ind++){
            char curr=exp[ind];
            if(curr=='+'||curr=='-'||curr=='*'){
                vector<int>left,right;
                //left subtree
                left=diffWaysToCompute(exp.substr(0,ind));
                //right subtree
                right=diffWaysToCompute(exp.substr(ind+1));
                //recursive left and right can contains multiple value in ans
                for(auto i:left){
                    for(int j:right){
                        if(curr=='+')ans.push_back(i+j);                                                        else if(curr=='-')ans.push_back(i-j);
                        else if(curr=='*')ans.push_back(i*j);
                    }
                }
            }
        }
        //in case of single value, that single value should push to ans
        if(ans.empty())ans.push_back(stoi(exp));
        return ans;
    }
};

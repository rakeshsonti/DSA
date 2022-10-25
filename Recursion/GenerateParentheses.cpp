class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s="";
        func(0,0,n,s,ans);
        return ans;
    }
    void func(int op,int cl,int n,string s,vector<string> &ans){
        if(cl==n){
            ans.push_back(s);
            return;
        }
        if(cl<op){
            func(op,cl+1,n,s+")",ans);
        }
        if(op<n){
            func(op+1,cl,n,s+"(",ans);
        }
    }
};

/-------------------------------------------------------------------------------------
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s="";
        func(0,0,n,s,ans);
        return ans;
    }

    void func(int op,int cl,int n,string s,vector<string> &ans){
            if(op==n){
                while(cl++<n){
                    s+=")";
                }
                ans.push_back(s);
                return;
            }
           
            func(op+1,cl,n,s+"(",ans);
            if(op>cl){
                func(op,cl+1,n,s+")",ans);
            }
    }
};

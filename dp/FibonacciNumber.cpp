class Solution {
//tabulation+space optimization approach tc->O(n) sc->O(1)
public:
    int fib(int n) {
        if(n<=1)return n;
        int prev1=0,prev2=1;
        for(int i=2;i<=n;i++){
            int curr=prev1+prev2;
            prev1=prev2;
            prev2=curr;
        }
        return prev2;
    }
};

//====================================================================================================================
class Solution {
//tabulation approach tc->O(n) sc->O(n) memoization=O(n)
public:
    int fib(int n) {
        if(n<=1)return n;
    vector<int> dp(n+1,-1);
        dp[0]=0;dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};
//======================================================================================================================
class Solution {
//memoization approach tc->O(n) sc->o(n) recursion +O(n) memoization=O(n)
public:
    int fib(int n) {
        vector<int> vc(n+1,-1);
       return fn(n,vc);
    }
    int fn(int n,vector<int> &vc){
        if(n<=1)return n;
        if(vc[n]!=-1)return vc[n];
       return vc[n]=fn(n-1,vc)+fn(n-2,vc);
    }
};

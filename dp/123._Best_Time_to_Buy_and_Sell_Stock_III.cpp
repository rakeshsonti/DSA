class Solution {
public:
    //tc-> O(3*2*n) sc-> O(2*3)+O(2*3) MZ= constant
public:
    int maxProfit(vector<int>& prices) {
    int n=prices.size();
    vector<vector<int>> after(2,vector<int>(3,0));
    vector<vector<int>> curr(2,vector<int>(3,0));
    for(int ind=n-1;ind>=0;ind--){
      for(int buy=0;buy<=1;buy++){
        for(int cap=1;cap<=2;cap++){
          int profit=0;
            if(buy){
              profit=max(-prices[ind]+after[0][cap],0+after[1][cap]);
            }else{
              profit=max(prices[ind]+after[1][cap-1],0+after[0][cap]);
            }
            curr[buy][cap]=profit;
        }
        after=curr;
      }
    }
    return after[1][2];
    }
};
//------------------------------------------------------------------------------------------------------------------------
class Solution {
public:
    //tc-> O(3*2*n) sc-> O(3*2*n)MS
public:
    int maxProfit(vector<int>& prices) {
    int n=prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));

    //if(cap==0)return 0;// cap will be 0 when ind and buy can be anything
    for(int ind=0;ind<n;ind++){
      for(int buy=0;buy<=1;buy++){
        dp[ind][buy][0]=0;
      }
    }
    // if(ind==n)return 0;
    //when ind==n then cap and buy can be anything
      for(int buy=0;buy<2;buy++){
        for(int cap=0;cap<2;cap++){
          dp[n][buy][cap]=0;
        }
      }

    for(int ind=n-1;ind>=0;ind--){
      for(int buy=0;buy<=1;buy++){
        for(int cap=1;cap<=2;cap++){
          int profit=0;
            if(buy){
              profit=max(-prices[ind]+dp[ind+1][0][cap],0+dp[ind+1][1][cap]);
            }else{
              profit=max(prices[ind]+dp[ind+1][1][cap-1],0+dp[ind+1][0][cap]);
            }
            dp[ind][buy][cap]=profit;
        }
      }
    }
    return dp[0][1][2];
    }
};
//------------------------------------------------------------------------------------------------------------------
class Solution {
public:
    //tc-> 2^n exponantial sc-> O(n) ASS
    //tc-> O(3*2*n) sc-> O(3*2*n)MS+O(n)ASS=O(n)
public:
    int maxProfit(vector<int>& prices) {
    int n=prices.size();
    vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
    return  solve(prices,0,1,2,n,dp);
    }
    int solve(vector<int>&prices,int ind,int buy,int cap,int n,vector<vector<vector<int>>> &dp){
      if(cap==0)return 0;
      if(ind==n){
        return 0;
      }
      if(dp[ind][buy][cap]!=-1)return dp[ind][buy][cap];
      int profit=0;
      if(buy){
        //profit=+sell-buy=that's the reason we put minus in buy include and minus in sell include
        profit=max(-prices[ind]+solve(prices,ind+1,0,cap,n,dp),0+solve(prices,ind+1,1,cap,n,dp));
      }else{
        //sell
        // when we sell then only a transaction would be consider as a completed so in case of sell include we will reduce the cap
        profit=max(prices[ind]+solve(prices,ind+1,1,cap-1,n,dp),0+solve(prices,ind+1,0,cap,n,dp));
      }
      return dp[ind][buy][cap]=profit;
    }
};

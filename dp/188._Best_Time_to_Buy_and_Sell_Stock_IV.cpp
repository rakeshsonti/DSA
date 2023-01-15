//-----------First approach------------------------
class Solution {
     //tc-> O(n*k) sc-> O(2*k )+O(2*k)=O(2*k)
public:
    int maxProfit(int k, vector<int>& prices) {
      int n=prices.size(),transaction=0,ind=0;
      vector<int> curr(2*k+1,0),after(2*k+1,0);

      for(int ind=n-1;ind>=0;ind--){
        for(transaction=2*k-1;transaction>=0;transaction--){
          if(transaction%2==0)
            curr[transaction]=max(-prices[ind]+after[transaction+1],0+after[transaction]);
          else
              curr[transaction]=max(prices[ind]+after[transaction+1],0+after[transaction]);
        }
        after=curr;
      }

      return after[0];
    }
};
//-------------------------------------------------------------------------------------------------------------------
class Solution {
     //tc-> 2^k exponantials sc-> O(n) ASS
     //tc-> O(n*k) sc-> O(n*k)
public:
    int maxProfit(int k, vector<int>& prices) {
      int n=prices.size(),transaction=0,ind=0;
      vector<vector<int>> dp(n,vector<int>(2*k+1,-1));
      return solve(k,prices,n,ind,transaction,dp);
    }
    int solve(int k, vector<int> &prices,int n,int ind,int transaction,vector<vector<int>> &dp){
      //as practically we can see in case of k=2 4 transaction needed
      if(ind==n || transaction==2*k)return 0;
      if(dp[ind][transaction]!=-1)return dp[ind][transaction];
      //buy sell buy sell ||0 1 2 4 -> transaction is even then sell the stock
      if(transaction%2==0){
        //buy
        return dp[ind][transaction]=max(-prices[ind]+solve(k,prices,n,ind+1, transaction+1,dp),0+solve(k,prices,n,ind+1,transaction,dp));
      }
        return dp[ind][transaction]=max(prices[ind]+solve(k,prices,n,ind+1, transaction+1,dp),0+solve(k,prices,n,ind+1,transaction,dp));
      
    }
};

//-------------------second approach-------------------------------------------------------------------------------------
class Solution {
     //tc-> O(k*2*n) sc-> O(2*k)+O(2*k) MZ
public:
    int maxProfit(int k, vector<int>& prices) {
    int n=prices.size();
    vector<vector<int>> after(2,vector<int>(k+1,0));
    vector<vector<int>> curr(2,vector<int>(k+1,0));
    for(int ind=n-1;ind>=0;ind--){
      for(int buy=0;buy<=1;buy++){
        for(int cap=1;cap<=k;cap++){
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
    return after[1][k];
    }
};
//-----------------------------------------------------------------------------------------------------------------------------------
class Solution {
    //tc-> O(k*2*n) sc-> O(k*2*n)MS
public:
    int maxProfit(int k, vector<int>& prices) {
      int n=prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(k+1,0)));

    //if(cap==0)return 0;// cap will be 0 when ind and buy can be anything
    for(int ind=0;ind<n;ind++){
      for(int buy=0;buy<=1;buy++){
        dp[ind][buy][0]=0;
      }
    }
    // if(ind==n)return 0;
    //when ind==n then cap and buy can be anything
      for(int buy=0;buy<2;buy++){
        for(int cap=0;cap<k;cap++){
          dp[n][buy][cap]=0;
        }
      }

    for(int ind=n-1;ind>=0;ind--){
      for(int buy=0;buy<=1;buy++){
        for(int cap=1;cap<=k;cap++){
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
    return dp[0][1][k];
    }
};
//--------------------------------------------------------------------------------------------------------------------------------------
class Solution {
      //tc-> 2^n exponantial sc-> O(n) ASS
    //tc-> O(k*2*n) sc-> O(k*2*n)MS+O(n)ASS=O(n)
public:
    int maxProfit(int k, vector<int>& prices) {
         int n=prices.size();
    vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
    return  solve(prices,0,1,k,n,dp);
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

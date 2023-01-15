class Solution {
//tc-> O(n) sc-> O(2)+O(2)+O(2)=O(6) constant
public:
    int maxProfit(vector<int>& prices) {
      int n=prices.size();
    vector<int> curr(2,0),after1(2,0),after2(2,0);
      for(int ind=n-1;ind>=0;ind--){
        int profit=0;
        //  buy
           curr[1]=max(-prices[ind]+after1[0],0+after1[1]);
            // sell
           curr[0]=max(prices[ind]+after2[1],0+after1[0]);
           after2=after1;
           after1=curr;
      }
      return after1[1];
    }
};
//-------------------------------------------------------------------------------------------------------------------------
class Solution {
//tc-> O(n) sc-> O(2*n)=O(n)
public:
    int maxProfit(vector<int>& prices) {
      int n=prices.size();
    vector<vector<int>> dp(n+2,vector<int>(2,0));
      dp[n][0]=dp[n][1]=0;
      for(int ind=n-1;ind>=0;ind--){
        int profit=0;
        //  buy
            dp[ind][1]=max(-prices[ind]+dp[ind+1][0],0+dp[ind+1][1]);
            // sell
           dp[ind][0]=max(prices[ind]+dp[ind+2][1],0+dp[ind+1][0]);
      }
      return dp[0][1];
    }
};
//---------------------------------------------------------------------
class Solution {
//tc-> O(2*n) sc-> O(2*n)=O(n)
public:
    int maxProfit(vector<int>& prices) {
      int n=prices.size();
    vector<vector<int>> dp(n+2,vector<int>(2,0));
      dp[n][0]=dp[n][1]=0;
      for(int ind=n-1;ind>=0;ind--){
        for(int buy=0;buy<=1;buy++){
        int profit=0;
         if(buy){
            profit=max(-prices[ind]+dp[ind+1][0],0+dp[ind+1][1]);
          }else{
            //sell
            profit=max(prices[ind]+dp[ind+2][1],0+dp[ind+1][0]);
          }
            dp[ind][buy]=profit;
          }
      }
      return dp[0][1];
    }
};
//----------------------------------------------------------------------
class Solution {
    //tc-> 2^n exponantial sc-> O(n) ASS
    //tc-> O(2*n) sc-> O(2*n)=O(n)
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
    vector<vector<int>> dp(n,vector<int>(2,-1));
    return  solve(prices,0,1,n,dp);
    }
    int solve(vector<int>&prices,int ind,int buy,int n,vector<vector<int>> &dp){
      if(ind>=n){
        return 0;
      }
      if(dp[ind][buy]!=-1)return dp[ind][buy];
      int profit=0;
      if(buy){
        //profit=+sell-buy=that's the reason we put minus in buy include and minus in sell include
        profit=max(-prices[ind]+solve(prices,ind+1,0,n,dp),0+solve(prices,ind+1,1,n,dp));
      }else{
        //sell
        profit=max(prices[ind]+solve(prices,ind+2,1,n,dp),0+solve(prices,ind+1,0,n,dp));
      }
      return dp[ind][buy]=profit;
    }
};

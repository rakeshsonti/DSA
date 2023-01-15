class Solution {
     //tc-> O(n) sc-> O(2)=O(2)
public:
    int maxProfit(vector<int>& prices, int fee) {
      int n=prices.size();
      vector<int> prev(2,0);
      prev[0]=prev[1]=0;
        for(int ind=n-1;ind>=0;ind--){
              int profit1=max(-prices[ind]-fee+prev[0],0+prev[1]);
              int profit2=max(prices[ind]+prev[1],0+prev[0]);
              prev[1]=profit1;
              prev[0]=profit2;
        }
        return prev[1];
    }
};
//------------------------------------------------------------------------------------------------------
class Solution {
      //tc-> O(n*2) sc-> O(2+2)=O(2)
public:
    int maxProfit(vector<int>& prices, int fee) {
      int n=prices.size();
      vector<int> prev(2,0),curr(2,0);
      prev[0]=prev[1]=0;
        for(int ind=n-1;ind>=0;ind--){
          for(int buy=0;buy<=1;buy++){
          int profit=0;
          if(buy){
              profit=max(-prices[ind]-fee+prev[0],0+prev[1]);
            }else{
              //sell
              profit=max(prices[ind]+prev[1],0+prev[0]);
            }
              curr[buy]=profit;
            }
            prev=curr;
        }
        return prev[1];
    }
};
//---------------------------------------------------------------------------------------------------------------------
class Solution {
     //tc-> O(2*n) sc-> O(2+n)=O(n)
public:
    int maxProfit(vector<int>& prices, int fee) {
      int n=prices.size();
    vector<int> prev(n+1,0),curr(2,0);
     prev[0]=prev[1]=0;
      for(int ind=n-1;ind>=0;ind--){
        for(int buy=0;buy<=1;buy++){
        int profit=0;
         if(buy){
            profit=max(-prices[ind]-fee+prev[0],0+prev[1]);
          }else{
            //sell
            profit=max(prices[ind]+prev[1],0+prev[0]);
          }
            curr[buy]=profit;
          }
          prev=curr;
      }
      return prev[1];
    }
};
//----------------------------------------------------------------------------------------------------------------------
class Solution {
 //tc-> O(2*n) sc-> O(2*n)=O(n)
public:
    int maxProfit(vector<int>& prices, int fee) {
      int n=prices.size();
    vector<vector<int>> dp(n+1,vector<int>(2,0));
      dp[n][0]=dp[n][1]=0;
      for(int ind=n-1;ind>=0;ind--){
        for(int buy=0;buy<=1;buy++){
        int profit=0;
         if(buy){
            profit=max(-prices[ind]-fee+dp[ind+1][0],0+dp[ind+1][1]);
          }else{
            //sell
            profit=max(prices[ind]+dp[ind+1][1],0+dp[ind+1][0]);
          }
            dp[ind][buy]=profit;
          }
      }
      return dp[0][1];
    }
};
//---------------------------------------------------------------------------------------------------------------------
class Solution {
    //tc-> 2^n exponantial sc-> O(n) ASS
    //tc-> O(2*n) sc-> O(2*n)=O(n)
public:
    int maxProfit(vector<int>& prices, int fee) {
      int n=prices.size();
      vector<vector<int>> dp(n,vector<int>(2,-1));
      return  solve(prices,0,1,n,dp,fee);
    }
        int solve(vector<int>&prices,int ind,int buy,int n,vector<vector<int>> &dp,int fee){
      if(ind==n){
        return 0;
      }
      if(dp[ind][buy]!=-1)return dp[ind][buy];
      int profit=0;
      if(buy){
        //profit=+sell-buy=that's the reason we put minus in buy include and minus in sell include
        profit=max(-prices[ind]-fee+solve(prices,ind+1,0,n,dp,fee),0+solve(prices,ind+1,1,n,dp,fee));
      }else{
        //sell
        profit=max(prices[ind]+solve(prices,ind+1,1,n,dp,fee),0+solve(prices,ind+1,0,n,dp,fee));
      }
      return dp[ind][buy]=profit;
    }
};

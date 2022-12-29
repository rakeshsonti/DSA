
class Solution {
  //tc-> O(n*amount) sc-> O(n+amount) n is the no of counts
public:
    int coinChange(vector<int>& coins, int amount) {
      int n=coins.size();
      vector<int>prev(amount+1,0);
      for(int i=0;i<=amount;i++){
        if(i%coins[0]==0)prev[i]=i/coins[0];
        else 
        prev[i]=1e9;
      }
      for(int ind=1;ind<n;ind++){
      vector<int>curr(amount+1,0);
        for(int tr=0;tr<=amount;tr++){
          int nottake=prev[tr];
          int take=1e9;
          if(coins[ind]<=tr){
            take=1+curr[tr-coins[ind]];
          }
          curr[tr]=min(take,nottake);
        }
        prev=curr;
      }
      return prev[amount]==1e9?-1:prev[amount];
    }
};
//--------------------------------------------------------------------
class Solution {
  //tc-> O(n*amount) sc-> O(n*amount) n is the no of counts
public:
    int coinChange(vector<int>& coins, int amount) {
      int n=coins.size();
       vector<vector<int>>dp(n+1,vector<int>(amount+1,0));
      for(int i=0;i<=amount;i++){
        if(i%coins[0]==0)dp[0][i]=i/coins[0];
        else 
        dp[0][i]=1e9;
      }
      for(int ind=1;ind<n;ind++){
        for(int tr=0;tr<=amount;tr++){
          int nottake=dp[ind-1][tr];
          int take=1e9;
          if(coins[ind]<=tr){
            take=1+dp[ind][tr-coins[ind]];
          }
          dp[ind][tr]=min(take,nottake);
        }
      }
      return dp[n-1][amount]==1e9?-1:dp[n-1][amount];
    }
};

//-----------------------------------------------------------------------
class Solution {
  //tc-> O(n*amount) sc-> O(n*amount) n is the no of counts
  //without memoization tc-> O(2^n) sc-> O(amount) n is the no of counts
public:
    int coinChange(vector<int>& coins, int amount) {
      int n=coins.size();
      vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int res=solve(coins,amount,n-1,dp);
        return res==1e9?-1:res;
    }
    int solve(vector<int> &coins,int amount,int ind,vector<vector<int>> &dp){
      if(ind==0){
        //if we can achive target by last element then check else return max value
          if(amount%coins[ind]==0)return amount/coins[ind];
          else return 1e9; 
      }
      if(dp[ind][amount]!=-1)return dp[ind][amount];
      //not take simply move ahead
      int nottake=0+solve(coins,amount,ind-1,dp);
      int take=1e9;
      if(coins[ind]<=amount){
        //if i am not changing the index that means i will check for the same element again and again?
        //ans is no-> for eg i have a 8 and coin is 3 so i took the three and now next time target value is 5 so i have a choice either i will choose the same element again or not 
       take=1+solve(coins,amount-coins[ind],ind,dp);
      }
      return dp[ind][amount]=min(take,nottake);
    }
};

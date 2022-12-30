class Solution {
public:
   //tc-> O(n*amount) sc-> O(n+amount) n is the no of counts
    int change(int amount, vector<int>& coins) {
      int n=coins.size();
      vector<int>prev(amount+1,0);
      for(int i=0;i<=amount;i++){
        if(i%coins[0]==0)prev[i]=1;
        else 
        prev[i]=0;
      }
      for(int ind=1;ind<n;ind++){
      vector<int>curr(amount+1,0);
        for(int tr=0;tr<=amount;tr++){
          int nottake=prev[tr];
          int take=0;
          if(coins[ind]<=tr){
            take=curr[tr-coins[ind]];
          }
          curr[tr]=(take+nottake);
        }
        prev=curr;
      }
      return prev[amount];
    }
};
//------------------------------------------------------------------------------------------------------------------
class Solution {
public:
  //tc-> O(n*amount) sc-> O(n*amount) n is the no of counts
    int change(int amount, vector<int>& coins) {
      int n=coins.size();
       vector<vector<int>>dp(n+1,vector<int>(amount+1,0));
      for(int i=0;i<=amount;i++){
        if(i%coins[0]==0)dp[0][i]=1;
        else 
        dp[0][i]=0;
      }
      for(int ind=1;ind<n;ind++){
        for(int tr=0;tr<=amount;tr++){
          int nottake=dp[ind-1][tr];
          int take=0;
          if(coins[ind]<=tr){
            take=dp[ind][tr-coins[ind]];
          }
          dp[ind][tr]=(take+nottake);
        }
      }
      return dp[n-1][amount];
    }
};
//-----------------------------------------------------------------------------------------------------------
class Solution {
public:
//tc-> O(n*amount) sc-> O(n*amount) n is the no of counts
  //without memoization tc-> O(2^n) sc-> O(amount) n is the no of counts
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
      vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int res=solve(coins,amount,n-1,dp);
        return res==1e9?0:res;
    }
     int solve(vector<int> &coins,int amount,int ind,vector<vector<int>> &dp){
      if(ind==0){
        //if we can achive target by last element then check else return max value
          if(amount%coins[ind]==0)return 1;
          else return 0; 
      }
      if(dp[ind][amount]!=-1)return dp[ind][amount];
      //not take simply move ahead
      int nottake=solve(coins,amount,ind-1,dp);
      int take=0;
      if(coins[ind]<=amount){
        //if i am not changing the index that means i will check for the same element again and again?
        //ans is no-> for eg i have a 8 and coin is 3 so i took the three and now next time target value is 5 so i have a choice either i will choose the same element again or not 
       take=solve(coins,amount-coins[ind],ind,dp);
      }
      return dp[ind][amount]=(take+nottake);
    }
};

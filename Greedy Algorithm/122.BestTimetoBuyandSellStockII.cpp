class Solution {
  //tc->O(n) sc-> O(1) more optimized than previous one
public:
    int maxProfit(vector<int>& prices) {
      int max=0;
      for(int i=1;i<prices.size();i++){
        if(prices[i]>prices[i-1])max+=prices[i]-prices[i-1];
      }
      return max;
    }
};


//===================================================================================================
class Solution {
  //tc-> O(n) sc->O(1)
public:
    int maxProfit(vector<int>& prices) {
      int max=0,amount=prices[0],prev=prices[0];
      bool flag=1;  //0-buy , 1-sell
      
      1. if prices goes up don't sell
      2. if price goes down sell it and book profit
      3. if previous day buy prices is greater than current day prices then simply purchase a new stock without selling the prevois stock
      
        for(int i=1;i<prices.size();i++){
             if(amount>prices[i] && prev==amount){ 
               amount=prices[i];
               prev=prices[i];
             }
             else{
               if(prev<prices[i]){
                 prev=prices[i];
                 continue;
               }else{
                  max+=prev-amount;
                  amount=prices[i];
                  prev=prices[i];
               }
             }
        }
         if(prev>amount)max+=prev-amount;
        return max;
    }
};

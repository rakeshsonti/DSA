int cutRod(vector<int> &price, int n)
{
    //tc-> O(n*n) sc->O(n)
    vector<int> prev(n+1,0);
    for(int i=0;i<=n;i++){
       prev[i]=price[0]*i;
    }
    for(int ind=1;ind<n;ind++){
        for(int i=1;i<=n;i++){
            int notincluded=prev[i];
            int included=-1e9;
            int rod_length=ind+1;
            if(i>=rod_length){
            included=price[ind]+prev[i-rod_length];
            }
            prev[i]=max(included,notincluded);
        }
    }
    return prev[n];
}

//------------------------------------------------------------------------------------------------------
int cutRod(vector<int> &price, int n)
{
    //tc-> O(n*n) sc-> O(n)+O(n)=O(n)
    vector<int> prev(n+1,0),curr(n+1,0);
    for(int i=0;i<=n;i++){
        prev[i]=price[0]*i;
    }
    for(int ind=1;ind<n;ind++){
        for(int i=1;i<=n;i++){
            int notincluded=prev[i];
            int included=-1e9;
            int rod_length=ind+1;
            if(i>=rod_length){
            included=price[ind]+curr[i-rod_length];
            }
            curr[i]=max(included,notincluded);
        }
        prev=curr;
    }
    return prev[n];
}
//-----------------------------------------------------------------------------------------------------
int cutRod(vector<int> &price, int n)
{
    //tc-> O(n*n) sc-> O(n*n)
    vector<vector<int>> dp(n,vector<int>(n+1,0));
    for(int i=0;i<=n;i++){
        dp[0][i]=price[0]*i;
    }
    for(int ind=1;ind<n;ind++){
        for(int i=1;i<=n;i++){
            int notincluded=dp[ind-1][i];
            int included=-1e9;
            int rod_length=ind+1;
            if(i>=rod_length){
            included=price[ind]+dp[ind][i-rod_length];
            }
            dp[ind][i]=max(included,notincluded);
        }
    }
    return dp[n-1][n];
}
//-------------------------------------------------------------------------------------------------
//tc-> O(n*n) sc-> O(n)recursion+O(n*n)memoization
int solve(vector<int> &prices,int n,int ind,vector<vector<int>> &dp);
int cutRod(vector<int> &price, int n)
{
    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    return solve(price,n,n-1,dp);
}
int solve(vector<int> &prices,int n,int ind,vector<vector<int>> &dp){
    if(ind==0){
        return prices[0]*n;
    }
    if(dp[ind][n]!=-1)return dp[ind][n];
    int notincluded=0+solve(prices,n,ind-1,dp);
    int included=-1e9;
    int rod_price=ind+1;//because of 0 based indexing
    if(n>=rod_price){
        included=prices[ind]+solve(prices,n-rod_price,ind,dp);
    }
    return dp[ind][n]=max(notincluded,included);
}

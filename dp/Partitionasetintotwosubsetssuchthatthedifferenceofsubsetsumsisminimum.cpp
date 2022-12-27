#include <bits/stdc++.h> 
int minSubsetSumDifference(vector<int>& arr, int n)
{
    //our k will be the total sum, instead of calculate the result for only the perticular value we will calculate the difference between total values
    int k=0;
   for(int i=0;i<arr.size();i++)k+=arr[i];
    // for more explaination of below code refer the question https://github.com/rambhajansonti/DSA/blob/master/dp/SubsetSumEqualToK.cpp
	 vector<bool>prev(k+1,false);
    prev[0]=1;
    if(arr[0]<=k)prev[arr[0]]=1;
    for(int ind=1;ind<n;ind++){
         vector<bool> curr(k+1,false);
        curr[0]=1;
        for(int target=1;target<=k;target++){
            bool nottake=prev[target];
            bool take=false;
            if(arr[ind]<=target)
                take=prev[target-arr[ind]];
            curr[target]=take|nottake;
        }
        prev=curr;
    }
    // if tabulation last row is very important that tell us about that index if subset sum of that value is possible or not
    //if it is possible then we will consider that value as a s1 and for finding the s2 we reduce s1 from the total sum
    //if we carefully observe the pattern first half of the result has the oposite value of the second half so we no need to calculate the second half , we are just using the absolute difference in our answer
     int minValue=1e9;
    for(int i=0;i<=k/2;i++){
        if(prev[i]==true){
            minValue=min(minValue,abs(i-(k-i)));
        }
    }
    return minValue;
}

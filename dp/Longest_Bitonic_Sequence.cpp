#include <bits/stdc++.h> 
//tc-> O(n*n) sc-> O(n)+O(n)
int longestBitonicSequence(vector<int>& arr, int n) {
	  vector<int> dp1(n,1),dp2(n,1);
    //iterate from left to right
    for(int i=0;i<n;i++){
        for(int prev=0;prev<i;prev++){
            if(arr[prev]<arr[i] && 1+dp1[prev]>dp1[i]){
                dp1[i]=1+dp1[prev];
            }
        }
    }
    //iterate from right to left
    for(int i=n-1;i>=0;i--){
        for(int prev=n-1;prev>i;prev--){
            if(arr[prev]<arr[i] && 1+dp2[prev]>dp2[i]){
                dp2[i]=1+dp2[prev];
            }
        }
    }
    int maxValue=0;
    for(int i=0;i<n;i++){
        //curr element is included twice while iterating left to right and right to left so do -1 from the ans
        maxValue=max(maxValue,(dp1[i]+dp2[i]-1));
    }
    return maxValue;
} 

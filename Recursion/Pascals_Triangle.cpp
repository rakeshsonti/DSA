#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  //tc-> O(n^2) sc-> O(1)
  vector<vector<long long int>> vc;
    for(int i=0;i<n;i++){
        vector<long long int> tempVc;
       for(int j=0;j<=i;j++){
        if(j==0||j==i){
            tempVc.push_back(1);
        }else{
            tempVc.push_back((vc[i-1][j-1]+vc[i-1][j]));    
        }   
       }
        vc.push_back(tempVc);
    }
    return vc;
}

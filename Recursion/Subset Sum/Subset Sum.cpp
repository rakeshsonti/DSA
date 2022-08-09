void getSum(vector<int> &num,int sum,vector<int> &result,int index,int n);
vector<int> subsetSum(vector<int> &num)
{
   vector<int> res;
    getSum(num,0,res,0,num.size());
    sort(res.begin(),res.end());
    return res;
}
void getSum(vector<int> &num,int sum,vector<int> &result,int index,int n){
    if(index==n){
        result.push_back(sum);
        return ;
    }
//     take it
   getSum(num,sum+num[index],result,(index+1),n);
//     don't take it
   getSum(num,sum,result,(index+1),n);
}

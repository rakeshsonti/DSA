class Solution {
public:
    long long smallestNumber(long long num) {
      if(num==0)return 0;
        if(num<0){
          //positive
          string s=to_string(-num);
          //descending order sort
          sort(s.rbegin(),s.rend());
          return -stol(s);
        }
        //if no is positive
      //convert to string
      string s=to_string(num);
      //sort in ascending order
      sort(s.begin(),s.end());
      int non_zero_ind=0;
      while(s[non_zero_ind]=='0' && non_zero_ind<s.size())non_zero_ind++;
      char ch=s[non_zero_ind];
      
      s.erase(s.begin()+non_zero_ind);
      s=ch+s;
      return stol(s);
    }
};
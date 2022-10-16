class Solution{
    public:
    //tc-> O(n)
    //sc-> O(1)
     int findDuplicate(vector<int>& nums) {
    for (int i=0; i<nums.length; i++) {
           while(nums[i] != i) {
               if (nums[i] == nums[nums[i]])
                   return nums[i];

                swap(nums, i, nums[i]);
           }
        }
        return 0;
     }
};
-----------------------------------------------------------
class Solution{
    public:
    //tc-> O(n)
    //sc-> O(1)
     int findDuplicate(vector<int>& nums) {
         sort(nums.begin(),nums.end());
         for(int i=1;i<nums.size();i++){
             if(nums[i-1]==nums[i])return nums[i-1];
         }
         return 0;
     }
};
---------------------------------------------------------------

class Solution {
    //tc-> O(n)
    //sc-> O(n)
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int i:nums){
            if(st.find(i)!=st.end()){
                return i;
            }
            st.insert(i);
        }
        return 0;
    }
};

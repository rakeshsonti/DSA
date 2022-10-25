class Solution {
    //tc->O(n) sc-> O(1)
public:
    int jump(vector<int>& nums) {
        int farthest=0,current=0,jump=0;
        for(int i=0;i<nums.size()-1;i++){
            farthest=max(farthest,nums[i]+i);
            if(current==i){
                current=farthest;
                jump++;
            }
        }
        return jump;
    }
};

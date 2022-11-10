class Solution {
    // tc-> O(n) sc->O(1) approach kadane's algo (modified)
    /*
    generally in kadane approach we care about only maxsum but in case of maxproduct if two negative no multiply that form a positive no. so we have to maintain maxproduct as well as minProduct
    why minProduct required?
    if we multiply a max number with negative number that become minimum number and multiply negative with negative become positive or max so for eleminating (-)*(-)=+ case we are managing maxProduct and minProduct
    */
public:
    int maxProduct(vector<int>& nums) {
       int maxProduct=nums[0],minProduct=nums[0],ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0)swap(minProduct,maxProduct);
            maxProduct=max(maxProduct*nums[i],nums[i]);                         minProduct=min(minProduct*nums[i],nums[i]);
            ans=max(maxProduct,ans);
        }
        return ans;
    }
};

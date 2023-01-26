class Solution {
  //tc-> O(k)+O(k)=O(k) sc-> O(1) 
public:
    int maxScore(vector<int>& cardPoints, int k) {
      int n=cardPoints.size();
      int left=0,right=n-1,lSum=0,ans=0;
      //sum first k value from start
      while(left<k){
        lSum+=cardPoints[left];
        left++;
      }
      //store sum for final ans
      ans=lSum;
      for(int i=0,rSum=0;i<k;i++){
        //add element to the rSum from the end
        rSum+=cardPoints[n-i-1];
        //remove the element from the k-i position where already added in lSum
        lSum-=cardPoints[k-i-1];
        //check weather add and remove of element from end and start will work or not 
        //if it does not increase the final ans then ignore this two index and focus on another two index
        ans=max(ans,rSum+lSum);
      }
      return ans;    
    }
};

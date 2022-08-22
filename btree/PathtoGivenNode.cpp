/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 //https://www.interviewbit.com/problems/path-to-given-node/discussion/p/very-easy-solution-c-path-to-given-node/76704/1857/
 //tc->O(n) sc->O(n)
bool dfs1(TreeNode * root,vector<int> vc,int num,vector<int> &ans);
vector<int> Solution::solve(TreeNode* A, int B) {
   vector<int> vc,ans;
   dfs1(A,vc,B,ans);
   return ans;
}
bool dfs1(TreeNode * root,vector<int> vc,int num,vector<int> &ans){
    if(root==NULL)return false;
    vc.push_back(root->val);
    
    if(root->val==num){
        copy(vc.begin(),vc.end(),back_inserter(ans));
        return true;
    }
    return (dfs1(root->left,vc,num,ans) || dfs1(root->right,vc,num,ans));
}

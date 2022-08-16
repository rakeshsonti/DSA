/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/
 */
class Solution
{
    public:
        vector<int> inorderTraversal(TreeNode *root)
        {
            vector<int> result;
            if (root == NULL) return result;
            dfs(root,result);
            return result;
        }
    void dfs(TreeNode * root, vector<int> &result)
    {
        //left root right
        if (root == NULL) return;
        if (root->left != NULL) dfs(root->left, result);
        result.push_back(root->val);
        // cout << root->val << " ";
        if (root->right != NULL) dfs(root->right, result);
    }
};

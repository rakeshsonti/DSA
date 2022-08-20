/**
 *Definition for a binary tree node.
 *struct TreeNode { 
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
//https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/
class Solution
{
    //tc->O(n) sc->O(n)
    public:
        vector<int> preorderTraversal(TreeNode *root)
        {
            vector<int> res;
            if (root == NULL) return res;
            stack<TreeNode*> st;
            st.push(root);
            while (!st.empty())
            {
                TreeNode *node = st.top();
                st.pop();
                res.push_back(node->val);
                if (node->right != NULL)
                {
                    st.push(node->right);
                }
                if (node->left != NULL)
                {
                    st.push(node->left);
                }
            }
            return res;
        }
};

/*
//tc-> O(n) sc->O(n)
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==NULL)return res;
        dfs(root,res);
        return res;
    }
    void dfs(TreeNode *root,vector<int> &res){
        if(root==NULL)return;
        res.push_back(root->val);
        dfs(root->left,res);
        dfs(root->right,res);
    }
};
*/

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
//https://leetcode.com/problems/binary-tree-postorder-traversal/submissions/
class Solution
//tc->O(n) sc->O(n)
{
    public:
        vector<int> postorderTraversal(TreeNode *root)
        {
            vector<int> vc;
            if (root == NULL) return vc;
            stack<TreeNode*> st1;
            stack<TreeNode*> st2;
            st1.push(root);
            while (!st1.empty())
            {
                TreeNode *node = st1.top();
                st2.push(node);
                st1.pop();
                if (node->left != NULL) st1.push(node->left);

                if (node->right != NULL) st1.push(node->right);
            }
            while (!st2.empty())
            {
                vc.push_back(st2.top()->val);
                st2.pop();
            }

            return vc;
        }
};

/*
class Solution
   	//tc->O(n) sc->O(n)
{
    public:
        vector<int> postorderTraversal(TreeNode *root)
        {
            vector<int> rs;
            if (root == NULL) return rs;
            postOrder(root,rs);
            return rs;
        }
    void postOrder(TreeNode *root,vector<int> &vc){
        if(root==NULL)return;
        postOrder(root->left,vc);
        postOrder(root->right,vc);
        vc.push_back(root->val);
    }
};
*/

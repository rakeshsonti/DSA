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

class Solution
{
    //tc->O(2N) sc->O(n)
    public:
        vector<int> postorderTraversal(TreeNode *root)
        {
            vector<int> rs;
            if (root == NULL) return rs;
            stack<TreeNode *> st;
            while (root != NULL || !st.empty() ) {
                if(root!=NULL){
                    st.push(root);
                    root=root->left;
                }else{
                    TreeNode * node=st.top()->right;
                    if(node==NULL){
                        node=st.top();
                        st.pop();
                        rs.push_back(node->val);
                        while(!st.empty() && node==st.top()->right){
                            node=st.top();
                            st.pop();
                            rs.push_back(node->val);
                        }
                        
                    }else{
                        root=node;
                    }
                }
            }
            return rs;
        }
};
/*
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
*/

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

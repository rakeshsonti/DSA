/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};
//https://www.codingninjas.com/codestudio/problems/vertical-order-traversal_920533?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

************************************************************/
#include<map>
#include<queue>
#include<vector>
void dfs(TreeNode<int> *root,vector<int> &vc);
vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    vector<int> vc;
    if(root==NULL)return vc;
    map<int,vector<int>> mp;
    queue<pair<TreeNode<int> *,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto itr=q.front();
        q.pop();
        TreeNode<int> * node=itr.first;
        int level=itr.second;
        mp[level].push_back(node->data);
        if(node->left!=NULL)q.push({node->left,level-1});
        if(node->right!=NULL)q.push({node->right,level+1});
    }
    for(auto it: mp){
       copy(it.second.begin(),it.second.end(),back_inserter(vc));
    }
    return vc;
}
void dfs(TreeNode<int> *root,vector<int> &vc){
    if(root==NULL)return;
    dfs(root->left,vc);
    vc.push_back(root->data);
    dfs(root->right,vc);
}

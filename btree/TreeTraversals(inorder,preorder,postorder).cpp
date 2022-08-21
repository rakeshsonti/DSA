/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

//https://www.codingninjas.com/codestudio/problems/981269?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0
************************************************************/
void dfs(BinaryTreeNode<int> *root,vector<vector<int>> &vc);
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    vector<vector<int>> vc={
        {},{},{}
    };
    dfs(root,vc);
    return vc;
}
void dfs(BinaryTreeNode<int> *root,vector<vector<int>> &vc){
    if(root==NULL)return;
    vc[1].push_back(root->data);
    dfs(root->left,vc);
    vc[0].push_back(root->data);
    dfs(root->right,vc);
    vc[2].push_back(root->data);
}

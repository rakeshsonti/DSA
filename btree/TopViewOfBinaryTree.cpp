/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
//https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1
//https://www.codingninjas.com/codestudio/problems/799401?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
#include<map>
void dfs(TreeNode<int> *root,vector<int> &vc){
    //tc-O(n) sc-<O(n)
    if(root==NULL)return;
    map<int,int> mp;
    queue<pair<TreeNode<int> *,int>> q;
    int line=0;
    q.push({root,line});
    while(!q.empty()){
        auto itr=q.front();
        TreeNode<int> * node=itr.first;
        line=itr.second;
        if(mp.find(line)==mp.end())
        mp.insert({line,node->val});
        q.pop();
        if(node->left!=NULL){
            q.push({node->left,line-1});
        }
        if(node->right!=NULL){
            q.push({node->right,line+1});
        }
    }
    for(auto it: mp){
        vc.push_back(it.second);
    }
}
vector<int> getTopView(TreeNode<int> *root) {
    vector<int> vc;
    dfs(root,vc);
    return vc;
}

/*************************************************************
 
    Following is the Binary Tree node structure.

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
//https://www.codingninjas.com/codestudio/problems/893110?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
//tc-O(n) sc->O(n)
*************************************************************/
void bfs(BinaryTreeNode<int> *root,vector<int> &vc){
    if(root==NULL)return;
    //queue< node,line>
    //map<line,node>map
    queue<pair<BinaryTreeNode<int> *,int>> q;
    map<int,int> mp;
    int line=0;
    q.push({root,line});
    while(q.empty()==false){
        auto itr=q.front();
        BinaryTreeNode<int> * node=itr.first;
        line=itr.second;
       mp[line]=node->data;
        q.pop();
        if(node->left!=NULL){
            q.push({node->left,line-1});
        }
        if(node->right!=NULL){
            q.push({node->right,line+1});
        }
    }
    for(auto it:mp){
        vc.push_back(it.second);
    }
}

vector<int> bottomView(BinaryTreeNode<int> * root){
    vector<int> vc;
    bfs(root,vc);
    return vc;
}

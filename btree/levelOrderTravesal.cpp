#include <iostream>
#include<vector>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data=0;
    struct Node * left=NULL;
    struct Node * right=NULL;
    Node(int val){
        data=val;
    };
};
void bfs(Node * root,vector<int> &vc);
void levelOrderTraversal(Node *root);
int main() {
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->left->right->left=new Node(8);
    root->left->right->right=new Node(9);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    levelOrderTraversal(root);
    return 0;
}
void levelOrderTraversal(Node *root){
    vector<int> vc;
    bfs(root,vc);
    for(int i:vc){
        cout<<i<<" ";
    }

}
void bfs(Node * root,vector<int> &vc){
    if(root==NULL)return;
    queue<Node *> q;
    q.push(root);
    while(q.empty()==false){
        Node * node=q.front();
        vc.push_back(node->data);
        q.pop();

        if(node->left!=NULL){
            q.push(node->left);
        }

        if(node->right!=NULL){
            q.push(node->right);
        }
    }
}

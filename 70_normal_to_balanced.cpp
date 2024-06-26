#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
    void inorder(Node* root,vector<int> &sum){
    if(root==NULL)
    return;

    inorder(root->left,sum);
    sum.push_back(root->data);
    inorder(root->right,sum);
}

Node* inordertobalanced(vector<int> &sum,int s,int e){
    // base case
    if(s>e)
    return NULL;
    
    int mid=(s+e)/2;
    Node* root=new Node(sum[mid]);
    root->left=inordertobalanced(sum,s,mid-1);
    root->right=inordertobalanced(sum,mid+1,e);
    return root;
}

Node* buildBalancedTree(Node* root)
{
    vector<int> sum;
    inorder(root,sum);
    int n=sum.size();
    return inordertobalanced(sum,0,n-1);
}
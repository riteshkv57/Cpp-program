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
Node* insertIntoBST(Node* &root,int data){
    if(root==NULL){
    root=new Node(data);
    return root;
    }
    if(data>root->data){
        root->right=insertIntoBST(root->right,data);
    }
    else
    root->left=insertIntoBST(root->left,data);
    return root;
}

void takeinput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}

void levelOrdertraversal2(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    cout<<endl;
    while(!q.empty()){
        Node* temp=q.front();
        // 
        q.pop();
    if(temp==NULL){
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
    }
    else{
        cout<<temp->data<<" ";
    if(temp->left)
        q.push(temp->left);

    if(temp->right)
    q.push(temp->right);
      }
    } 
}

void preorder(Node* root,int &mini){
    if(root==NULL)
    return;

    // maxi=max(maxi,root->data);
    mini=min(mini,root->data);
    preorder(root->left,mini);
    preorder(root->right,mini);
}

Node* deletefromBST(Node* root,int todelete){
    if(root==NULL)
    return root;
    if(root->data==todelete){
        // 0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        // 1 child
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
         if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }

        // 2 child
          if(root->left!=NULL && root->right!=NULL){
            int mini;
            preorder(root,mini); 
            root->data=mini;
            root->right=deletefromBST(root->right,mini);
            return root;
        }
    }
    else if(root->data>todelete){
        root->left=deletefromBST(root->left,todelete);
        return root;
    }
    else{
        root->right=deletefromBST(root->right,todelete);
        return root;
    }
}

int main()
{
    Node* root=NULL;
    cout<<"Enter data to create BST"<<endl;
    takeinput(root);
    int maxi=INT_MIN;
    int mini=INT_MAX;
    // preorder(root,mini); 
    // cout<<maxi<<" "<<mini<<endl;
     root=deletefromBST(root,54);
    levelOrdertraversal2(root);
   
}
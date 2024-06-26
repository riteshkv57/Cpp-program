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

void morristraversal(Node* root){
      Node* curr=root;
        while(curr!=NULL){
            if(curr->left){
                Node* prev=curr->left;
                while(prev->right!=NULL){
                    prev=prev->right;
                }
                prev->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;
            }
            curr=curr->right;
        }
        }
int main()
{
    Node* root;
    morristraversal(root);
}
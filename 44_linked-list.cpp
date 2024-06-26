#include<iostream>
#include<vector>
using namespace std;

struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

// class Node {
//     public:
//     int data;
//     Node* next;
// };


// inserting a node at beginning
 Node *insertAtBegining(Node *head, int x) {
      Node* newnode=new Node(x);
       if(head == NULL){
            head = newnode;
            return head;
        }
      newnode->next=head;
      head=newnode;
      return head;
    }

// inserting a node at end
 Node *insertAtEnd(Node *head, int x)  {
       Node* newnode=new Node(x);
        if(head == NULL){
            head = newnode;
            return head;
        }
       Node* temp=head;
       while(temp->next!=NULL){
           temp=temp->next;
       }
       temp->next=newnode;
       return head;
    }

// inserting a node at middle
Node* insertInMiddle(Node* head, int x)
{
	Node* temp=head;
	Node* temp1=head;
     Node* newnode=new Node(x);
	int count=0;
	while(temp!=NULL){
	    temp=temp->next;
	    count++;
	}
	if(count%2!=0)
	count=(count/2)+1;
	else
	count=count/2;
	count--;
	while(count--){
	    temp1=temp1->next;
	}
	newnode->next=temp1->next;
	temp1->next=newnode;
	return head;
}


// constructing a linked list from given array
 Node* constructLL(vector<int>& arr) {
         Node* root=new Node(arr[0]);
         Node* Root=root;
         int n=arr.size();
         for(int i=0;i<n;i++){
             Node* newnode=new Node(arr[i]);
            // Node* newnode;
             root->next=newnode;
             root=root->next;
         }
         return Root->next;
    }

int main(){
vector<int> arr;

return 0;
}
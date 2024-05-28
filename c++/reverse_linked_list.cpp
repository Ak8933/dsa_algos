#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

Node* reverseList(Node* &head){
    
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;

    if(head==NULL || head->next==NULL){
        return head;
    }
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    head=prev;
    return head;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAthead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
 
int main(){
    Node* node1=new Node(5);
    Node* head=node1;
    insertAthead(head,4);
    insertAthead(head,3);
    insertAthead(head,2);
    insertAthead(head,1);
    print(head);
    reverseList(head);
    print(head);

return 0;
}
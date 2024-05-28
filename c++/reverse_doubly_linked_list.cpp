#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

//constructor
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

void reverse(Node* &head){
    Node* temp=NULL;
    Node* curr=head;
    
    while(curr!=NULL){
        //cout<<"HI";
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;


        // temp=curr->next;
        // curr->next=curr->prev;
        // curr->prev=temp;
        curr=curr->prev; 
        if(temp!=NULL){
            head=temp->prev;
        }
        //temp=NULL;  
    }
   // head=curr;
    
}


//insert at head
void insertAthead(Node* &head,int data){
    Node *temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

//print linkedlist
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    Node* node1=new Node(9);
    Node* head=node1;
    insertAthead(head,8);
    insertAthead(head,7);
    insertAthead(head,6);
    insertAthead(head,5);
    insertAthead(head,4);
    print(head);
    

    reverse(head);

    print(head);
    
return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->prev=NULL;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        if(this->next!=NULL){
            //memory freed
            delete next;
            this->next=NULL;
        }
    }
};


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

    Node* node1=new Node(10);
    Node* head=node1;
    print(head);

    insertAthead(head,33);
    print(head);


return 0;
}
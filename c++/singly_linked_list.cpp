#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
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


//insert at start
void insertAthead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}


//insert at last
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

//insert at position
void insertAtPosition(Node *&head, Node *&tail, int pos, int data)
{

    // inserting at start
    if (pos == 1)
    {
        insertAthead(head, data);
        return;
    }

    //insert at middle
    Node *nodeToInsert = new Node(data);
    Node *tempo = head;
    for (int j = 1; j < pos - 1; j++)
    {
        tempo = tempo->next;
    }

    // inserting at last
    if (tempo->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    nodeToInsert->next = tempo->next;
    tempo->next = nodeToInsert;
}


//deletion at given position
void deleteAtPosition(Node* &head,int pos){

    //delete at start
    if(pos==1){
        Node* temp=head;
        head=head->next;
        //if u are deleting something just make sure that the data u are deleting is not pointing or using some "inuse" data.
        temp->next=NULL;
        delete temp;
        return;
    }

     //delete at end or middle
    Node* temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    Node* tobeDeleted=temp->next;
    temp->next=tobeDeleted->next;
    //if u are deleting something just make sure that the data u are deleting is not pointing or using some "inuse" data.
    tobeDeleted->next=NULL;
    delete tobeDeleted;
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


int main()
{
    Node *node1 = new Node(10);
    Node *tail = node1;
    Node *head = node1;

    insertAthead(head, 12);
    insertAthead(head, 43);
    insertAtTail(tail, 22);
    insertAtPosition(head, tail, 2, 17);

    print(head);

    deleteAtPosition(head,3);
    print(head);
    deleteAtPosition(head,4);
    print(head);
    deleteAtPosition(head,1);


    print(head);

    return 0;
}
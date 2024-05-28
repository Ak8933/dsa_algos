#include<bits/stdc++.h>
using namespace std;

class LL{

    public:
    int data;
    LL* next;

    //constructor
    LL(int data){
        this->data=data;
        this->next=NULL;
    }

};



 void insertAthead(LL *&head,int d){
        LL* temp=new LL(d);
        temp->next=head;
        head=temp;
    }

    void print(LL* &head){
        LL* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

int main(){
    int d=3;
    

    LL* head=new LL(d);
    insertAthead(head,9);
    insertAthead(head,7);
    insertAthead(head,5);
    insertAthead(head,6);

    print(head);

    

return 0;
}
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
 
int main(){
    
return 0;
}
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node * next;
};
void fun1(struct Node* head){
    if(head==NULL){
        return;
    }
    fun1(head->next);
    cout<<head->data<<" ";
}
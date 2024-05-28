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
};

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

Node *reverseList(Node *&head)
{

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
    return head;
}

// void merger(Node* &head,Node* &reversehead,Node* lasthead){
//     Node* temp=head;
//     // while(temp->next!=NULL){
//     //     temp=temp->next;
//     // }
//     // temp->next=reversehead;
//     // while(temp->next!=NULL){
//     //     temp=temp->next;
//     // }
//     // temp->next=lasthead;

//     // print(head);
// }

//******************************************************************************
// My solution
//******************************************************************************

// void reverseSublist(Node* &head,int left,int right){
//     int count=0;
//     Node* startofsublist=head;
//     Node* sublistkaprev=NULL;
//     Node* tailofsublist=NULL;
//     Node* lasthead=NULL;
//     while(count<left-1){
//         sublistkaprev=startofsublist; // 1 2 3 4 5
//         startofsublist=startofsublist->next;
//         count++;
//     }
//     tailofsublist=startofsublist;
//     while(count<right-1){
//         tailofsublist=tailofsublist->next;
//         count++;
//     }
//     lasthead=tailofsublist->next;
//     tailofsublist->next=NULL;
//     Node* reversehead=reverseList(startofsublist);
//     sublistkaprev->next=reversehead;
//     tailofsublist->next=lasthead;
//     //print(head);
// }

Node *reverseBetween(Node *&head, int left, int right)
{
    Node *temp = head;
    Node *t2 = head;
    vector<int> ans;

    while (temp != NULL)
    {
        ans.push_back(temp->data);
        temp = temp->next;
    }
    left--;
    right--;
    int a = left;
    int b = right;
    while (a < b)
    {
        swap(ans[a++], ans[b--]);
    }
    int k = 0;
    while (t2 != NULL)
    {
        t2->data = ans[k];
        k++;
        t2 = t2->next;
    }
    return head;
}
void insertAthead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

int main()
{
    Node *node1 = new Node(5);
    Node *head = node1;
    insertAthead(head, 4);
    insertAthead(head, 3);
    insertAthead(head, 2);
    insertAthead(head, 1);
    print(head);
    reverseBetween(head, 2, 4);
    print(head);

    return 0;
}
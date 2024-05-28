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

void reverseList(Node *&head, Node *&prev, Node *&curr)
{

    // base case
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    Node *forward = curr->next;
    // recursion
    reverseList(head, curr, forward);
    // 1 case solve
    curr->next = prev;
}

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

int getlen(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
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
    Node *prev = NULL;
    Node *curr = head;
    reverseList(head, prev, curr);
    print(head);
    int k=getlen(head);
    cout<<k;

    return 0;
}
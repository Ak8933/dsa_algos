#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    // constructor
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
// Function for preorder tree traversal
void preorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    inorder(root->left);
    preorder(root->right);
}



// Function for inorder tree traversal
void inorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}



// Function for postorder tree traversal
void postorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // calling preorder
    preorder(root);
    cout << "\n";

    // calling inorder
    inorder(root);
     cout << "\n";

     // calling postorder
    postorder(root);
    return 0;
}































    
}
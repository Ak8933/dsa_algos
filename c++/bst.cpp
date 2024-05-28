#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelorder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void insertIntoBST(node *&root, int d)
{
    if (root == NULL)
    {
        root = new node(d);
        return;
    }
    if (d > root->data)
    {
        insertIntoBST(root->right, d);
    }
    else
    {
        insertIntoBST(root->left, d);
    }
    return;
}

void takeInput(node *&root)
{
    cout << "Enter data to create BST: ";
    int d;
    cin >> d;
    while (d != -1)
    {
        insertIntoBST(root, d);
        cin >> d;
    }
    return;
}

int main()
{

    node *root = NULL;
    takeInput(root);
    cout << "DONE!" << endl;

    levelorder(root);

    return 0;
}
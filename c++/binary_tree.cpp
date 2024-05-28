#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root){
    int data;
    cout << "Enter data: " << endl;
    cin >> data;
    root = new node(data);
    if (data == -1){
        return NULL;
    }
    cout << "Enter data for left node: " << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for right node: " << endl;
    root->right = buildTree(root->right);

    return root;
}

void reverseLevelOrderTraversal(node* root){
    if (!root){
        return;
    }
    queue<node*> q;
    stack<node*> s;
    q.push(root);

    while (!q.empty()){
        int levelSize = q.size();

        for (int i = 0; i < levelSize; i++){
            node* no = q.front();
            q.pop();

            s.push(no);

            if (no->right){
                q.push(no->right);
            }
            if (no->left){
                q.push(no->left);
            }
        }
    }

    while (!s.empty()){
        node* no = s.top();
        s.pop();
        cout << no->data << " ";
    }
}

void inorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


void levelOrdertTraversal(node *root){
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    while (!q.empty()){
        node *temp = q.front();
        q.pop();
        if (temp == NULL){
            cout << endl;
            if (!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if (temp->left){
                q.push(temp->left);
            }
            if (temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    node *root = NULL;

    // building a tree
    root = buildTree(root);

    // levelorder traversal
    cout<<endl;
    cout<<endl;
    cout<<"LEVEL ORDER TRAVERSAL: "<<endl;
    levelOrdertTraversal(root);
    cout<<endl;
    cout<<endl;

    // reverseLevelOrder traversal
    cout<<"REVERSE LEVEL ORDER TRAVERSAL: "<<endl;
    reverseLevelOrderTraversal(root);
    cout<<endl;
    cout<<endl;

    //inorder
    cout<<"INORDER TRAVERSAL: "<<endl;
    inorder(root);
    cout<<endl;
    cout<<endl;

    //preorder
    cout<<"PREORDER TRAVERSAL: "<<endl;
    preorder(root);
    cout<<endl;
    cout<<endl;

    //postorder
    cout<<"POSTORDER TRAVERSAL: "<<endl;
    postorder(root);
    cout<<endl;
    cout<<endl;

    return 0;
}
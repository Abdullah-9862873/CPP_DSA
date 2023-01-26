#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preOrder(struct Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void InOrder(struct Node* root){
    if(root==NULL){
        return;
    }

    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

void PostOrder(struct Node* root){
    if(root==NULL){
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    /*
             1
           /  \
          2     3
         / \   / \
        4   5 6  7

    */

   cout<<"PreOder traversal of this Binary tree is: "<<endl;
   preOrder(root);
   cout<<endl;
   
   cout<<"InOder traversal of this Binary tree is: "<<endl;
   InOrder(root);
   cout<<endl;

   cout<<"PostOder traversal of this Binary tree is: "<<endl;
   PostOrder(root);
   cout<<endl;

    return 0;
}
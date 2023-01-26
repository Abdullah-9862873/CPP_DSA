/*
Binary search tree has three rules to follow:
1--> The left subtree of a node contains nodes with keys lesser 
        than the node's key.
2--> The right subtree of a node contains nodes with keys greater
         than the node's key.
3--> No duplicate values are present and each left and right subree is also a
        binary tree...

    Note---> The inorder sequence of Binary Search Tree is always in asceding order
*/

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }

    if(val > root->data){
        root->right = insertBST(root->right, val);
    }else{
        root->left = insertBST(root->left, val);
    }
    return root;
}

void inOrderPrint(Node* root){
    if(root == NULL){
        return;
    }

    inOrderPrint(root->left);
    cout<<root->data<<" ";
    inOrderPrint(root->right);
}

int main(){
    Node* root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    inOrderPrint(root);

    return 0;
}
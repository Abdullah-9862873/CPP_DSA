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

Node* LCA(Node* root, int n1, int n2){
    if(root == NULL){
        return NULL;
    }

    if(root->data == n1 || root->data == n2){
        return root;
    }

    Node* leftLCA = LCA(root->left, n1, n2);
    Node* rightLCA = LCA(root->right, n1, n2);

    if(leftLCA && rightLCA){
        return root;
    }

    if(leftLCA == NULL && rightLCA != NULL){
        return rightLCA;
    }
    
    return leftLCA;
}

int main(){
/*
            1
           / \
          2   3
         /   / \
        4   5   6
           /
          7
*/

    Node* root = new Node(1);
    root->left = new Node(2); 
    root->left->left = new Node(4);

    root->right = new Node(3);
    root->right->right = new Node(6);

    root->right->left = new Node(5);
    root->right->left->left = new Node(7);


    int n1 = 7, n2 = 6;
    Node* lca = LCA(root, n1, n2);
    if(lca == NULL){
        cout<<"LCA does not exist"<<endl;
    }else{
        cout<<"LCA is: "<<lca->data<<endl;
    }

    return 0;
}
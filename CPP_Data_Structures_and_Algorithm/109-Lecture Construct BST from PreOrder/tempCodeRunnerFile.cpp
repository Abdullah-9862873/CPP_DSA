#include<iostream>
#include<bits/stdc++.h>
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

Node* constructBST(int preOrder[], int *preOrderidx, int key, int min, int max, int n){
    if(*preOrderidx >= n){
        return NULL;
    }

    Node* root = NULL;
    if(key > min && key < max){
        root = new Node(key);
        *preOrderidx = *preOrderidx + 1;

        if(*preOrderidx < n){
            root->left = constructBST(preOrder, preOrderidx, preOrder[*preOrderidx], min, key, n);
        }
        if(*preOrderidx < n){
            root->right = constructBST(preOrder, preOrderidx, preOrder[*preOrderidx], key, max, n);
        }
    }
        return root;
}

void preOrderPrint(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrderPrint(root->left);
    preOrderPrint(root->right);
}

int main(){
/*
            10
           /  \
          2    13
         /      \
        1        11
*/

    int preOrder[] = {10, 2, 1, 13, 11};
    int n = 5;
    int preOrderidx = 0;
    Node* root = constructBST(preOrder, &preOrderidx, preOrder[0], INT_MIN, INT_MAX, n);
    preOrderPrint(root);

    return 0;
}
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

int search(int inOrder[], int start, int end, int curr){
    for(int i=start; i<=end; i++){
        if(inOrder[i] == curr){
            return i;
        }
    }
    return -1;
}

Node* BuildTree(int preOrder[], int inOrder[], int start, int end){
    static int idx = 0;
    if(start>end){
        return NULL;
    }

    int curr = preOrder[idx];
    idx++;
    Node* node = new Node(curr);

    int pos = search(inOrder, start, end, curr);
    node->left = BuildTree(preOrder, inOrder, start, pos-1);
    node->right = BuildTree(preOrder, inOrder, pos+1, end);

    return node;
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
    int preOrder[] = {1, 2, 4, 3, 5};
    int inOrder[] = {4, 2, 1, 5, 3};

    Node* root = BuildTree(preOrder, inOrder, 0, 4);
    inOrderPrint(root);


    return 0;
}
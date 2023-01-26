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

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// pointer to pointer stores address of pointers
void calcPointers(Node* root, Node** first, Node** mid, Node** last, Node** prev){
    if(root == NULL){
        return;
    }

    calcPointers(root->left, first, mid, last, prev);

    // If prev is not NULL---> (*prev)
    if((*prev) && root->data < (*prev)->data){
        // Violation occurs 

        if(! *first){
            // If first doesn't exist yet so it's a first violation

            *first = *prev;
            *mid = root;
        }
        else{
            // Second Violation where *first already exist

            *last = root;
        }
    }
    *prev = root;
    calcPointers(root->right, first, mid, last, prev);
}

void restoreBST(Node* root){
    Node* first;
    Node* mid;
    Node* last;
    Node* prev;

    first = NULL;
    mid = NULL;
    last = NULL;
    prev = NULL;

    calcPointers(root, &first, &mid, &last, &prev);

    //Case 1
    if(first && last){
        swap(&(first->data), &(last->data));

    }else if(first && mid){
        // Case 2 when last is NULL
        swap(&(first->data), &(mid->data));
    }
}

void inOrderprint(Node* root){
    if(root == NULL){
        return;
    }

    inOrderprint(root->left);
    cout<<root->data<<" ";
    inOrderprint(root->right);
}

int main(){
/*
                6
               / \
              9   3
             / \   \
            1  4    13
*/

    Node* root = new Node(6);
    root->left = new Node(9);
    root->right = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right->right = new Node(13);

    inOrderprint(root);
    cout<<endl;

    restoreBST(root);

    inOrderprint(root);
    cout<<endl;

    return 0;
}
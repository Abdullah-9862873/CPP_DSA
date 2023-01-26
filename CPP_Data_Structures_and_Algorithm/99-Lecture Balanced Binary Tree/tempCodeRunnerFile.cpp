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

bool checkBalancing(Node* root, int* height){
    if(root == NULL){
        *height = 0;
        return true;
    }
    int leftHeight = 0;
    int rightHeight = 0;

    if(checkBalancing(root->left, &leftHeight) == false){
        return false;
    }
    if(checkBalancing(root->right, &rightHeight) == false){
        return false;
    }
    *height = max(leftHeight, rightHeight) + 1;

    if(abs(leftHeight - rightHeight) <= 1){
        return true;
    }else{
        return false;
    }
}

int main(){
/*
                1
               /  \
               2   3
             / \ /  \
            4  5 6   7
*/
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int height = 0;
    if(checkBalancing(root, &height)){
        cout<<"It is a Balanced Binary Tree"<<endl;
    }else{
        cout<<"It is not a Balanced Binary Tree"<<endl;
    }

    /*
    Not balanced
                1
               /
              2
             /
            3
*/

    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->left->left = new Node(3);

    cout<<"Checking root 2"<<endl;

    int height2 = 0;
    if(checkBalancing(root2, &height2)){
        cout<<"It is a Balanced Binary Tree"<<endl;
    }else{
        cout<<"It is not a Balanced Binary Tree"<<endl;
    }
    return 0;
}
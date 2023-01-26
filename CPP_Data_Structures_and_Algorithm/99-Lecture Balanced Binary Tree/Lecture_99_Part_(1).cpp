/*
Balanced Binary tree is if for each node the  absolute difference(mod) 
between its left subtree and right subree is <=1

Here time complexity is O(n^2)
*/

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

int calcHeight(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHeight = calcHeight(root->left);
    int rightHeight = calcHeight(root->right);
    return max(leftHeight, rightHeight) + 1;
}

bool checkBalancing(Node* root){
    if(root == NULL){
        // Leaf node which is always balanced
        return true;
    }
    if(checkBalancing(root->left) == false){
        return false;
    }
    if(checkBalancing(root->right) == false){
        return false;
    }

    int leftHeight = calcHeight(root->left);
    int rightHeight = calcHeight(root->right);

    if((abs(leftHeight - rightHeight)) <= 1){
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


    cout<<"Checking root 1"<<endl;

    if(checkBalancing(root)){
        cout<<"It is a Balanced Binary tree"<<endl;
    }else{
        cout<<"It is not a Balanced Binary tree"<<endl;
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

     if(checkBalancing(root2)){
        cout<<"It is a Balanced Binary tree"<<endl;
    }else{
        cout<<"It is not a Balanced Binary tree"<<endl;
    }
    return 0;
}
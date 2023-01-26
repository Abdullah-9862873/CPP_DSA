/*
Diameter is the number of nodes in the longest path between two leaves
2 Cases---> If root is involved then (LeftHeight + RightHeight +1)
       ---> If root is not involved then ()

The time complexity of calc Height is O(n) and since we are calling it for every node
in the calcDiameter so the time complexity of calcDiameter is O(n^2);

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

int calcDiameter(Node* root){
    if(root == NULL){
        return 0;
    }
    // Case 1: if root is involved
    int leftHeight = calcHeight(root->left);
    int rightHeight = calcHeight(root->right);
    int currDiamemter = (leftHeight + rightHeight) + 1;

    // Case 2: if root is not involved
    int leftDiameter = calcDiameter(root->left);
    int rightDiameter = calcDiameter(root->right);
    int maximum = max(leftDiameter, rightDiameter);

    int FinalDiameter = max(currDiamemter, maximum);
    return FinalDiameter;
}


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<calcDiameter(root)<<endl;
    return 0;
}
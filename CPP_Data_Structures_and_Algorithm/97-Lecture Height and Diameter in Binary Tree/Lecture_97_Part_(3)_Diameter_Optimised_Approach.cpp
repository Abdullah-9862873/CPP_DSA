/*
Height pointer is pointing towards height of every node... So the height 
of every node is calculated and the diameter of every node is calculated

The time complexity is O(N) 
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



int calcDiameter(Node* root, int* height){
    if(root == NULL){
        *height = 0;
        return 0;
    }    

    int leftHeight = 0;
    int rightHeight = 0;

    // Case1: When root is involved
    int leftDiameter = calcDiameter(root->left, &leftHeight);
    int rightDiameter = calcDiameter(root->right, &rightHeight);

    int currDiamter = leftHeight + rightHeight + 1;
    *height = max(leftHeight, rightHeight) + 1;

    // Case 2: when root is not involved
    int maximum = max(leftDiameter, rightDiameter);

    return max(currDiamter, maximum);
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int height = 0;
    cout<<calcDiameter(root, &height)<<endl;
    return 0;
}
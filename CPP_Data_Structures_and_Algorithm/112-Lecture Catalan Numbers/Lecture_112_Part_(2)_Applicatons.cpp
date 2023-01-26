/*
Problem ---> Possible BSTs for node=3

The property of BST states that the left subtrees of ith node contain nodes
less than ith node and right subtrees of ith node contain nodes greater than
ith node
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

vector<Node*> constructTrees(int start, int end){
    vector<Node*> trees;

    if(start > end){
        trees.push_back(NULL);
        return trees;
    }

    for(int i=start; i<=end; i++){
        // We have constructed subtrees for lower number
        vector<Node*> leftsubTrees = constructTrees(start, i-1);
        vector<Node*> rightSubtrees = constructTrees(i+1, end);

        for(int j=0; j<leftsubTrees.size(); j++){
            Node* left = leftsubTrees[j];
            for(int k=0; k<rightSubtrees.size(); k++){
                Node* right = rightSubtrees[k];

                Node* node = new Node(i);
                node->left = left;
                node->right = right;
                trees.push_back(node);
            }
        }
    }
    return trees;
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
    vector<Node*> totalTrees = constructTrees(1, 3);
    for(int i=0; i<totalTrees.size(); i++){
        cout<<(i+1)<<" : ";
        preOrderPrint(totalTrees[i]);
        cout<<endl;
    }

    return 0;
}
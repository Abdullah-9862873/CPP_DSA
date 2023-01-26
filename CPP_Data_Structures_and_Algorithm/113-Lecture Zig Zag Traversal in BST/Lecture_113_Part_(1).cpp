/*
Zig Zag traversal is that in:

Level 0---> Print nodes from left to right
Level 1---> Print nodes from right to left
so on....

Strategy:
1---> Build two stacks, currLevel and nextLevel
2---> variable bool (leftToRight) initially true
3---> If leftToRight is true then push left child then right child
4---> if false then push right child then left child
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

void zigzagLevel(Node* root){
    if(root == NULL){
        return;
    }

    stack<Node*> currLevel;
    stack<Node*> nextLevel;

    bool leftToRight = true;

    currLevel.push(root);

    while(!currLevel.empty()){
        Node* temp = currLevel.top();
        currLevel.pop();

        if(temp != NULL){
            
            cout<<temp->data<<" ";
            if(leftToRight){
                if(temp->left){
                    nextLevel.push(temp->left);
                }
                if(temp->right){
                    nextLevel.push(temp->right);
                }
            }
            else{
                if(temp->right){
                    nextLevel.push(temp->right);
                }
                if(temp->left){
                    nextLevel.push(temp->left);
                }
            }
        }
        if(currLevel.empty()){
            // We have finished one level
            leftToRight = !leftToRight;
            swap(currLevel, nextLevel);
        }
        
    }
}

int main(){
/*
                12
               /  \
              9    15
             /      \
            5        10
*/
    Node* root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->right->right = new Node(10);

    zigzagLevel(root);


    return 0;
}
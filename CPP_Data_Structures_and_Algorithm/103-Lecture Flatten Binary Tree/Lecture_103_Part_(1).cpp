/*
Steps:
1---> Recursively flatten left and right subtrees
2--->Store the left tail and right tail(leaves)
3--->Store right subtree in the temp and make left subtree as right subtree
4---> join the right subtree with left tail
5---> flatten(right)
*/

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

void flattenBinaryTree(Node* root){
    if(root == NULL || (root->left==NULL && root->right == NULL)){
        return;
    }

    if(root->left != NULL){
        flattenBinaryTree(root->left);

        Node* temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node* t = root->right;
        while(t->right != NULL){
            t = t->right;
        }
        t->right = temp;
    }

    flattenBinaryTree(root->right);
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
/*
            4
           / \
          9   5
         / \   \
        1  3    6
*/

    Node* root = new Node(4);
    root->left = new Node(9);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right = new Node(5);
    root->right->right = new Node(6);

    flattenBinaryTree(root);
    
/*
After flatten
    4
     \
      9
       \
        1
         \
          3
           \ 
            5
             \
              6
*/
// printing inOrder after flattening

    inOrderPrint(root);


    return 0;
}
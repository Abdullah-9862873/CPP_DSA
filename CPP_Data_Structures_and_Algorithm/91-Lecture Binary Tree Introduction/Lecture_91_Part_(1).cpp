/*
Binary Tree---> Binary tree is a tree in which each parent node has maximum of two nodes as 
                child nodes
Root---> Topmost node of the tree
Parent--> A node having successor is called a parent node
child--> A node having ancestor is called a child node
Sibling--> Nodes having same parent
Leaves--> Nodes that doesn't have any children

Properties:
    1---> Maximum number of nodes at particulat level = 2^L
    2---> Maximum number of nodes in a tree at height H = 2^H - 1
    3---> For n nodes, the minimum height is = Log base 2 (N + 1)
    4---> for n leaf nodes, the minimum number of levels in a tree are = (Log base 2 (N+1))+ 1

*/

#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left = NULL;
    struct Node* right = NULL;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root -> right = new Node(3);
    /*

      1
     / \
    2   3

    */

   root->left->left = new Node(4);
   root->left->right = new Node(5);

    /*

          1
         / \
        2   3
       / \
      4   5

    */
    return 0;
}
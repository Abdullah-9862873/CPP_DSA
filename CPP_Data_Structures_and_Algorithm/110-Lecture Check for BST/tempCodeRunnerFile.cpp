/*
Approach---> we traverse left subrtree and get max value from left subtree
            we traverse right subtree and get min value from there

            Then we check if our root node is:
                    node > max && node < min 
            Then its a BST

when we are traversing left we take (min--->min and max--->node)
When we are traversing right we take (min-->node and max--->max)
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

bool isBST(Node* root, Node* min=NULL, Node* max=NULL){
    if(root == NULL){
        // If the root is empty then assume it is BST
        return true;
    }

    if(min != NULL && root->data <= min->data){
        return false;
    }
    if(max!=NULL && root->data >= max->data){
        return false;
    }

    bool leftValid = isBST(root->left, min, root);
    bool rightValid = isBST(root->right, root, max);

    return (leftValid && rightValid);
}

int main(){
/*
            1
           / \
          2   3
*/
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);

    if(isBST(root1, NULL, NULL)){
        cout<<"It is valid"<<endl;
    }else{
        cout<<"It is not valid"<<endl;
    }
/*
            5
           / \
          3   6
*/
    Node* root2 = new Node(5);
    root2->left = new Node(3);
    root2->right = new Node(6);

    if(isBST(root2, NULL, NULL)){
        cout<<"It is valid"<<endl;
    }else{
        cout<<"It is not valid"<<endl;
    }

    return 0;
}
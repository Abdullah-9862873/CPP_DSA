/*
Differrence between height of left subtree and height of right subtree is <= 1
That is why it is Balanced BST


Strategy--->
    1---> Make middle element the root
    2---> Recursively do the same for subtrees
                start to mid-1 for left subtree
                mid+1 to end for right subtree
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

Node* sortedArrayToBST(int arr[], int start, int end){
    if(start > end){
        return NULL;
    }
    int mid = (start + end) /2;
    Node* root = new Node(arr[mid]);

    root->left = sortedArrayToBST(arr, start, mid-1);
    root->right = sortedArrayToBST(arr, mid+1, end);
    return root;
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
    int arr[] = {10, 20, 30, 40, 50};
    Node* root = sortedArrayToBST(arr, 0, 4);
    preOrderPrint(root);
    cout<<endl;

/*
    Resultant tree becomes

                30
               /  \
              10   40
               \    \
                20   50
*/
    return 0;
}
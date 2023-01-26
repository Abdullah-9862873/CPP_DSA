/*
Notes:
1---->The reason that right node is printed first is that in postOrder Sequence the follow up is:
        left right root... So when traversing from right to left we get the right node of the root

2---->Also we have used static int because static is used to make the variable stay in the memory and 
        it does not burst after the return of the function... So when recursively calling it does
        not have to initialise it to zero every time...

3---> We cannot build Tree using preOrder and postOrder... This is because the resultantn
        trees will be more than one combinations so we can't get a full and final tree 
        unless the tree is full Binary tree(in which every parent node has two child nodes)

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

int search(int inOrder[], int start, int end, int curr){
    for(int i=start; i<=end; i++){
        if(inOrder[i] == curr){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int postOrder[], int inOrder[], int start, int end){
    static int idx = end;
    if(start > end){
        return NULL;
    }

    int curr = postOrder[idx];
    idx--;
    Node* node = new Node(curr);

    int pos = search(inOrder, start, end, curr);
    node->right = buildTree(postOrder, inOrder, pos+1, end);
    node->left = buildTree(postOrder, inOrder, start, pos-1);

    return node;
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
    int postOrder[] = {4, 2, 5, 3, 1};
    int inOrder[] = {4, 2, 1, 5, 3};

    Node* node = buildTree(postOrder, inOrder, 0, 4);
    inOrderPrint(node);

    return 0;
}
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

void printSubTreeNodes(Node* root, int k){
    if(root == NULL || k<0){
        return;
    }
    if(k == 0){
        cout<<root->data<<" ";
        return;
    }

    printSubTreeNodes(root->left, k-1);
    printSubTreeNodes(root->right, k-1);
}

// The return type is int because it is returning distance from target node to 
// ancestors

int printNodesAtK(Node* root, Node* target, int k){
    if(root == NULL){
        return -1;
    }

    if(root == target){
        printSubTreeNodes(root, k);
        // Distance is returning zero because the ancestor is at root
        return 0;
    }

    int dl = printNodesAtK(root->left, target, k);
    if(dl != -1){
        // dl +1 is to access the ancestor
        if(dl+1 == k){
            // Means that the distance from target to ancestor is k or not
            // if k then ancestor should be printed
            cout<<root->data<<" ";
        }else{
            printSubTreeNodes(root->right, k-dl-2);
        }
        return 1+dl;
    }

    int dr = printNodesAtK(root->right, target, k);
    if(dr != -1){
        if(dr+1 == k){
            // Means that the distance from target to ancestor is k or not
            cout<<root->data<<" ";
        }else{
            printSubTreeNodes(root->left, k-dr-2);
        }
        return 1+dr;
    }
    return -1;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    printNodesAtK(root, root->left, 1);

    return 0;
}
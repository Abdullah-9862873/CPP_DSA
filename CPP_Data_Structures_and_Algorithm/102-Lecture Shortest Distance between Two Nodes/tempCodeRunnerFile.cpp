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

Node* LCA(Node* root, int n1, int n2){
    if(root == NULL){
        return NULL;
    }

    if(root->data == n1 || root->data == n2){
        return root;
    }

    Node* left = LCA(root->left, n1, n2);
    Node* right = LCA(root->right, n1, n2);

    if(left && right){
        return root;
    }

    if(left!= NULL && right==NULL){
        return left;
    }
    if(left==NULL && right==NULL){
        return NULL;
    }
    return right;
}

int findDist(Node* root, int key, int dist){
    if(root == NULL){
        return -1;
    }

    if(root->data == key){
        return dist;
    }

    // dist+1 is because we moved one step while approaching left of the root
    int left = findDist(root->left, key, dist+1);

    if(left != -1){
        // We found the key in the left
        return left;
    }
    int right = findDist(root->right, key, dist+1);
    return right;
}

int distBtwNodes(Node* root, int n1, int n2){
    Node* lca = LCA(root, n1, n2);

    // 0 is the initial distance of n1 from lowest common ancestor(lca)
    int d1 = findDist(lca, n1, 0);
    int d2 = findDist(lca, n2, 0);

    return d1 + d2;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    
    root->left->left = new Node(4);

    root->right->left = new Node(5);
    root->right->right = new Node(6);

    root->right->left->left = new Node(7);

    int n1=7, n2=6;
    cout<<distBtwNodes(root, n1, n2)<<endl;
    
    return 0;
}
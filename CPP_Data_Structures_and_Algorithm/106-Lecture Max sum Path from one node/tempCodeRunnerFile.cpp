#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node * right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int maxPathSumUtil(Node* root,int &ans){
    if(root == NULL){
        return 0;
    }

    int left = maxPathSumUtil(root->left, ans);
    int right = maxPathSumUtil(root->right, ans);

    int nodeMax = max(max(root->data, root->data + left + right), max(root->data + left, root->data + right));
    ans = max(nodeMax, ans);
    // To include ancestors we are writing singular sum to calculate path or single subtree side
    int singlePathSum = max(root->data, max(root->data + left, root->data + right));
    return singlePathSum;
}

int maxPathSum(Node* root){
    int ans = INT_MIN;
    maxPathSumUtil(root, ans);
    return ans;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->right->right = new Node(5);

    cout<<maxPathSum(root)<<endl;

    return 0;
}
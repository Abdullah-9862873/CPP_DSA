/*
Strategy-->
    1---> If both are empty then return true
    2---> If both are not empty:
            a--> Check if the data at current node of both BSTs is equal
            b---> Check if the left subtrees are same
            c---> Check if the right subtrees are same
    3--- > if (a, b, c) then return true
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

bool isIdentical(Node* root1, Node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }

    else if((root1==NULL && root2 != NULL) || (root1 != NULL && root2 == NULL)){
        return false;
    }

    else{
        bool cond1 = (root1->data == root2->data);
        bool cond2 = isIdentical(root1->left, root2->left);
        bool cond3 = isIdentical(root1->right, root2->right);

        if(cond1 && cond2 && cond3){
            return true;
        }
        return false;
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
    Node* root1 = new Node(12);
    root1->left = new Node(9);
    root1->right = new Node(15);
    root1->left->left = new Node(5);
    root1->right->right = new Node(10);


    Node* root2 = new Node(12);
    root2->left = new Node(9);
    root2->right = new Node(14);
    root2->left->left = new Node(5);
    root2->right->right = new Node(10);

    bool condition = isIdentical(root1, root2);
    if(condition){
        cout<<"They are identical"<<endl;
    }else{
        cout<<"They are not identical"<<endl;
    }
    return 0;
}
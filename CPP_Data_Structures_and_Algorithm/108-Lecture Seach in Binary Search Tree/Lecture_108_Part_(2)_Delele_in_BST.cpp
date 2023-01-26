/*
Deletion has following cases:
1--> If the node is leaf node---> Simply delete the node
2--> If the node has one child---> Replace the child with the node and
                                     delete the node
3--> If the node has two children--> 
                        1) Find the inorder successor(the value that comes after
                            that node while printing inOrder)
                        2) Replace the node with the inorder successor 
                        3) Delete the node
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
        right - NULL;
    }
};

Node* inOrderSucc(Node* root){
    Node* curr = root;
    while(curr && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}

Node* deleteInBST(Node* root, int key){
    if(root == NULL){
        return NULL;
    }

    if(key < root->data){
        // lie on the left side
        root->left = deleteInBST(root->left, key);
    }
    else if(key > root->data){
        root->right = deleteInBST(root->right, key);
    }
    else{
        // We are at the key
        // Case1 & 2
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }
        
        //Case 3
        Node* temp = inOrderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
        
    }
        return root;

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
              2   5
             / \   \
            1  3    6
*/

    Node* root = new Node(4);
    root->left = new Node(2);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right = new Node(5);
    root->right->right = new Node(6);

    // Alter the main root
    inOrderPrint(root);
    cout<<endl;
    cout<<"After deleting the node: "<<endl;
    root = deleteInBST(root, 5);
    inOrderPrint(root);


    return 0;
}
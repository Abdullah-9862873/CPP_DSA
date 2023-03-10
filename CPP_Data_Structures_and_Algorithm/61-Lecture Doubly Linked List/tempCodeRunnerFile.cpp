#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* prev;

        node(int val){
            data = val;
            next=NULL;
            prev=NULL;
        }
};

void InsertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    if(head!=NULL){
        head->prev =n;
    }
    head=n;
}

void InsertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head==NULL){
        InsertAtHead(head, val);
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next=n;
    n->prev=temp;
}

void DeleteElement(node* &head, int pos){
    node* n = new node(pos);
    node* temp = head;
    while(temp!=NULL && temp->data!=pos){
        temp = temp->next;
    }
    node* toDelete = temp;

    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;

    delete toDelete;
}

void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;
    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    InsertAtTail(head, 5);
    display(head);
    DeleteElement(head, 3);
    display(head);

    return 0;
}
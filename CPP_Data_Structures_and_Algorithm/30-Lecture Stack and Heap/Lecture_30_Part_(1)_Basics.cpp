/*
Tip:    After deallocation the pointer is still pointing from
        stack to heap

        delete is used for one single pointer and delete[] is
        used for deleting an array through a pointer.
*/

#include<iostream>
using namespace std;

int main(){
    int a=10;

    int* p = new int();     //Memory allocation in heap
    *p = a;                 // Allocation of value

    cout<<*p<<endl;
    delete(p);              // To deallocate memory 
    
    p = new int[4];         // To allocate the memory of array of 4 integers in heap
    delete []p;             // To deallocate the array allocation

    p = NULL;             // To remove the dangling pointer

    return 0;
}
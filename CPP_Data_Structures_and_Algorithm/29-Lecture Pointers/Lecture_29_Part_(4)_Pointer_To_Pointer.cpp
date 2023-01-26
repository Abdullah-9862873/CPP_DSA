/*
1-----> Pointer
            p --> address of a
            *p --> value of a
2-----> Pointer to Pointer
            q ---> address of p
            *q --> value at address of p that is address of a
            **q --> value at address of a that is value of a
3------> Pointer to pointer to pointer
            r --->address of q
            *r ---> value at address of q that is address of p
            **r--> value of p that is address of a
            ***r--> value at address of a that is value of a
*/

#include<iostream>
using namespace std;

int main(){
    int a = 10;


    cout<<"FOR p POINTER: "<<endl;
    int* p = &a;
    cout<<"Value at p is: "<<p<<endl;
    cout<<"Value at *p is: "<<*p<<endl;

    cout<<"For q pointer to pointer: "<<endl;
    int** q =&p;
    cout<<"Value at q is: "<<q<<endl;
    cout<<"Value at *q is: "<<*q<<endl;
    cout<<"Value at **q is: "<<**q<<endl;

    cout<<"For r pointer to pointer to pointer: "<<endl;
    int ***r = &q;
    cout<<"Value at r is: "<<r<<endl;
    cout<<"Value at *r is: "<<*r<<endl;
    cout<<"Value at **r is: "<<**r<<endl;
    cout<<"Value at ***r is: "<<***r<<endl;

    return 0;
}
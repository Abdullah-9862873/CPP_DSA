#include<iostream>
using namespace std;

int main(){
    // We can perform four arithematic operations
    //  ++  --    +   -

    int a=10;
    int *a_ptr = &a;
    cout<<"The address of a is: "<<&a<<endl;
    

    // You can print the addresses using &a || a_ptr

    a_ptr++;
    cout<<"The updated address of a is: "<<a_ptr<<endl;


    return 0;
}
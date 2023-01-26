#include<iostream>
using namespace std;

int main(){
    int a=10;
    int* a_ptr=&a;

    cout<<"The value of a is: "<<* a_ptr<<endl;
    cout<<"The address of a is: "<<&a<<endl;
    // Accessing value of a using pointer
    * a_ptr=20;
    cout<<"The updated value of a is: "<<a<<endl;

    return 0;
}
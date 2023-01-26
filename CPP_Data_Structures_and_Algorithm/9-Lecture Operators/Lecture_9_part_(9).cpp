// Shift Operators

#include<iostream>
using namespace std;

int main(){
    // Left Shift operator

    int a=1;    // a is currently 00000001 
    a = a<<3;   // No it is calculated as a*2^3=8
    cout<<"The value of a becomes: "<<a<<endl;

    // Right Shift operator

    a = a >>2;   // No it is calculated as a/2^2=2
    cout<<"The value of a becomes: "<<a<<endl;
    return 0;
}
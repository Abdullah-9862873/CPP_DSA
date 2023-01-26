//HCF is also known as Greatest common divisor __GCC_DESTRUCTIVE_SIZE
#include<iostream>
using namespace std;

int  GCD(int a, int b){
    while(b!=0){
        int rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

int main(){
    int a, b;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    cout<<GCD(a, b)<<endl;

    return 0;
}
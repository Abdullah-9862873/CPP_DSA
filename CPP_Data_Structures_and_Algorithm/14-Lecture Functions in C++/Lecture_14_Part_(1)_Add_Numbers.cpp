#include<iostream>
using namespace std;

void print(int num){
    cout<<num<<endl;
    return;
}

int add(int num1, int num2){
    cout<<"The value of num1 is ";
    print(num1);
    cout<<"The value of num2 is ";
    print(num2);
    int sum = num1 + num2;
    cout<<"The sum is: ";
    return sum;
}

int main(){
    int a,b;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;

    cout<<add(a, b);

    return 0;
}
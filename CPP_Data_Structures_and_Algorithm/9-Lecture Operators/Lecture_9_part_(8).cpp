#include<iostream>
using namespace std;

int main(){
    // Ternanry Operator or Conditional operator
    int a = 10, b = 5;
    int c = a>b? a-b : b-a;
    cout<<c<<endl;


    // Reference Operator
    int d = 10;
    cout<<"The address of d is: "<<&d<<endl;

    return 0;
}
#include<iostream>
using namespace std;

void increment(int *a){
    ++*a;
}

int main(){
    int a=2;
    cout<<"Initial value of a is: "<<a<<endl;

    increment(&a);
    cout<<"Value of a becomes: "<<a<<endl;

    return 0;
}
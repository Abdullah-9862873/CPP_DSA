#include<iostream>
using namespace std;

int divisible(int n, int a, int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);

    return ((c1+c2)-c3);
}

int main(){
    int n, a, b;
    cout<<"Enter n: "<<endl;
    cin>>n;
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b: "<<endl;
    cin>>b;

    cout<<divisible(n, a, b)<<endl;

    return 0;
}
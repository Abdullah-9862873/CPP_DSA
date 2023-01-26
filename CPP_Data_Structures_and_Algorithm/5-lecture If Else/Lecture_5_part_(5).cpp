#include<iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"Enter the first number: "<<endl;
    cin>>x;

    cout<<"Enter the second number: "<<endl;
    cin>>y;

    if(x==y){
        cout<<"Both the numbers are equal"<<endl;
    }else if(x>y){
        cout<<x<<" is greater than "<<y<<endl;
    }else{
        cout<<y<<" is greater than "<<x<<endl;
    }
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

int main(){
    // String to Integer
    string s1 = "786";
    int x = stoi(s1);
    cout<<x<<endl;
    cout<<"Integer after append is: "<<x+2<<endl;

    // Integer to String
    string y;
    y=to_string(x);
    cout<<y<<endl;

    cout<<"String after append is: "<<y+"2"<<endl;

    return 0;
}
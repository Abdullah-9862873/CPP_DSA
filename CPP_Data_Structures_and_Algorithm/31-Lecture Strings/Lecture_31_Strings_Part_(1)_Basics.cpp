#include<iostream>
#include<string>
using namespace std;

int main(){
    // string str;
    // cout<<"Enter the string: "<<endl;
    // cin>>str;
    // cout<<"The string is: "<<str<<endl;

    string str;
    cout<<"Enter the string: "<<endl;
    getline(cin, str);
    cout<<str;
    cin.ignore();

    
    return 0;
}
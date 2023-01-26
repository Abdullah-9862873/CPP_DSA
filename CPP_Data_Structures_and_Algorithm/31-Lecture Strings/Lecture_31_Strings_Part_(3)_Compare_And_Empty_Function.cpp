#include<iostream>
#include<string>
using namespace std;

int main(){
    // Compare Function
    string st1 = "abc";
    string st2 = "abc";
    cout<<st1.compare(st2)<<endl;

    if(st1.compare(st2)==0){
        cout<<"Strings are equal"<<endl;
    }

    // Empty function
    string str1;
    cout<<"Enter the value of string: "<<endl;
    getline(cin, str1);
    cout<<str1<<endl;
    str1.clear();
    
    if(str1.empty()){
        cout<<"String is empty"<<endl;
    }else{
        cout<<"String is not empty"<<endl;
    }

    return 0;
}
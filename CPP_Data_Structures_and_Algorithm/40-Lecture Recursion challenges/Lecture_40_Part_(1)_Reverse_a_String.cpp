#include<iostream>
#include<string>
using namespace std;

void reverse(string s){
    if(s.length()==0){
        return;
    }
    string rest_of_string = s.substr(1);
    reverse(rest_of_string);
    cout<<s[0];
}

int main(){
    string s;
    cout<<"Enter the strng: "<<endl;
    cin>>s;
    reverse(s);

    return 0;
}
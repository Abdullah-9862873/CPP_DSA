// pippppiiiipi

#include<iostream>
#include<string>
using namespace std;

void ReplacePi(string s){
    if(s.length()==0){
        return;
    }

    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        ReplacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        ReplacePi(s.substr(1));
    }
}

int main(){
    string s = "pippppiiiipi";
    ReplacePi(s);
    return 0;
}
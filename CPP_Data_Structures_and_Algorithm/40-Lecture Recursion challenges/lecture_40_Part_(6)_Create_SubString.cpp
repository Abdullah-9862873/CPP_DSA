#include<iostream>
#include<string>
using namespace std;

void SubString(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    SubString(ros, ans);
    SubString(ros, ans+ch);
}

int main(){
    SubString("ABC", "");

    return 0;
}
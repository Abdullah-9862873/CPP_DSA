#include<iostream>
#include<string>
using namespace std;

void GenerateSubStr(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string ros = s.substr(1);
    int ascii = ch;
    GenerateSubStr(ros, ans);
    GenerateSubStr(ros, ans+ch);
    GenerateSubStr(ros, ans+ch+ to_string(ascii));
}

int main(){
    GenerateSubStr("AB", "");

    return 0;
}
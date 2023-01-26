#include<iostream>
#include<string>
using namespace std;

string KeypadArr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv","wxyz"};

void GetCombinations(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string code = KeypadArr[ch-'0'];
    string ros = s.substr(1);

    for(int i=0; i<code.length(); i++){
        GetCombinations(ros, ans+code[i]);
    }
}

int main(){
    GetCombinations("237", "");

    return 0;
}
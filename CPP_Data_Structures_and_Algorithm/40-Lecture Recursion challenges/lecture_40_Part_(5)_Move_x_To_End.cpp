#include<iostream>
#include<string>
using namespace std;

string MoveX(string s){
    if(s.length()==0){
        return "";
    }

    char ch = s[0];
    string ans = MoveX(s.substr(1));
    if(ch=='x'){
        return (ans+ch);
    }
    return ch+ans;
}

int main(){
    cout<<MoveX("xabskdxkasxksfxlaxa")<<endl;

    return 0;
}
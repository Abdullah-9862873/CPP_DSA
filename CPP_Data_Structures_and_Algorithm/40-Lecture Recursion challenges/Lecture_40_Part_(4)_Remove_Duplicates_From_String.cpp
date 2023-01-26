#include<iostream>
#include<string>
using namespace std;

string RemoveDuplicate(string s){
    if(s.length()==0){
        return "";
    }

    char ch=s[0];
    string ans = RemoveDuplicate(s.substr(1));

    if(ch==ans[0]){
        return ans;
    }
    return (ch + ans);
}

int main(){
    cout<<RemoveDuplicate("aaabbbbccccdddeeeeffff")<<endl;
    return 0;
}
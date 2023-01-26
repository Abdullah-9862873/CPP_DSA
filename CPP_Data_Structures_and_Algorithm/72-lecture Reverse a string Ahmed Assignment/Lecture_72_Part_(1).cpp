#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string my_String(char *s){
    int len=0; int n;

    len = strlen(s);
    n = len-1;
    char temp;
    for(int i=0; i<=(len/2); i++){
        temp = s[i];
        s[i] = s[n];
        s[n] = temp;
        n--;
    }
    return s;
}

void reverseSentence(string s){
    stack<string> st;

    for(int i=0; i<s.length(); i++){
        string word="";
        while(s[i] != ' ' && i<s.length()){
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main(){
    char my_str[] = "Hi this is Abdullah";
    my_String(my_str);
    cout<<my_str;


    cout<<endl<<">>>>>>>>><<<<<<<<<<<<<<"<<endl;
    reverseSentence(my_str);


    return 0;
}
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s1;
    s1 = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
    cout<<"The string before sorting is: "<<s1<<endl;
    sort(s1.begin(), s1.end());
    cout<<"The string after sorting is: "<<s1<<endl;


}
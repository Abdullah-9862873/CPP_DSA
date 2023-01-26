#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s;
    string initial = s;
    getline(cin, s);
    cout<<"The initial value of string is: "<<s<<endl;

    //transfrom(interate_from, iterate_to, where_to_start, ::What_to_do);
    cout<<"The string after tranformation is: "<<endl;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;

    cout<<"The string after transformation to lowercase is: "<<endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;

    return 0;
}
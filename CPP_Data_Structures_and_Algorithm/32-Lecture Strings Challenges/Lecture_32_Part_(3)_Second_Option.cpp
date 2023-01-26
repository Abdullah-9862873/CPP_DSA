#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter the values: "<<endl;
    getline(cin, str);
    cout<<"The unsorted elements are: "<<endl;
    cout<<str<<endl;

    cout<<"The sorted elements are: "<<endl;
    sort(str.begin(), str.end(), greater<int>());
    cout<<str<<endl;
    return 0;
}
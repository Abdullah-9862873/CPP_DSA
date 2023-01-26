#include<iostream>
using namespace std;

int main(){
    char arr[100];
    cout<<"Enter the character you want to print: "<<endl;
    cin>>arr;
    cout<<"The printed output is: "<<arr<<endl;

    int idx;

    cout<<"Which index you want to print?"<<endl;
    cin>>idx;

    cout<<arr[idx]<<endl;

    return 0;
}
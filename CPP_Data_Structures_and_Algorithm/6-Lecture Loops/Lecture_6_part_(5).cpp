#include<iostream>
using namespace std;

int main(){
    // Display multiplication table of given number

    int num;
    cout<<"Enter the number whose multiplication table you want: "<<endl;
    cin>>num;

    for(int i=1; i<=10; i++){
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }

    return 0;
}
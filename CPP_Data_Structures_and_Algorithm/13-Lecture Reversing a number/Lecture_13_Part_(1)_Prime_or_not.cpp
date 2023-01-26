#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // This is an alternate method to check for prime

    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    bool flag =0;

    for(int i=2; i<=sqrt(num); i++){
            if(num%i==0){
                flag = 1;
                cout<<"Non Prime"<<endl;
            }
    }
    if(flag==0){
        cout<<"Prime Number"<<endl;
    }
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    int sum=0;
    int cube;
    int Original_num = num;
    while(num>0){
        int lastDigit = num%10;
        cube = pow(lastDigit, 3);
        sum+=cube;
        num = num/10;
    }
    if(sum==Original_num){
        cout<<"This is an Armstrong Number"<<endl;
    }
    else{
        cout<<"This is not an Armstrong Number"<<endl;
    }

    return 0;
}
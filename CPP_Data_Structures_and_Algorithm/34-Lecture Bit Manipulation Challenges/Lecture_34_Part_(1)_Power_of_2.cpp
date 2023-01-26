// Write a program to check if the given number is divisible by 2?

#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

bool IsPower2(int n){
    return (n && !(n & (n-1)));
}

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    cout<<IsPower2(n)<<endl;
    return 0;
}
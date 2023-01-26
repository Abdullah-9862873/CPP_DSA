/*
Write a program to find a unique number in an array where all numbers
except one are present twice
*/

#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;

int Unique(int arr[], int n){
    int xorsum=0;
    for(int i=0; i<=n-1; i++){
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    cout<<Unique(arr, n)<<endl;

    return 0;
}
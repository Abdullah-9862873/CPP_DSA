/*
Write a program to find the Unique number in an array where all the
numbers except one are present thrice?
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int GetBit(int n, int position){
    if((n & (1<<position)) != 0){
        return 1;
    }
    else{
        return 0;
    }
}

int SetBit(int n, int position){
    return (n | (1<<position));
}

int Unique(int arr[], int n){
    int result=0;
    for(int i=0; i<=64-1; i++){
        int sum=0;
        for(int j=0; j<=n-1; j++){
            if(GetBit(arr[j], i)){
                sum++;
            }
        }
        if(sum%3 !=0){
            result = SetBit(result, i);
        }
    }
    return result;
}

int main(){
    int arr[] = {1, 2, 3, 3, 2, 1, 1, 2, 3, 5};
    cout<<Unique(arr, 10);

    return 0;
}
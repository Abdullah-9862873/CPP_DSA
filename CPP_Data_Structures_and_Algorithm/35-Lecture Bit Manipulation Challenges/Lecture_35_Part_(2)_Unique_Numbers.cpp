/*
Write a program to find TWO unique number in an array where all numbers
except one are present twice
*/

#include<iostream>
using namespace std;

int SETBIT(int n, int pos){
    return ((n & (1<<pos))!= 0); 
}

void Unique(int arr[], int n){
    int xorsum = 0;
    for(int i=0; i<=n-1; i++){
        xorsum = xorsum^arr[i];
    }
    int tempxor = xorsum;
    int pos=0;
    int setBit=0;
    while(setBit!=1){
        setBit = xorsum & 1;
        pos++;
        xorsum = xorsum>>1;
    }
    int newxor=0;
    for(int i=0; i<=n-1; i++){
        if(SETBIT(arr[i], pos-1)){
            newxor = newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
}


int main(){
    int arr[] = {1, 2, 3, 1, 2, 3, 5, 7};

    Unique(arr, 8);
    return 0;
}
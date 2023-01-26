#include<iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;
// Get bit is used to acquire the bit at particular position
// Set Bit is used to set 1 bit at the particular position


void DecimalToBinary(int n){
    vector<int> bit_vector;
    while(n>0){
        bit_vector.push_back(n%2);
        n=n/2;
    }

    int s =bit_vector.size();
    for(int i=s-1; i>=0; i--){
        cout<<bit_vector.at(i);
    }
    
}

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

int main(){
    // Get Bit
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int position;
    cout<<"Enter the position: "<<endl;
    cin>>position;

    // cout<<GetBit(n, position);
    cout<<"The bit before it was set was: "<<endl;
    cout<<GetBit(n, position)<<endl;


    cout<<">>>>>>>>>Altering that bit<<<<<<<<<<<"<<endl;
    cout<<"Given number in bits are: "<<endl;
    DecimalToBinary(n);
    cout<<endl;
    cout<<"New value becomes: "<<endl;
    cout<<SetBit(n, position)<<endl;

    int newVal = SetBit(n, position);   
    cout<<"The new bit value of new number is: "<<endl;
    DecimalToBinary(newVal);

    return 0;
}
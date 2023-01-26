#include<iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;

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

int ClearBit(int n, int position){
    int one_complement = ~(1<<position);
    return n & one_complement;
}

int UpdateBit(int n, int position, int value){
    //clear bit
    int one_complement = ~(1<<position);
    n = n & one_complement;
    // set bit with the value
    int val = n | (value<<position);
    return val;
}

int main(){
    int n, position, value;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<"Enter the value of position: "<<endl;
    cin>>position;
    cout<<"Enter the value you want to add to that position 1 or 0: "<<endl;
    cin>>value;


    cout<<GetBit(n, position)<<endl;

    cout<<"Old binary value: "<<endl;
    DecimalToBinary(n);
    cout<<endl;

    cout<<UpdateBit(n, position, value);
    cout<<endl;

    cout<<"New binary value: "<<endl;
    DecimalToBinary(UpdateBit(n, position, value));
    cout<<endl;


    return 0;
}
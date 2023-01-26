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

int main(){
    int n, position;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    cout<<"Enter the position: "<<endl;
    cin>>position;

    cout<<"Given number is: "<<n<<endl;
    cout<<"Given number is binary bits is: "<<endl;
    DecimalToBinary(n);

    cout<<"The number after clearning the bit on that position is: "<<endl;
    cout<<ClearBit(n, position)<<endl;

    cout<<"new number in binary bits: "<<endl;
    DecimalToBinary(ClearBit(n, position));


    return 0;
}
#include<iostream>
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

int main(){
    int num;
    cout<<"Enter the Decimal number: "<<endl;
    cin>>num;

    DecimalToBinary(num);

    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void DecimalToOctal(int n){
    vector<int> bit_vector;
    while(n>0){
        bit_vector.push_back(n%8);
        n=n/8;
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

    DecimalToOctal(num);

    return 0;
}
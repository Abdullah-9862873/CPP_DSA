#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void DecimalToHexaDecimal(int n){
    char HexToDecimal[100];

    int i=0;
    while(n>0){
        int rem = n%16;

        if(rem>=0 && rem<=9){
            HexToDecimal[i] = rem + 48;
            i++;
        }
        else if(rem>=10 && rem<=15){
            HexToDecimal[i] = rem + 55;
            i++;
        }
        n = n/16;
    }
    for(int j=i-1; j>=0; j--){
        cout<<HexToDecimal[j];
    }
}

int main(){
    int num;
    cout<<"Enter the decimal number: "<<endl;
    cin>>num;

    DecimalToHexaDecimal(num);

    return 0;
}
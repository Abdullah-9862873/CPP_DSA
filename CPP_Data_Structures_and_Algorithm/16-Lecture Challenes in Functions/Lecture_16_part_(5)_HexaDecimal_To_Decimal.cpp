#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int HexaDecimalToDecimal(string n){
    int x=1;
    int ans=0;
    int s=n.size();
    for(int i=s-1; i>=0; i--){
        if(n[i] >= '0' && n[i] <='9'){
            ans = ans + x*(n[i] - '0');
        }
        else if(n[i] >= 'A' && n[i] <='F'){
            ans = ans + x*(n[i] -'A' +10);
        }
        x*=16;
    }
    return ans;
}
int main(){
    string num;
    cout<<"Enter the HexaDecimal number: "<<endl;
    cin>>num;

    cout<<HexaDecimalToDecimal(num)<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int BinaryToDecimal(int num){
    int x = 1;
    int ans=0;
    while(num>0){
        int lastDigit = num%10;
        ans = ans + (lastDigit * x);
        x = x*2;
        num = num/10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the Binary Number: "<<endl;
    cin>>n;

    cout<<BinaryToDecimal(n);

    return 0;
}
#include<iostream>
using namespace std;

int OctalToDecimal(int num){
    int x=1;
    int ans=0;
    while(num>0){
        int lastDigit = num%10;
        ans = ans + lastDigit*x;
        x = x*8;
        num = num/10;
    }
    return ans;
}

int main(){
    int number;
    cout<<"Enter the Octal number: "<<endl;
    cin>>number;

    cout<<OctalToDecimal(number);

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    int reverse=0;
    while(num>0){
        int lastDigit = num%10;
        reverse = reverse*10 + lastDigit;
        num = num/10;
    }
    cout<<reverse<<endl;
    return 0;
}
// Input a number n and tell whether it
// is equal to greater than or less than 10

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number you want to compare: "<<endl;
    cin>>num;

    if(num==10){
        cout<<"This number is equal to 10"<<endl;
    }
    else{
        if(num>10){
            cout<<"The number is greater than 10"<<endl;
        }
        else{
            cout<<"The number is less than 10"<<endl;
        }
    }

    return 0;
}
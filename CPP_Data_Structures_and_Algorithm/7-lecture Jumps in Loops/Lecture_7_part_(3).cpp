#include<iostream>
using namespace std;

int main(){
    //Check if the number is prime or not
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    int i;
    for(i=2; i<n; i++){
        if(n%i==0){
            cout<<"Non-Prime"<<endl;
            break;
        }
    }
    if(i==n){
    cout<<"Prime number"<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    // Sum of only positive numbers

    int num;
    cin>>num;

    int sum = 0;
    while(num>0){
        sum= sum + num;
        cout<<"Enter the num: "<<endl;
        cin>>num;
    }

    cout<<"The sum is: "<<sum<<endl;

    return 0;
}
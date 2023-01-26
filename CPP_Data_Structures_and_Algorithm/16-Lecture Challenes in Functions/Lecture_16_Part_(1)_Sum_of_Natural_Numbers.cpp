#include<iostream>
using namespace std;

int sum(int num){
    int sum = 0;
    for(int i=1; i<=num; i++){
        sum = sum + i;
    }
    return sum;
}

int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    cout<<sum(num);

    return 0;
}
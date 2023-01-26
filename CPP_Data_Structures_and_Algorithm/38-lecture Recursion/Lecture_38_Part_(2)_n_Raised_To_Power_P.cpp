#include<iostream>
using namespace std;

int Power(int n, int power){
    if(power==0){
        return 1;
    }
    int ans = n * Power(n, power-1);
    return ans;
}

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int power;
    cout<<"Enter the power: "<<endl;
    cin>>power;

    cout<<Power(n, power);

    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPerfect2(int n){
    int sum = 1;

    for(int i=2; i<sqrt(n); i++){
        if(n%i==0){
            if(i == n/i){
                sum += i;
            }else{
                sum += i + n/i;
            }
        }
    }

    if(sum == n && n!= 1){
        return true;
    }
    else{
        return false;
    }
}
// Alternate way to find perfect number
bool isPerfect(int n){
    int div;
    int sum = 0;

    for(int i=1; i<n; i++){
        div = n%i;

        if(div == 0){
            sum = sum+i;        
        }
    }
    

    if(sum == n ){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    cout<<isPerfect(28)<<endl;
    cout<<isPerfect(2)<<endl;
    cout<<isPerfect(3)<<endl;
    cout<<isPerfect(6)<<endl;
    cout<<isPerfect(496)<<endl;
    cout<<isPerfect(99)<<endl;
    cout<<isPerfect(8128)<<endl;
    cout<<isPerfect(24)<<endl;

    return 0;
}
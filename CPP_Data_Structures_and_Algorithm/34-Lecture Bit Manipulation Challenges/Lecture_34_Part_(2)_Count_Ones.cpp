// Write a program to count the number of ones in the binary
//    representation of a number

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int countOnes(int n){
    int count = 0;
    while(n!=0){
        n = n & (n-1);
        count++;
    }
    return count;
}

int main(){
    int n; 
    cout<<"Enter the number: "<<endl;
    cin>>n;

    cout<<countOnes(n)<<endl;
    return 0;
}
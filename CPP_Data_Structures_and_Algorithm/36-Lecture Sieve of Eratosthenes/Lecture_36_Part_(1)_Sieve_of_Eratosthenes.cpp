#include<iostream>
using namespace std;

void Sieve_of_Eratosthenes(int n){
    int Prime[n+1]={0};
    for(int i=2; i<=n; i++){
        if(Prime[i]==0){
            for(int j=i*i; j<=n; j+=i){
                Prime[j]=1;
            }
        }
    }

    for(int i=2; i<=n; i++){
        if(Prime[i]==0){
            cout<<i<<" ";
        }
    }cout<<endl;
}

int main(){
    int n; 
    cout<<"Enter the number: "<<endl;
    cin>>n;

    Sieve_of_Eratosthenes(n);

    return 0;
}
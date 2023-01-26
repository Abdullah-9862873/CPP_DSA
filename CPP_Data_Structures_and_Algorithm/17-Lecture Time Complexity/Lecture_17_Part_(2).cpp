// How many times loop is running 

#include<iostream>
using namespace std;

int main(){
    int count=0;
    int n=3;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
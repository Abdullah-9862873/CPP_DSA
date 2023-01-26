#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<=5; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    int i=0;
    while(i<=5){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;

    int j=0;
    do{
        cout<<j<<" ";
        j++;
    }while(j<=5);
    cout<<endl;

    return 0;
}
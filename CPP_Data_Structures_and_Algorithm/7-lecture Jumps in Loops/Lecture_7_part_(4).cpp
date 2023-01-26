#include<iostream>
using namespace std;

int main(){
    // Print prime numbers from a to b

    int a, b;
    cin>>a>>b;
    int counter = 0;

    for(int num=a; num<=b; num++){
        int i;
        for(i=2; i<num; i++){
            if(num%i==0){
                break;
            }
        }
        if(num==i){
        cout<<num<<endl;
        counter++;
        }
    }
    cout<<"The number of prime numbers are: "<<counter<<endl;
    

    return 0;
}
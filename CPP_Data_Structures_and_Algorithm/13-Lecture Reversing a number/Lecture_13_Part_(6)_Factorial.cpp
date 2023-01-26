#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number: "<<endl;
    cin>>number;

    int factorial=1;
    if(number<0){
        cout<<"Sorry can't find the factorial of a negative number!"<<endl;
    }
    else if(number==1 || number==0){
        factorial = 1;
        cout<<"Factorial of "<<number<<" is "<<factorial<<endl;
    }
    else{
    for(int i=2; i<=number; i++){
        factorial = factorial*i;
    }
        cout<<"Factorial of "<<number<<" is "<<factorial<<endl;
    }

    return 0;
}
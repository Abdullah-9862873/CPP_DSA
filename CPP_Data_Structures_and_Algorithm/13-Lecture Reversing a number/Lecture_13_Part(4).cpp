// Write a program to print all the factors of a number!

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    int factors=0;
    cout<<"The factors of a number are: "<<endl;
        for(int i=1; i<=num; i++){
            if(num%i==0){
                cout<<i<<"  ";
            }
        }
    return 0;
}
/*
    This will print the 0th element of array and this
     is constant variable
    
    As arr already stores the 
     address of array and that is why we use indexing
    
    You can also print using arr without any pointer
    But using arr++ is illegal as arr is constant value
*/

#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40};
    cout<<*arr<<endl;


    int *ptr = arr;
    for(int i=0; i<=4-1; i++){
        cout<<*ptr<<endl;
        ptr++;
    }

    cout<<">>>>>>>>>>>><<<<<<<<<<<<<<<<"<<endl;
    for(int i=0; i<=4-1; i++){
        cout<<*(arr+i)<<endl;
    }


    return 0;
}
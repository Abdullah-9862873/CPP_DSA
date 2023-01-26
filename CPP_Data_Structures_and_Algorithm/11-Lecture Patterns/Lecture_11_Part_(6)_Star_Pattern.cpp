/*
   *
  ***
 *****
*******
*******
 *****
  ***
   *

    For n=4;
Row -----> 1 to num
Col -----> It has two loops 
                One for space and that is (num-row_no)
                Second is for stars and which are odd so (2 *i -1)
    
*/
 


#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    for(int i=1; i<=num; i++){
        for(int j=1; j<=num-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=num; i>=1; i--){
        for(int j=1; j<=num-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
/*
Print this pattern 
    * * * * *
   * * * * *
  * * * * * 
 * * * * *
* * * * *

*/
//  This is for i=5
// Row ----> 1 to num
// Col ----> It has two loops:
//                One is for spaces and that is (num-i)
//                 Two is for stars and that is (1 to num)

#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    for(int i=1; i<=num; i++){
        for(int j=1; j<=num-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=num; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

// Row ---> 1 to n
// Col ---> 1 to row_no
// Element--> row_no + col_no =Even then type 1 else 0

#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0){
                cout<<"1"<<" ";
            }
            else{
            cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
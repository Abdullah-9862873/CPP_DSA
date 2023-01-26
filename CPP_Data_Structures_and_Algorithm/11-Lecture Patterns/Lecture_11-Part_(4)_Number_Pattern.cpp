/*
For n=5
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

Row ---> 1 to num
Col ----> It has two loop
                One for spaces that is (num-row_no)
                Second for element and that is (1 to row_no)
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
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/*
    1
   2 1 2
  3 2 1 2 3
 4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5 


Row ----> 1 to num
Col-----> It has three parts
            One is Space and that is (num-i)
            Second is for Element... It is in decreasing order from
                (num-i) to n and we do (k=row_no) and (k--)
            Third is for Element... It is in incresing order from
                num to num+i-1 and we do (k=2) and (k++)
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    for(int i=1; i<=num; i++){
        int j;
        for(j=1; j<=num-i; j++){
            cout<<" ";
        }
        int k=i;
        for(; j<=num; j++){
            cout<<k--<<" ";
        }
        k=2;
        for(; j<=num+i-1; j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
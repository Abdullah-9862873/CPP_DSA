#include<iostream>
using namespace std;

int main(){
    int i=1, j=2, k=3;

   //     1(i=0) - 2(j=1) - 3(k=2) = -4
    int m = i-- - j-- - k--;
    cout<<m<<endl;
    cout<<"The value of i becomes: "<<i<<endl;
    cout<<"The value of j becomes: "<<j<<endl;
    cout<<"The value of k becomes: "<<k<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int i=10, j=20, k;

//      10(i=9) - 9(i=10) + 19(j=19) - 20(j=20) + 9(i=9) - 20(j=19) + 10(i=10) - 19(j=20) = -20
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    cout<<"The value of k becomes: "<<k<<endl;
    cout<<"The value of i becomes: "<<i<<endl;
    cout<<"The value of j becomes: "<<j<<endl;
    return 0;
}
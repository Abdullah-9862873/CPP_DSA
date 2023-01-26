#include<iostream>
using namespace std;

int main(){
    int i=1, j=2, k;

      //1+2+1(i=2)+2(j=3)+3(i=3)+4(j=4)   
    k = i + j + i++ + j++ + ++i + ++j;
    cout<<k<<endl;
    cout<<"The value of i becomes: "<<i<<endl;
    cout<<"The value of j becomes: "<<j<<endl;


    return 0;
}
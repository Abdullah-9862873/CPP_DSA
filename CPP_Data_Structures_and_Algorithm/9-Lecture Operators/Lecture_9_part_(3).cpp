#include<iostream>
using namespace std;

int main(){
    int i=0;

    // 0(i=1) - 0(i=0) + 1(i=1) - 1(i=0)
    i = i++ - --i + ++i - i--;
    cout<<i;

    return 0;
}
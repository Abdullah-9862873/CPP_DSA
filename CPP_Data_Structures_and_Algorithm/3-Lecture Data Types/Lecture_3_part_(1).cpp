#include<iostream>
using namespace std;

int main(){
    int ascii = 'a';
    cout<<"The ascii value of a is: "<<ascii<<endl;

    int b;
    cout<<"The size of this integer is: "<<sizeof(b)<<endl;

    char c;
    cout<<"The size of this character is: "<<sizeof(c)<<endl;

    float f;
    cout<<"The size of this float is: "<<sizeof(f)<<endl;

    bool d;
    cout<<"The size of this bool is: "<<sizeof(d)<<endl;
    
    short int si;
    cout<<"The size of short int is: "<<sizeof(si)<<endl;

    long int li;
    cout<<"The size of long int is: "<<sizeof(li)<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    // Take input from user till he don't enter any negative number

    int n;
    cin>>n;

    do{
        cout<<n<<endl;
        cin>>n;
    }while(n>0);

    return 0;
}
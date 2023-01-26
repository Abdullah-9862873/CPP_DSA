#include<iostream> // Preprocessor directive and header
using namespace std;

int main(){
    // Sum of first  natural numbers

    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    int sum = 0;
    for(int i=0; i<=n; i++){
        sum = sum+i;
    }

    cout<<"The sum is: "<<sum<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0; i<=n-1; i++){
        sum = sum + arr[i];
    }
    cout<<"The sum of array is: "<<sum<<endl;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    int arr[n];
    int i;
    for(i=0; i<=n-1; i++){
        cout<<"Enter the value of "<<i+1<<" array"<<endl;
        cin>>arr[i];
    }
    cout<<"The array is: { ";
    for(i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"}";

    return 0;
}
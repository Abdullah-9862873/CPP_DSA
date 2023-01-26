#include<iostream>
using namespace std;

bool sorted(int arr[], int n){
    if(n==1){           // Last element
        return true;
    }
    int restArray = sorted(arr+1, n-1);
    return (arr[0]<arr[1] && restArray);
}

int main(){
    int n;
    cout<<"Enter the size of n: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    cout<<sorted(arr, n)<<endl;

    return 0;
}
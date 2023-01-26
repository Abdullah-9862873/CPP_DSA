// Tip: You can also use max(maxNo, arr[i]) to calculate maximum

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

    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i=0; i<=n-1; i++){
        if(arr[i] > maxNo){
            maxNo = arr[i];
        }
        if(arr[i] < minNo){
            minNo = arr[i];
        }
    }
    cout<<"The maximum of array is: "<<maxNo<<endl;
    cout<<"The minimum of array is: "<<minNo<<endl;
}
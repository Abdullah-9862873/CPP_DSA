// Find the minimum element in the array and swap it with the beginning

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
    for(int i=0; i<=n-2; i++){
        for(int j=i+1; j<=n-1; j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    cout<<"The sorted elements are: ";
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
// Repeatedly swap two adjacent elements if they are in wrong order

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

    int counter = 1;
    while(counter<=n-1){
        for(int i=0; i<n-counter; i++){
            if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            }
        }
        counter++;
    }

    cout<<"The sorted elements are: "<<endl;
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
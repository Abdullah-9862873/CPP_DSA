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


    for(int i=0; i<=n-1; i++){
        for(int j=i; j<=n-1; j++){
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
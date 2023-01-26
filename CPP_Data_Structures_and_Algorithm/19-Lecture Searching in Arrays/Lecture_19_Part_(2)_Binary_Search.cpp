//Search 27 in {8 10 12 21 27 34 42}

#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    while(s<=e){
    int mid=(s+e)/2;
        if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]==key){
            return mid;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of arrays: "<<endl;
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key you want to find: "<<endl;
    cin>>key;

    cout<<"The index of the key is: "<<endl;
    cout<<BinarySearch(arr, n, key);

    return 0;
}
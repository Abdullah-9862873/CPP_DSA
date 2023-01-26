#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i){
    int size = n;
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if(l<size && arr[l] > arr[largest]){
        largest = l;
    }
    if(r<size && arr[r] > arr[largest]){
        largest = r;
    }

    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildheap(int arr[], int n){

    for(int i = n/2-1; i>=0; i--){
        heapify(arr, n, i);
    }
}

void printheap(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {40, 10, 30, 50, 60, 15};

    int n = sizeof(arr)/sizeof(arr[0]);

    buildheap(arr, n);
    printheap(arr, n);

    return 0;
}
#include<iostream>
using namespace std;

int merge(int arr[], int l, int mid, int r){
    int inv = 0;
    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i] = arr[l+i];
    }
    for(int j=0; j<n2; j++){
        b[j] = arr[mid+1+j];
    }

    int i=0;
    int j=0; 
    int k=l;
    while(i<n1 && j<n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            k++;
            i++;
        }
        else{
            arr[k] = b[j];
            inv += n1 - i;
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k] = a[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k] = b[j];
        k++;
        j++;
    }
    return inv;
}

int mergesort(int arr[], int l, int r){
    int inv = 0;
    if(l<r){
        int mid=(l+r)/2;
        inv += mergesort(arr, l, mid);
        inv += mergesort(arr, mid+1, r);
        inv += merge(arr, l, mid, r);
    }
    return inv;
}

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<mergesort(arr, 0, n-1)<<endl;
    return 0;
}
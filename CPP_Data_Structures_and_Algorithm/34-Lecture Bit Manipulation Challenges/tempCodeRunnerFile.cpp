// Write a program to generate all the possible subsets of a set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//i<size can be written as 1<<size

void Subsets(int arr[], int size){
    cout<<"{}";
    for(int i=0; i<(1<<size); i++){
        for(int j=0; j<=size-1; j++){
            if(i & (1<<j)){
                cout<<"{"<<arr[j]<<"}";
            }
            
        }
            cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    int count_subset = pow(2, n);

    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    cout<<"The number of subsets of given set are: "<<count_subset<<endl;
    cout<<"The subsets of the given set are: "<<endl;
    Subsets(arr, n);
    return 0;
}
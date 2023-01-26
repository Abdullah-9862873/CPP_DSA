/*
input = {4, -4, 6, -6, 10, -11, 12}
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n){
    int currSum=0;
    int maxSum=INT_MIN;
    for(int i=0; i<=n-1; i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
            maxSum=max(maxSum, currSum);
    }
    return maxSum;
}

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<=n-1; i++){
        cin>>arr[i]; 
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr, n);
    int totalSum=0;

    for(int i=0; i<=n-1; i++){
        totalSum+=arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalSum + kadane(arr, n);

    cout<<max(wrapsum, nonwrapsum)<<endl;

    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the values of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    long long max = 0;
    long long min = 0;

    for(int i=0; i<n/2; i++){
        max += arr[i+n/2] - arr[i];
        min += arr[2*i+1] - arr[2*i];
    }

    cout<<"Minimum is: "<<min<<endl;
    cout<<"Maximum is: "<<max<<endl;

    return 0;
}
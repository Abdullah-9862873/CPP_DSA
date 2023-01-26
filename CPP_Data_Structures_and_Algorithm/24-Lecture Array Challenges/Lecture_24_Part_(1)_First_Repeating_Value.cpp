#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the values of array: "<<endl;
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    const int N = 1e6 + 2;
    int idx[N];
    for(int i=0; i<=N-1; i++){
        idx[i] = -1;
    }
    int minidx = INT_MAX;
    for(int i=0; i<=n-1; i++){
        if(idx[arr[i]] != -1){
            minidx=min(minidx, idx[arr[i]]);
        }
        else{
            idx[arr[i]] = i;
        }
    }

    // In case every value is different no repetetion so
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        // Here we are getting index 1 less so we have to add it
        cout<<minidx+1<<endl;
    }
    return 0;
}
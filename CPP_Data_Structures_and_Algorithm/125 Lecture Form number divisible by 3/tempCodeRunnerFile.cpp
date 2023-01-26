/*
A number is divisible by 3 if and only if the sum of its
     elements is divisible by 3
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void computeNumberFromSubarray(vector<int> arr, int n, int k){
    pair<int, int> ans;
    int sum = 0;

    for(int i=0; i<k; i++){
        sum += arr[i];
    }

    bool found = false;

    if(sum%3 == 0){
        ans = make_pair(0, k-1);
        found = true;
    }

    for(int j=k; j<n; j++){
        if(found){
            break;
        }
        sum += arr[j];
        sum -= arr[j-k];

        if(sum%3 == 0){
            ans = make_pair(j-k+1, j);
            found = true;
        }
    }

    if(!found){
        ans = make_pair(-1, 0);
    }
    if(ans.first == -1){
        cout<<"No such subarray exisit"<<endl;
    }
    else{
        for(int i=ans.first; i<=ans.second; i++){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    vector<int> arr = {84, 23, 45, 12, 56 ,82};
    int n = 6;
    int k = 3;

    computeNumberFromSubarray(arr, n, k);
    return 0;
}
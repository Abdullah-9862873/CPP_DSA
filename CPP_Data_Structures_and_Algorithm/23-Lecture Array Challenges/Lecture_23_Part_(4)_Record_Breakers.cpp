#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[n+1];
    arr[n] = -1;        //Last value which user will not enter
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    // If there are only one day which is first and last day so
    //  That day is record breaking day

    if(n==1){
        cout<<"1"<<endl;
        return 0;       //To exit the code
    }
    int ans = 0;
    int mx = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            ans++;
        }
        mx = max(mx, arr[i]);
    }
    cout<<"The answer is: "<<ans<<endl;
    

    return 0;
}
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

    priority_queue<int, vector<int>, greater<int> > minheap;
    for(int i=0; i<n; i++){
        minheap.push(arr[i]);
    }

    int ans = 0;
    while(minheap.size() > 1){
        int first = minheap.top();
        minheap.pop();
        int second = minheap.top();
        minheap.pop();

        ans += first + second;
        minheap.push(first + second);
    }

    cout<<ans<<endl;


    return 0;
}
/*
Input--->

Enter the size of array: 
4
Enter the values of array: 
5 2 4 7

Output--->
35
*/
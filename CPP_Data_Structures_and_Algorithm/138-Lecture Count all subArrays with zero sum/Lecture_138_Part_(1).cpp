#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cout<<endl;
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the value of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    map<int, int> mp;
    int count = 0;

    int sum = 0;

    for(int i=0; i<arr.size(); i++){
        sum += arr[i];
        if(sum == 0){
            count++;
        } 
        else{
            if(mp.find(sum)!=mp.end()){
                //Found the element in the map
                count += mp[sum];
                mp[sum] = mp[sum]+1;
            }else{
                mp[sum] = 1;
            }
        }
    }

    cout<<count<<endl;


    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cout<<"Enter the size: \n";
    cin>>n;

    cout<<"Enter the value of k: "<<endl;
    cin>>k;

    vector<int> arr(n);

    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    map<int, int> freq;
    for(int i=0; i<arr.size(); i++){
        freq[arr[i]]++;
    }

    vector<pair<int, int>> ans;

    // To push the elements in the ans vector with freq as first argument and value as second argument
    map<int, int> :: iterator it;
    for(it = freq.begin(); it!=freq.end(); it++){
        if(it->second != 0){
            pair<int, int> p;
            p.first = it->second;
            p.second = it->first;
            ans.push_back(p);
        }
    }    

    sort(ans.begin(), ans.end(), greater<pair<int, int>>());
    
    // The value having greater frequency is in top now.... Now we have to print the answer
    // But the printing should be like the value which has most frequency must be written first
    vector<pair<int,int>> :: iterator it2;
    int count = 0;
    for(it2=ans.begin(); it2!=ans.end(); it2++){
        count++;
        if(count <= k){
            cout<<it2->second<<" "<<it2->first<<endl;
        }
    } 
    return 0;
}
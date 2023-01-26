#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
int main(){
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;

    vector<int> a(n);
    cout<<"Enter the value of vector: "<<endl;
    for(auto &i:a){
        cin>>i;
    }

    sort(a.begin(), a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(), a.end()));

    for(auto x: ans){  // x from 0 to ans
        for(auto y: x){     // y from 0 to x
            cout<<y<<" ";
        }cout<<endl;
    }

    return 0;
}
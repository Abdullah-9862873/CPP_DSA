#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size: "<<endl;
    cin>>size;

    vector<int> vect;
    int val_of_vect;
    for(int i=0; i<size; i++){
        cin>>val_of_vect;
        vect.push_back(val_of_vect);
    }

    // You can also take input as
    // for(auto &i: size){
    //     cin>>i;
    // }
    // Printing Output
    for(auto x:vect){
        cout<<x<<" ";
    }


    return 0;
}
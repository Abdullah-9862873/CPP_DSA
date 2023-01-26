// Ordered Sets

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int, greater<int>> s;
    s.insert(1);
    s.insert(3);
    s.insert(5);
    s.insert(7);
    
    for(auto i: s){
        cout<< i<<" ";
    }
    cout<<endl;

    
    return 0;
}
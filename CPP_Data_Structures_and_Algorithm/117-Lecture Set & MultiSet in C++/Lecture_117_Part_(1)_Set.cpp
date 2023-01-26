/*
Sets--->

Sets are of two types---->Ordered Sets
                    -----> UnOrdered Sets

        Ordered Sets--->Unique Elements
                    --->Implemented using Balaned BST
                    ---> No Random Access allowed... You cannot access to 
                            ith element directly... You have to traverse fully
                    ---> Elements are in sorted order
*/

/*
    set<data_type> name;

    s.end()---> return the value that is after the 
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Insertion and Print
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(4);

    // Method 1
    for(auto i: s){
        cout<<i<<" ";
    }
    cout<<endl;

    // Method 2
    for(auto i=s.begin(); i != s.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    // To print in reverse
    for(auto i=s.rbegin(); i!=s.rend(); i++){
        cout<<*i<<" ";
    }

    return 0;
}
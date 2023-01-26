/*
Unordered Set---->

1--->They have unique elements
2---> Implemented using Hashing
3---> They are not in sorted order
4---> Random access to ith element in not possible directly you have to traverse
        it fully to do so
*/

/*
    The advatage of using it is time complexity over Ordered Set

    Insertion----> O(1) in avg case, but in worst case O(N);
    Deletion----> O(1) in avg case, but in worst case O(N);
    No lower bound and upper bound
*/


#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for(auto i: s){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
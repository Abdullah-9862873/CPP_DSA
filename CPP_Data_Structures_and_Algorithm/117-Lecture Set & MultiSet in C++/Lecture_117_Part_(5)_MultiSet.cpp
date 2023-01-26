/*
Multisets are also the sets that have the following properties

1---> They can have duplicate values
2---> They cannot access random ith value directly for that they have to traverse 
        from the beginning
3---> They are in sorted order
4---> Implemented using balanced BST



Erase in the multiset delete all the occurences of that particular number

But you can use find to delete the first occurence only

Time complexity---->

    Insertion----> O(LogN)
    Deletion----> O(LogN)
    Lower/Upper bound ----> O(Log N)
    print time----> O(N LogN)---> because finding take
                                     Log N time and print take N
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(5);

    for(auto i: s){
        cout<<i<<" ";
    }
    cout<<endl;

    // Erase first 3
    s.erase(s.find(3));
    for(auto i: s){
        cout<<i<<" ";
    }
    cout<<endl;

    // Erase
    s.erase(3);
    for(auto i: s){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
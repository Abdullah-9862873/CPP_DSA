/*
STL ---> STL stands for Standard Template Library. It is a library in c++ that allows the programmer to 
            use containers, iterators, algorithms and fuctions.

Maps---> Insertion is done in O(Log n)
         Deletion is done in O(Log n)
         Accessing is done in O(Log n)
         Implemented using Red Black Trees

Unordered Maps---> Insertion is done in O(1) on average
                    Deletion is done in O(n) on worst case and O(1) on average
                    Accessing is done in O(1) on average
                    Implemented using Hash Tables


Map is used to store elements as key,value pairs in sorted order.
Unordered_map is used to store elements as key,value pairs in non-sorted order.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> mp;
    mp[8] = 2;

    cout<<mp[8];
    cout<<endl;

    unordered_map<int, int> ump;
    ump[8] = 1;
    cout<<ump[8]<<endl;

    return 0;
}
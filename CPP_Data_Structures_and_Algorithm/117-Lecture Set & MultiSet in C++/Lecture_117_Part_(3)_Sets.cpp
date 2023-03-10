// Ordered Sets

/*
upper bound return first element which is >value. If not, return end().
lower bound return first element which is ≥value. If not, return end().
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(5);

    cout<<*s.lower_bound(2)<<endl;
    cout<<*s.upper_bound(2)<<endl;

    cout<<*s.lower_bound(3)<<endl;
    cout<<*s.upper_bound(3)<<endl;

    cout<<(s.upper_bound(5) == s.end())<<endl;

    return 0;
}
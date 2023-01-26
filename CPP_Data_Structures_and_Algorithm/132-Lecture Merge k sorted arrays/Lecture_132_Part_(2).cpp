#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct comparator{
    bool operator()(int &a, int &b){
        return a > b;
    }
};


int main(){
    priority_queue<int, vector<int>, comparator> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);

    while(!pq.empty()){
        int curr = pq.top();
        pq.pop();
        cout<<curr<<endl;
    }


    return 0;
}

// This is how the min heap is working
// The coming element must be less than the previous
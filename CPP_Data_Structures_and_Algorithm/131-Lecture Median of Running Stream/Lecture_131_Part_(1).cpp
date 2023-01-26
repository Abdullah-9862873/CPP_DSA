#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// By default priority queue is in non increasing order so in order to make it in increasing order queue we use greater int

priority_queue<int, vector<int>, greater<int>> pqmin;   // To make it in increasing order
priority_queue<int, vector<int>> pqmax;

void insert(int x){
    if(pqmax.size() == pqmin.size()){
        if(pqmax.size() == 0){
            pqmax.push(x);
            return;
        }

        if(x < pqmax.top()){
            pqmax.push(x);
        }
        else{
            pqmin.push(x);
        }
    }
    else{
        //Case 1: if pqmax.size() > pqmin.size()
        //Case 2: if pqmin.size() > pqmax.size()

        if(pqmax.size() > pqmin.size()){
            if(x >= pqmax.top()){
                pqmin.push(x);
            }
            else{
                int temp = pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }
        }
        else{
            if(x <= pqmin.top()){
                pqmax.push(x);
            }
            else{
                int temp = pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x);
            }
        }
    }
}

double findMedian(){
    if(pqmax.size() == pqmin.size()){
        return ((pqmax.top() + pqmin.top())/2.0);
    }
    else if(pqmax.size() > pqmin.size()){
        return pqmax.top();
    }
    else{
        return pqmin.top();
    }
}

int main(){
    insert(10);
    cout<<findMedian()<<endl;
    insert(15);
    cout<<findMedian()<<endl;
    insert(21);
    cout<<findMedian()<<endl;
    insert(30);
    cout<<findMedian()<<endl;
    insert(18);
    cout<<findMedian()<<endl;
    insert(19);
    cout<<findMedian()<<endl;


    return 0;
}
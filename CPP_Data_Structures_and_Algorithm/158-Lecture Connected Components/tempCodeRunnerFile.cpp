/*
There are N friends numbered from 0 to N-1...You have to choose two persons such that they are not related to each other
You are given information in the form of M pairs(X,Y), i-e there is a link between X friend and Y friend...
Find out the number of ways in which two persons from different groups are choosen...

Example-->
5 friends and two groups-----> 
            1st group---> 0 1 4
            2nd Group---> 2 3

            Find the possible combination such that two persons from same group are not repeated

Approach--->

            0 2
            0 3
            1 2
            1 3
            4 2
            4 3

            There are six possibilities

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adjl;
vector<int> components;
vector<bool> visited;

int get_comp(int idx){
    if(visited[idx]){
        return 0;
    }

    visited[idx] = true;
    int ans = 1;        // Because we have visited one

    vector<int> :: iterator it1;
    for(it1=adjl[idx].begin(); it1!=adjl[idx].end(); it1++){
        if(!visited[*it1]){
            ans += get_comp(*it1);
            visited[*it1] = true;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number of nodes: "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges: "<<endl;
    cin>>m;

    adjl = vector<vector<int>> (n);
    visited = vector<bool> (n, false);
    int answer = 0;


    for(int i=0; i<m; i++){
        int x, y;
        cout<<"Enter the starting and ending vertices of edges: "<<endl;
        cin>>x>>y;

        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }

    for(int i=0; i<n; i++){
        if(!visited[i]){
            components.push_back(get_comp(i));
        }
    }

    cout<<"The number of connected components are given by: "<<endl;
    vector<int> :: iterator it;
    for(it=components.begin(); it!=components.end(); it++){
        answer += *it * (n- *it);
    }
    cout<<(answer)/2;

    // Divided by two so you don't count like 1 to 2 and then 2 to 1... Okay

    return 0;
}
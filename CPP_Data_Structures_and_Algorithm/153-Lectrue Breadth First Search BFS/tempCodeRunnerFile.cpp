#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of  nodes: "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges: "<<endl;
    cin>>m;


    int N = 1e5 + 2;

    bool visited[N];
    // Marking unvisited
    for(int i=0; i<=N; i++){
        visited[i] = 0;
    }

    vector<int> adjl[N];            // Adjacency list

    for(int i=0; i<m; i++){
        int x,y;
        cout<<"Enter the starting and ending node of edges: "<<endl;
        cin>>x>>y;

        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }

    queue<int> q;
    q.push(1);
    visited[1] = true;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        cout<<node<<" ";

        vector<int> :: iterator it;
        for(it=adjl[node].begin(); it!=adjl[node].end(); it++){
            if(!visited[*it]){
                visited[*it] = true;
                q.push(*it);
            }
        }
    }

    return 0;
}
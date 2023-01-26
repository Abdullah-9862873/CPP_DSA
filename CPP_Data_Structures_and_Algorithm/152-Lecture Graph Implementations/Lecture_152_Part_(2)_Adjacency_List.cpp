#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter the number of nodes: "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges: "<<endl;
    cin>>m;

    int N = 1e5 + 2;
    vector<int> adj[N];

    for(int i=0; i<m; i++){
        int x, y;
        cout<<"Enter the starting and ending of edge: "<<endl;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout<<"Adjacency list of above graph is: "<<endl;

    for(int i=1; i<=n; i++){
        cout<<i<<" -> ";
        vector<int> :: iterator it;
        for(it=adj[i].begin(); it!=adj[i].end(); it++){
            cout<< *it<<" ";
        }
        cout<<endl;
    }



    return 0;
}
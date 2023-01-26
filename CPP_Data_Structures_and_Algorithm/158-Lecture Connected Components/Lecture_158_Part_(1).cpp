// Find the number of connected components in the graph and their size
// Every connected graph in a disconnected graph is known as connected component..

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
        cout<<*it<<endl;
    }

    return 0;
}
/*
Input-->

Enter the number of nodes: 
5
Enter the number of edges: 
3
Enter the starting and ending vertices of edges: 
0 1
Enter the starting and ending vertices of edges: 
2 3
Enter the starting and ending vertices of edges: 
0 4

Output--->
The number of connected components are given by: 
3
2
*/
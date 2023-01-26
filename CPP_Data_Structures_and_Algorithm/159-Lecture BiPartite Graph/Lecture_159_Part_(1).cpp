/*
Properties of Bipartite Graph--->

1--->   A bipartite graph is a graph whose vertices can be divided into two disjoint and independent sets U and V, 
        that is every edge connects a vertex in U to one in V.

2--->   The graph does not contain an odd length cycles
3--->   The graph is 2 colorable
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adjl;
vector<bool> visited;
vector<int> col;
bool bipartite = true;

void color(int idx, int curr_col){
    if(col[idx] != -1 && col[idx] != curr_col){
        bipartite = false;
        return;
    }

    col[idx] = curr_col;
    if(visited[idx]){
        return;
    }
    visited[idx] = true;

    for(auto i: adjl[idx]){
        color(i, curr_col xor 1);
    }
}

int main(){

    int n;
    cout<<"Enter the number of vertices: "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges: "<<endl;
    cin>>m;

    adjl = vector<vector<int>> (n);
    visited = vector<bool> (n, false);
    col = vector<int> (n, -1);

    for(int i=0; i<m; i++){
        int x, y;
        cout<<"Enter the starting and ending vertices of edges: "<<endl;
        cin>>x>>y;

        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }

    for(int i=0; i<n; i++){
        if(!visited[i]){
            color(i, 0);
        }
    }

    if(bipartite){
        cout<<"Graph is BiPartite"<<endl;
    }else{
        cout<<"Graph is not BiPartite"<<endl;
    }

    return 0;
}
/*
Input-->

Enter the number of vertices: 
4
Enter the number of edges: 
4
Enter the starting and ending vertices of edges: 
0 1
Enter the starting and ending vertices of edges: 
1 2
Enter the starting and ending vertices of edges: 
2 3
Enter the starting and ending vertices of edges: 
3 0

Output-->
Graph is BiPartite
*/
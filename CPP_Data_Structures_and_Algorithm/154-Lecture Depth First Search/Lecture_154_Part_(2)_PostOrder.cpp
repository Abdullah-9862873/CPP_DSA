#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 2;
vector<int> adjl[N];
bool visited[N];

void dfs(int node){
    visited[node] = true;

    // Inorder
    vector<int> :: iterator it;
    for(it=adjl[node].begin(); it!=adjl[node].end(); it++){
        if(!visited[*it]){
            dfs(*it);
        }
    }

    //postOrder
    cout<<node<<" ";
}

int main(){
    int n;
    cout<<"Enter the number of nodes: "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges: "<<endl;
    cin>>m;

    for(int i=0; i<m; i++){
        int x, y;
        cout<<"Enter the starting and ending vertices of edges: "<<endl;
        cin>>x>>y;

        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }

    int node;
    cout<<"Enter the value of node: "<<endl;
    cin>>node;

    dfs(node);
    return 0;
}
/*
Input--->

Enter the number of nodes: 
7
Enter the number of edges: 
7
Enter the starting and ending vertices of edges: 
1 2
Enter the starting and ending vertices of edges: 
1 3
Enter the starting and ending vertices of edges: 
2 4
Enter the starting and ending vertices of edges: 
2 5
Enter the starting and ending vertices of edges: 
2 6
Enter the starting and ending vertices of edges: 
2 7
Enter the starting and ending vertices of edges: 
7 3
Enter the value of node: 
1

Output--->
4 5 6 3 7 2 1 
*/
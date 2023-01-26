#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isCycle(int source, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &stack){
    stack[source] = true;
    if(!visited[source]){
        visited[source] = true;
        vector<int> :: iterator it;
        for(it=adj[source].begin(); it!=adj[source].end(); it++){
            if(!visited[*it] && isCycle(*it, adj, visited, stack)){
                return true;
            }
            if(stack[*it]){
                // Stack mein *it present hai
                return true;
            }
        }
    }
    stack[source] = false;
    return false;
}

int main(){
    int n;
    cout<<"Enter the number of vetices: "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges: "<<endl;
    cin>>m;

    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);

    vector<int> stack(n, 0);
    for(int i=0; i<m; i++){
        int x, y;
        cout<<"Enter the starting and ending vertices of edges: "<<endl;
        cin>>x>>y;

        // Directed Graph
        adj[x].push_back(y);
    }

    bool cycle = false;
    for(int i=0; i<n; i++){
        if(!visited[i] && isCycle(i, adj, visited, stack)){
            cycle = true;
        }
    }
    if(cycle){
        cout<<"Cycle is present"<<endl;
    }else{
        cout<<"Cycle is not present"<<endl;
    }

    return 0;
}

/*
Input-->

Enter the number of vetices: 
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
Cycle is present
*/


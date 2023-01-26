/*
                      1
                     / \ 
                4---2   3
                   /|\  |
                  / |  \|
                 5  |    7
                    6
*/

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

    // Rows are of size from 0 to n 
    // Col are of size from 0 to n
    // Since it has no edge right now so we initilaize from 0
    vector<vector<int>> adjm(n+1, vector<int> (n+1, 0));

    // Input the edges
    for(int i=0; i<m; i++){
        int x, y;
        cout<<"Enter the starting and ending point of edge: "<<endl; 
        cin>>x>>y;

        // Because it is undirected graph both side will be 1
        adjm[x][y] = 1;
        adjm[y][x] = 1;
    }


    cout<<"The adjacency matrix of above graph is given by: "<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m+1; j++){
            cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
    }

    // To check if there is an edge between two particular vertices let's say 
    //        3 and 7

    if(adjm[3][7] == 1){
        cout<<"There is an edge between 3 and 7"<<endl;
    }else{
        cout<<"No edge between 3 and 7"<<endl;
    }


    return 0;
}

/*
input--->

Enter the number of nodes: 
7
Enter the number of edges: 
7
Enter the starting and ending point of edge: 
1 2 
Enter the starting and ending point of edge: 
1 3
Enter the starting and ending point of edge: 
2 4
Enter the starting and ending point of edge: 
2 5
Enter the starting and ending point of edge: 
2 6
Enter the starting and ending point of edge: 
2 7
Enter the starting and ending point of edge: 
7 3

Output--->

The adjacency matrix of above graph is given by: 
0 1 1 0 0 0 0
1 0 0 1 1 1 1
1 0 0 0 0 0 1
0 1 0 0 0 0 0
0 1 0 0 0 0 0
0 1 0 0 0 0 0
0 1 1 0 0 0 0 
There is an edge between 3 and 7

*/
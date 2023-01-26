#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of activities: "<<endl;
    cin>>n;

    cout<<"Enter the starting and ending times of activites: "<<endl;
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        int start, end;
        cin>>start>>end;
        v.push_back({end, start});
    }

    sort(v.begin(), v.end());
    int take = 1;       // Initial activity
    int last = v[0].first;
    for(int i=1; i<n; i++){
        if(v[i].second >= last){
            take++;
            last = v[i].second;
        }
    }

    cout<<"The number of activities selected are: "<<endl;
    cout<<take<<endl;


    return 0;
}

/*
Input--->

Enter the number of activities: 
3
10 20
12 15
20 30
The number of activities selected are: 

OUtput--->
2
*/
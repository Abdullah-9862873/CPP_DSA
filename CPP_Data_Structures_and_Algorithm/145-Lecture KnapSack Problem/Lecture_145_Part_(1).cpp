/*
Problem---->
Given a set of items, each with a weight and a value, determine the number of each item to include
 in a collection so that the total weight is less than or equal to a given limit and the total value
  is as large as possible.
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of items: "<<endl;
    cin>>n;

    vector<pair<int,int>> arr(n);
    cout<<"Enter the value and weight of items: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i].first>>arr[i].second;
    }
    int w;
    cout<<"Enter the sack capacity to store weight: "<<endl;
    cin>>w;

    sort(arr.begin(), arr.end(), [&](pair<int,int> p1, pair<int,int> p2){
        // To get the value per weight and sort them according to descending order(The item with more value is placed first)
        double vw1 = (double) p1.first/p1.second;
        double vw2 = (double) p2.first / p2.second;
        return vw1 > vw2;
    });

    int ans = 0;
    for(int i=0; i<n; i++){
        if(w >= arr[i].second){
            ans += arr[i].first;
            w = w - arr[i].second; 
            continue;       // No need to check further conditions just move to next item
        }

        double vw = (double) arr[i].first / arr[i].second;
        ans +=  w * vw;
        break;
    }

    cout<<"The value of items you took into the stack is: "<<endl;
    cout<<ans<<endl;
    return 0;
}
/*
Input--->
Enter the value and weight of items: 
21 7
24 4
12 6
40 5
30 6
Enter the sack capacity to store weight:
20

Output--->
The value of items you took into the stack is:
109
*/
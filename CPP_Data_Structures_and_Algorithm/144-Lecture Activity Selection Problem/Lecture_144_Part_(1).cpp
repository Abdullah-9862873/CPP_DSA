/* First approach to do the activity selection problem and we use custom comparator and lambda function in this code

Custom Comparator--->Binary function that accepts two elements in the range as arguments, and returns a value
                        convertible to bool. The value returned indicates whether the element passed as first
                        argument is considered to go before the second

Lambda Function---> a convenient way of defining an anonymous function object (a closure) right at the location
                     where it's invoked or passed as an argument to a function

Problem---->Given a set of n activities with their start and finish times, we need to select maximum number of
            non-conflicting activities that can be performed by a single person, given that the person can handle
            only one activity at a time.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of activities: "<<endl;
    cin>>n;

    vector<vector<int>> v;
    cout<<"Enter the starting and ending times: "<<endl;
    for(int i=0; i<n; i++){
        int start, end;
        cin>>start>>end;
        v.push_back({start, end});
    }
    // You can also use the {} to store them as a vector... This is also the way

    sort(v.begin(), v.end(), [&](vector<int> &a, vector<int> &b){
        return a[1] < b[1];
    });
    // It returns if the ending point of first is less than second so we can store the vector accorsing to the ascending
    // order of ending times so activity with less time comes first

    int take = 1;
    int last = v[0][1];     // Stores end time of first activity
    for(int i=1; i<n; i++){
        if(v[i][0] >= last){
            take++;
            last = v[i][1];
        }
    }
    cout<<take<<endl;

    return 0;
}
/*
Input----->
Enter the number of activities: 
3
Enter the starting and ending times: 
10 20      
12 15
20 30

Output---->
2
*/

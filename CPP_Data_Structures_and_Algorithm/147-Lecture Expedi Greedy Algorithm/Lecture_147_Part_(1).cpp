/*
Problem--->
A group of cows grabbed a truck and ventured on an expedition deep into the jungle. Being rather poor drivers,
        the cows unfortunately managed to run over a rock and puncture the truck's fuel tank. The truck now leaks
        one unit of fuel every unit of distance it travels.

To repair the truck, the cows need to drive to the nearest town (no more than 1,000,000 units distant) down a long,
        winding road. On this road, between the town and the current location of the truck, there are N
        (1 <= N <= 10,000) fuel stops where the cows can stop to acquire additional fuel (1..100 units at each stop).

The jungle is a dangerous place for humans and is especially dangerous for cows. Therefore, the cows want to make
        the minimum possible number of stops for fuel on the way to the town. Fortunately, the capacity of the fuel
        tank on their truck is so large that there is effectively no limit to the amount of fuel it can hold.
        The truck is currently L units away from the town and has P units of fuel (1 <= P <= 1,000,000).

Determine the minimum number of stops needed to reach the town, or if the cows cannot reach the town at all.

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_case;
    cout<<"Enter the number of testcases: "<<endl;
    cin>>test_case;

    while(test_case--){
        int n;
        cout<<"Enter the number of stops: "<<endl;
        cin>>n;

        vector<pair<int,int>> arr(n);
        cout<<"Enter the distance from town to stop and fuel of each stop: "<<endl;
        for(int i=0; i<n; i++){
            cin>>arr[i].first >> arr[i].second;
        }

        int l;
        cout<<"Enter the value of distance from town to truck: "<<endl;
        cin>>l;

        int p;
        cout<<"Enter the initial fuel of truck: "<<endl;
        cin>>p;

        for(int i=0; i<n; i++){
            arr[i].first = l - arr[i].first;
        }

        // arr[i] shows distance from truck to the stop number i
        sort(arr.begin(), arr.end());

        // The stop having minimum distance from the truck is now at first

        // Making maxheap
        priority_queue<int, vector<int> > pq;
        
        int curr = p;
        int ans = 0;

        bool flag = 0;
        for(int i=0; i<n; i++){
            // Go to each stop

            if(curr >= l){
                // If I have the fuel to go to the destinationn(town) so just break the loop
                break;
            }

            while(curr < arr[i].first){
                // If I don't have the fuel to go to the first fuel station then break
                if(pq.empty()){
                    flag = 1;
                    break;
                }
                
                else if(!pq.empty()){
                    curr += pq.top();
                    pq.pop();
                    ans++;
                }
            }

            if(flag){
                cout<<"-1"<<endl;
                continue;       // Move to next test case
            }
            pq.push(arr[i].second);
        }

        while(!pq.empty() && curr < l){
            curr += pq.top();
            pq.pop();
            ans++;
        }

        if(curr < l){
            // Sara fuel lene ke baad bhi nahi pohonch pate destination pe toh
            cout<<"-1"<<endl;
            continue;           // Move to next test case
        }

        cout<<"The number of stops to reach the town are: "<<endl;
        cout<<ans<<endl;
    }

    

    return 0;
}


/*
Input--->

Enter the number of testcases: 
1
Enter the number of stops: 
4
Enter the distance from town to stop and fuel of each stop: 
4 4
5 2
11 5
15 10
Enter the value of distance from town to truck: 
25
Enter the initial fuel of truck: 
10

Output--->
The number of stops to reach the town are: 
2

*/
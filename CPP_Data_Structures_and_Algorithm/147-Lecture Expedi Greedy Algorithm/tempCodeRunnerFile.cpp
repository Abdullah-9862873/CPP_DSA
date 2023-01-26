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
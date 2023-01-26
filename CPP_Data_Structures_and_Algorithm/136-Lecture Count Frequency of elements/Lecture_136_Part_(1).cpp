#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    map<int,int> freq;

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    map<int,int> :: iterator it;
    // To iterate frequency

    for(it = freq.begin(); it!=freq.end(); it++){
        cout<<it->first<<" is present "<<it->second<<" times"<<endl;
    }

    return 0;
}

/*

Enter the size of array: 
6
Enter the elements: 
1 2 1 3 3 1

Output--->
1 is present 3 times
2 is present 1 times
3 is present 2 times
*/
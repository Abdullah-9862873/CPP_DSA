/*
Problem--->

You are given an array A of n elements... You have to remove exactly n/2 elements from array A and add it to another
        array B(initially empty)... Find the minimum and maximum value of difference between these two arrays...
        We define the difference between these two arrays as: Σ abs(A[i] - B[i])

Approach--->

Maximum is obtained by subtracting minimum value from the maximum value so we just sort the array and keep a variable
max and do the following operations

    =    (A[n-1] - A[0]) + (A[n-2] - A[1]) + ... + (A[n/2] - A[n/2 -1])
    =    (A[n-1] + A[n-2] + ... + A[n/2]) - (A[0] + A[1] + .... + A[n/2 -1])
    =    A[n/2 - i] + A[i]

Minimum is obtained by subtracting adjacent elements from sorted array because adjacent elements have minimum difference

    =    A[1] - A[0] + A[3] - A[2]
    =    (A[1] + A[3]) - (A[0] + A[2])
    =    (Sum of odd index elements) - (Sum of Even index elements)
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the values of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    long long max = 0;
    long long min = 0;

    for(int i=0; i<n/2; i++){
        max += arr[i+n/2] - arr[i];
        min += arr[2*i+1] - arr[2*i];
    }

    cout<<"Minimum is: "<<min<<endl;
    cout<<"Maximum is: "<<max<<endl;

    return 0;
}

/*
Input--->
Enter the size of array:
4
Enter the values of array:
12 -3 10 0

Output--->
Minimum is: 5
Maximum is: 25
*/
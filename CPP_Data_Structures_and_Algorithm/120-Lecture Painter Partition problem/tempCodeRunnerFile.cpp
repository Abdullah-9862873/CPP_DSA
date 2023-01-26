/*
n---> number of boards to paint
m---> no of painters

k is minimum time to paint a maximum number for example if we have
        {10, 20, 30, 40} and each board is assigned one painter so it is
        gonna take minimum of 40 units of time to paint fully right.
        So we take maximum in the value of k to point that
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find_No_of_Painters(int boards[], int n, int mid){
    int painters = 1; // Initial value
    int sum = 0;      // No of board length
    for(int i=0; i<n; i++){
        sum += boards[i];
        if(sum > mid){
            sum = boards[i];
            painters++;
        }
    }
    return painters;
}

int findMinimumTime(int boards[], int n, int m){
    int totalLength=0, k=0;
    for(int i=0; i<n; i++){
        k = max(k, boards[i]);
        totalLength += boards[i];
    }

    int low = k;        // Minimum time
    int high = totalLength; // Maximum time
    while(low < high){
        int mid = (low + high)/2;
        int painters = find_No_of_Painters(boards, n, mid);
        if(painters <= m){
            // Search at the left for the minimum value
            high = mid;
        }else{
            low = mid+1;
        }
    }
    return low; // Returning low because it is the minimum time for optmal mid
}

int main(){
    int boards[] = {10, 20, 30, 40};
    int n=4;
    int m=2;
    cout<<"Time taken to paint the boards is: "<<findMinimumTime(boards, n, m)<<endl;

    return 0;
}
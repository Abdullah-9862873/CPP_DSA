/*
Problem: Given is an array with n elements that represent n positions along
a straight line. Find k elements such that the minimum distance between
any two elements is the maximum possible.

Approach;
1---> Sort the array
2---> Pick middle element as result and check for its feasability
3---> If feasible then search for right half for larger minimum distance
4---> If not feasible then search for left half for larger minimum distance
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isFeasible(int mid, int arr[], int n, int k){
    int element = 1;        // to go upto k elements
    int pos = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]-pos >= mid){
            pos = arr[i];
            element++;
            if(element == k){
                return true;
            }
        }
    }

    return false;
}

int largestMinDistance(int arr[], int n, int k){
    sort(arr, arr+n);

    int left = arr[0];
    int right = arr[n-1];
    int result = -1;


    while(left < right){
        int mid = (left+right)/2;

        if(isFeasible(mid, arr, n, k)){
            result = max(result, mid);
            // Check on the right
            left = mid+1;
        }else{
            right = mid;
        }
    }
    
    return result;
}

int main(){
    int arr[] = {1, 2, 8, 4, 9};

    int n = 5;
    int k = 3;
    cout<<"The largest minimum distance is: "<<largestMinDistance(arr, n, k)<<endl;

    int arr2[] = {1, 2, 5, 7, 11, 12};
    int n2 = 6;
    int k2 = 3;
    cout<<"The largest minimum distance is: "<<largestMinDistance(arr2, n2, k2)<<endl;


    return 0;
}
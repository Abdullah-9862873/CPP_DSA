/*
Problem:
For given array and value of k and x, Find the maximum sum of size k 
having sum less than x.

Approach:
    1---> Calculate sum of first k elements
    2---> Initialize ans with sum
    3---> Iterate over the rest of array 
                ---> Keep adding one element to sum and removing starting element
                        from sum
                ---> check for validity of sum if it's less than k or not
                ---> Update ans with the max value between ans and sum
*/

#include<iostream>
using namespace std;

int maxSumSubarray(int arr[], int n, int k, int x){
    int sum=0;
    int ans = 0;

    for(int i=0; i<k; i++){
        sum += arr[i];
    }

    if(sum < x){
        ans = sum;
    }

    for(int i=k; i<n; i++){
        sum = sum - arr[i-k];
        sum = sum + arr[i];

        if(sum < x){
            ans = max(ans, sum);
        }
    }
    return ans;
}

int main(){
    int arr[] = {7, 5, 4, 6, 8, 9};
    int n = 6;
    cout<<maxSumSubarray(arr, 6, 3, 20);

    return 0;
}
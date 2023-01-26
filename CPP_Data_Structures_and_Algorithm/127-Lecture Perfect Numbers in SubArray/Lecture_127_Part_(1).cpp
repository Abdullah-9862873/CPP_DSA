#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int n){
    int sum = 1;

    for(int i=2; i<sqrt(n); i++){
        if(n%i == 0){
            // Checking for duplicate value
            if(i == n/i){
               sum  += i;
            }else{
                sum += i + n/i;
            }
        }
    }
    if(sum == n && n!= 1){
        return true;
    }else{
        return false;
    }
}

int maxSum(int arr[], int n, int k){
    
    int res = 0;

    for(int i=0; i<k; i++){
        res += arr[i];
    }

    int sum = res;
    for(int i=k; i<n; i++){
        sum = sum + arr[i];
        sum = sum - arr[i-k];

        res = max(res, sum);
    }
    return res;
}

int maxNumberOfPerfects(int arr[], int n, int k){
    // Make the array binary---> Where it is perfect number place 1 but where it's not place 0
    for(int i=0; i<n; i++){
        if(isPerfect(arr[i])){
            arr[i] = 1;
        }else{
            arr[i] = 0;
        }
    }

    return maxSum(arr, n, k);
}

int main(){
    int arr[] = {28, 2, 3, 6, 496, 99, 8128, 24};
    int n =8;
    int k = 4;
    cout<<maxNumberOfPerfects(arr, n, k)<<endl;

    return 0;
}
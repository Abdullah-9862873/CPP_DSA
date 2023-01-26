#include<iostream>
using namespace std;

int minimumSubarraywithSum(int arr[], int n, int x){
    int sum = 0;
    int ans = n+1;      // maximum value that does not exist
    int end = 0;
    int start = 0;

    while(end < n){
        while(sum <= x && end < n){
            sum += arr[end++];
        }

        while(sum > x && start < n){
            if(end-start < ans){
                ans = end - start;
            }
            sum -= arr[start++];
        }
    }
        return ans;
}
int main(){
    int arr[] = {1, 4, 45, 6, 10, 19};
    int n=6;
    int x = 51;
    cout<<minimumSubarraywithSum(arr, n, x)<<endl;

    return 0;
}

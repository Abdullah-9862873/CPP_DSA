#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    // To calculate cumulative sum
    int currSum[n+1];
    currSum[0] = 0;
    int maxSum=INT_MIN;

    for(int i=1; i<=n; i++){
        currSum[i] = currSum[i-1] + arr[i-1];
    }

    for(int i=1; i<=n; i++){
        int sum=0;
        for(int j=0; j<i; j++){
            sum = currSum[i] - currSum[j];
            maxSum=max(maxSum, sum);
        }
    }

    cout<<maxSum<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int maxSum =INT_MIN;
    int currsum=0;
    for(int i=0; i<=n-1; i++){
        currsum = currsum+arr[i];
        if(currsum<0){
            currsum=0;
        }
        maxSum = max(maxSum, currsum);
    }
    cout<<"The maximum sum is: "<<maxSum<<endl;

    return 0;
}
// The flaw in this question is that the time complexity is:
//  O(n*3) So we'll use cumulative sum approach to make it better

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
    
    int sum=0;
    int maxSum = INT_MIN;
    for(int i=0; i<=n-1; i++){
        for(int j=i; j<=n-1; j++){
            sum = 0;
            for(int k=i; k<=j; k++){
                sum+= arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    }
    cout<<"The maximum sum value is: "<<maxSum<<endl;

    return 0;
}
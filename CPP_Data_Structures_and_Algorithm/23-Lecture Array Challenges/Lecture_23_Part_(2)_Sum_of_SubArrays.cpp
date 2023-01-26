/* Problem: Given an array of size n. Output sum of each subarray of the
    given array

    if Question is {1, 2, 2}
    Subarrays will be---> 1     1,2     1,2,2   2    2,2    2
    respective sum are    1     3        5      2    4      2
    Sum = 1+3+5+2+4+2= 17 
*/

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
    int sum = 0;
    for(int i=0; i<=n-1; i++){
        sum = 0;
        for(int j=i; j<=n-1; j++){
            sum += arr[j];
            cout<<sum<<endl; 
        }
    }

    cout<<"No of sub arrays are: "<<(n*(n+1))/2;

    return 0;
}
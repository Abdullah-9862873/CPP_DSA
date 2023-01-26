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

    int max_no = INT_MIN;
    int min_no = INT_MAX;

    for(int i=0; i<n; i++){
        max_no = max(max_no, arr[i]);
        min_no = min(min_no, arr[i]);
    }

    cout<<"The array you entered is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The maximum number in the array is: "<<max_no<<endl;
    cout<<"The minimum number in the array is: "<<min_no<<endl;

    return 0;
}
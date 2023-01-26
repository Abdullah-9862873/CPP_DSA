    /* Corner cases--->
        1--> if it is in ascending order then peak is last element
        2---> if it is in descending order then peak is first element
        3---> if mid > mid-1 && mid > mid+1 the peak is mid
    */
#include<iostream>
using namespace std;

int findPeakElement(int arr[], int n, int left, int right){
    int mid = left + (right - left)/2;
    
    if((mid==0 || arr[mid-1] <=arr[mid]) && ((mid==n-1) || arr[mid+1] <= arr[mid])){
        return mid;
    }

    // If I get bigger element on left
    else if(mid > 0 || arr[mid-1] > arr[mid]){
        return findPeakElement(arr, n, left, mid-1);
    }
    else{
       return findPeakElement(arr, n, mid+1, right);
    }
}

int main(){
    int arr[] = {1, 2, 0, 4, 3};
    int n = 5;
    cout<<"Peak is at index: "<<findPeakElement(arr, n, 0, n-1)<<endl;

    
    return 0;
}
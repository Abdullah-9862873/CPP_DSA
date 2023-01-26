/*
Find the pivot point first:
        ---> By traversing and finding where arr[i] > arr[i+1]
*/

#include<iostream>
using namespace std;

int searchInRotatedArray(int arr[], int key, int left, int right){
    if(left > right){
        return -1;
    }

    int mid = (left + right)/2;

    if(arr[mid] == key){
        return mid;
    }
    
        if(key >= arr[left] && key <= arr[mid]){
            // Key lies on left side
            return searchInRotatedArray(arr, key, left, mid-1);
        }
        else{
            return searchInRotatedArray(arr, key, mid+1, right);
        }
    

        if(key >= arr[mid] && key <= arr[right]){
            return searchInRotatedArray(arr, key, mid+1, right);
        }
    return searchInRotatedArray(arr, key, left, mid-1);
}

int main(){
    int arr[] = {6, 7, 8, 9, 10, 1, 2, 5};
    int n=8;
    int key = 8;
    int idx = searchInRotatedArray(arr, key, 0, n-1);
    if(idx == -1){
        cout<<"Key is not present in the array: "<<endl;
    }else{
        cout<<"Key is present at index: "<<idx<<endl;
    }

    return 0;
}
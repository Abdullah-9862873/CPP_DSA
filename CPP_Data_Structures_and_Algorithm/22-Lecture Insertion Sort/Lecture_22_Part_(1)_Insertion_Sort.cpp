/*
Algorithm:  Insert an element from unsorted array to its
            correct position in 
            sorted array...

Steps:
1--->  Outer loop from index=1 to last element
2----> j is the index of first element
3----> In the while loop during "arr[j+1] = arr[j]--> "the value in the second 
       place is overwritten with the first one... But the value which was
       in the second place is stored in "current" variable
4----> j-- is to come out of while loop
       arr[j+1] is basically denoting to index 0 because j after j-- becomes -1 so
       we have to make it 0 to point to first element

*/
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

    for(int i=1; i<=n-1; i++){
        int current = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>current){
            arr[j+1] = arr[j]; 
            j--;
        }
        arr[j+1] = current;
    }

    cout<<"The sorted array is: "<<endl;
    for(int i=0 ;i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
}
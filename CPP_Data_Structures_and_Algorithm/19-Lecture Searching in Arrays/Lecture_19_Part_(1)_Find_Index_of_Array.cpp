#include<iostream>
using namespace std;

int LinearSearch(int arr[], int size, int key){
    for(int i=0; i<=size-1; i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int num;
    cout<<"Enter the size of array: "<<endl;
    cin>>num;

    int arr[num];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key you want to find: "<<endl;
    cin>>key;

    cout<<"The index of the key is: "<<LinearSearch(arr, num, key);
    return 0;
}
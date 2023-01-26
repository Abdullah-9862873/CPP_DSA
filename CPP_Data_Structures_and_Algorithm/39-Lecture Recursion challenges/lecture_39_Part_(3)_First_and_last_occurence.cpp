#include<iostream>
using namespace std;

int firstocc(int arr[], int size, int i, int key){
    if(i==size){
        return -1;
    }

    if(arr[i]==key){
        return i;
    }
    return firstocc(arr, size, i+1, key);
}

int lastocc(int arr[], int size, int i, int key){
    if(size==0){
        return -1;
    }

    if(arr[size-1]==key){
        return (size-1);
    }
    return lastocc(arr, size-1, i, key);
}


int main(){
    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    cout<<firstocc(arr, 7, 0, 2)<<endl;
    cout<<lastocc(arr, 7, 0, 2)<<endl;

    return 0;
}
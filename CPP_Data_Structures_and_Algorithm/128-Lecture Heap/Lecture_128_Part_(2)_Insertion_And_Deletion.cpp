// max heap
// heapify converts the array to heap
// I am using 0 indexing
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void heapify(vector<int> &HT, int i){
    int size = HT.size();
    int largest = i;
    int l = 2*i + 1;        // Left child index
    int r = 2*i +2;         // Right child index

    if(l < size && HT[l] > HT[largest]){
        largest = l;
    }
    if(r < size && HT[r] > HT[largest]){
        largest = r;
    }

    if(largest != i){
        swap(HT[i], HT[largest]);
        heapify(HT, largest);
    }
}

void insert(vector<int> &HT, int num){

    int size = HT.size();
    if(size == 0){
        HT.push_back(num);
    }
    else{
        HT.push_back(num);
        for(int i= size/2-1; i>=0; i--){
            heapify(HT, i);
        }
    }
}

void deletion(vector<int> &HT, int num){
    int size = HT.size();
    int i=0;
    for(i=0; i<size; i++){
        if(HT[i] == num){
            break;
        }
    }

    swap(HT[i], HT[size-1]);
    HT.pop_back();

    for(int i=size/2-1; i>=0; i--){
        heapify(HT, i);
    }
}

void printArray(vector<int> &HT){
    for(int i=0; i<HT.size(); i++){
        cout<<HT[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> heapTree;

    insert(heapTree, 3);
    insert(heapTree, 4);
    insert(heapTree, 9);
    insert(heapTree, 5);
    insert(heapTree, 2);

    cout<<"Max_Heap is: "<<endl;
    printArray(heapTree);

    deletion(heapTree, 4);
    cout<<"Max_Heap tree after deletion: "<<endl;
    printArray(heapTree);
    return 0;
}
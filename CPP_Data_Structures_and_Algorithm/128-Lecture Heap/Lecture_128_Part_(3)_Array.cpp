// Problem: Convert array to heap

#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void heapify(int arr[], int N, int i)
{
	int largest = i; 
	int l = 2 * i + 1; 
	int r = 2 * i + 2; 

	if (l < N && arr[l] > arr[largest])
		largest = l;

	if (r < N && arr[r] > arr[largest])
		largest = r;

	if (largest != i) {
		swap(arr[i], arr[largest]);

		heapify(arr, N, largest);
	}
}


void buildHeap(int arr[], int N)
{
	
	int startIdx = N/2-1;

	for (int i = startIdx; i >= 0; i--) {
		heapify(arr, N, i);
	}
}

void printHeap(int arr[], int N)
{
	cout << "Array representation of Heap is:\n";

	for (int i = 0; i < N; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}


void heapsort(int arr[], int n){
	// build max heap
	for(int i= n/2-1; i>=0; i--){
		heapify(arr, n, i);
	}

	// heap sort
	for(int i=n-1; i>=0; i--){
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}

int main()
{
	int arr[] = {40, 10, 30, 50, 60, 15};

	int N = sizeof(arr) / sizeof(arr[0]);

	buildHeap(arr, N);
	printHeap(arr, N);

	heapsort(arr, N);
	printHeap(arr, N);

	return 0;
}

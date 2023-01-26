/*
n---> number of pages
m---> Numer of students
*/

#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int min){
    int studentsRequired = 1; 
    int sum = 0; // How many books have you allocated so far

    for(int i=0; i<n; i++){
        if(arr[i] > min){
            return false;
        }
        if(sum+arr[i] > min){
            // Now we need another student to give books to
            studentsRequired++;
            sum = arr[i];
            if(studentsRequired > m){
                return false;
            }
        }
        else{
            //  if(sum + arr[i] <= mid)
            // We can still allocate pages to current student
            sum += arr[i];
        }
    }
    return true;
}


int allocateMinimumPages(int arr[], int n, int m){
    if(n < m){
        return -1;
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int start = 0;
    int end = sum;
    int ans = INT_MAX;

    while(start <= end){
        int mid = (start + end)/2;

        if(isPossible(arr, n, m, mid)){
            ans = min(ans, mid);
            // Check on the left side
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {12, 34, 67, 90};
    int n=4;
    int m=2;

    cout<<"The minimum pages given to student are: "<<allocateMinimumPages(arr, n, m)<<endl;
    return 0;
}
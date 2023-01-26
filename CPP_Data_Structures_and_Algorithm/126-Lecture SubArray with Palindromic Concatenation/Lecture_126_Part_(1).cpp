#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPalindromic(int num){
    int temp = num;
    int n = 0;
    // If I have num = 123 then following loop returns 321
    while(temp > 0){
        n = n*10 + temp%10;
        temp = temp/10; 
    }

    if(num == n){
        return true;
    }
    return false;
}

int findPalindromicSubarray(vector<int> arr, int k){
    int num=0;

    for(int i=0; i<k; i++){
        num = num*10 + arr[i];
    }

    if(isPalindromic(num)){
        return 0;       // Starting index of the palindromic
    }

    for(int j=k; j<arr.size(); j++){
        // remove first element and add next element
        num = (num % (int)pow(10, k-1))*10 + arr[j];

        if(isPalindromic(num)){
            return j-k+1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {2, 3, 5, 1, 1, 5};
    int k = 4;
    int ans = findPalindromicSubarray(arr, k);
    if(ans == -1){
        cout<<"Palindromic doesn't exist"<<endl;
    }
    else{
        //Print palindromic
        for(int i=ans; i<ans+k; i++){
            cout<<arr[i]<<" ";
        }
    }


    return 0;
}
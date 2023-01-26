#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int s;
    cout<<"Enter the value of Sum: "<<endl;
    cin>>s;

    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    int st=-1, en=-1, i=0, j=0, sum=0;
    while(j<=n-1 && sum+arr[j]<=s){
        sum += arr[j];
        j++;
    }

    if(sum==s){
        st = i+1;       //indexing we are pointing to positions so start is at position i+1
        en = j+1;
        return 0;
    }
    while(j<=n-1){
        sum = sum+arr[j];
        if(sum>s){
            sum = sum-arr[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
    


    return 0;
}
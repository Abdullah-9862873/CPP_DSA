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

    const int N= 1e6 + 2;
    bool Check[N];
    for(int i=0; i<=n-1; i++){
        Check[i]=false;
    }
    int j=0;
    while(j<n){
        if(arr[j]>=0){
            Check[arr[j]]=true;
        }
        else if(arr[j]<0){
            Check[arr[j]] = false;
        }
        j++;
    }

    for(int i=0; i<=n-1; i++){
        if(Check[i]==false){
        cout<<i<<endl;
        break;
        }
    }



    return 0;
}
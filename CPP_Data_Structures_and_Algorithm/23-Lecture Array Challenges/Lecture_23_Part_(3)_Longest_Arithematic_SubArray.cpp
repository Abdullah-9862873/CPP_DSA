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

    int pd = arr[1] - arr[0];
    int curr = 2;
    int j=2;
    int ans =2;
    while(j<=n-1){
        if(pd == arr[j] - arr[j-1]){
            curr++;
        }
        else if(pd!= arr[j] - arr[j-1]){
            pd = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }

    cout<<ans<<" "<<endl;

    return 0;
}
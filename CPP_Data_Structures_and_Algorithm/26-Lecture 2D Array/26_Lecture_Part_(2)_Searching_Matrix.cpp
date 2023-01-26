#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    cout<<"Enter the number of col: "<<endl;
    cin>>m;

    int arr[n][m];
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"Enter the key to find: "<<endl;
    cin>>key;

    bool check = false;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            if(arr[i][j]==key){
                cout<<"Element found at row="<<i<<" col= "<<j<<endl;
                check = true;
            }
        }
    }

    if(check){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found"<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    cout<<"Enter the number of columns: "<<endl;
    cin>>m;

    int arr[n][m];
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }

    // Printing Output
    cout<<"The matrix is: "<<endl;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
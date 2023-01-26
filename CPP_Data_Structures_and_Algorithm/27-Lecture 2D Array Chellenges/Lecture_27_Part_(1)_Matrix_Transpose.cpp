#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter the size of row: "<<endl;
    cin>>n;
    cout<<"Enter the size of columns: "<<endl;
    cin>>m;

    int arr[n][m];
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }


    //Matrix Transpose
    if(n==m){

        for(int i=0; i<=n-1; i++){
            for(int j=i; j<=m-1; j++){
                int temp =arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp; 
            }
        }
    }else{
        cout<<"Sorry, this is not a square matrix"<<endl;
        return 0;
    }

    //Printing Transpose
    cout<<"The transpose of matrix is given as: "<<endl;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
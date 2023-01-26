/*
For matrix multiplication, the condition is that the columns of 
first matrix and rows of second matrix must be equal

Resultant matrix's dimension are: row of first x col of second

Matrix multiplication is obtained by multiplying 
    row of first x col of second
*/

#include<iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    cout<<"Enter the number of rows of first matrix m1: "<<endl;
    cin>>n1;
    cout<<"Enter the number of columns of first matrix m2: "<<endl;
    cin>>n2;
    cout<<"Enter the number of columns of second matrix m2: "<<endl;
    cin>>n3;

    int m1[n1][n2];
    int m2[n2][n3];

    // Adding elements of matrix 1
    cout<<"Enter the elements of matrix m1: "<<endl;
    for(int i=0; i<=n1-1; i++){
        for(int j=0; j<=n2-1; j++){
            cin>>m1[i][j];
        }
    }

    // Adding elements of matrix 2
    cout<<"Enter the elements of matrix m2: "<<endl;
    for(int i=0; i<=n2-1; i++){
        for(int j=0; j<=n3-1; j++){
            cin>>m2[i][j];
        }
    }

    // To multiply we use Size of matrix after multiplying n1 x n3
    int ans[n1][n3];    
    for(int i=0; i<=n1-1; i++){
        for(int j=0; j<=n3-1; j++){
            ans[i][j] = 0;
        }
    }    

    for(int i=0; i<=n1-1; i++){
        for(int j=0; j<=n3-1; j++){
            for(int k=0; k<=n2-1; k++){
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    for(int i=0; i<=n1-1; i++){
        for(int j=0; j<=n3-1; j++){
            cout<<ans[i][j]<<" ";
        }
            cout<<endl;
    }

    return 0;
}
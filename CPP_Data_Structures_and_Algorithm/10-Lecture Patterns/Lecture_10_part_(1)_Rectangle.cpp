/*
****
****
****
****
Print this pattern
*/

#include<iostream>
using namespace std;

int main(){
    int rows, col;
    cout<<"Enter the number of rows: "<<endl;
    cin>>rows;
    cout<<"Enter the number of columns: "<<endl;
    cin>>col;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=col; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
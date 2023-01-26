/*
To dynamically create a 2D array:

    First, declare a pointer to a pointer variable i.e. int** arr;.
    Then allocate space for a row using the new operator which
        will hold the reference to the column i.e
        arr = new int*[row];.

    Allocate space for columns using the new operator on each 
        row cell that will hold the actual values of array elements 
        i.e. arr[i] = new int[col];.
*/
#include <iostream>
using namespace std;

void display(int **a, int r, int c)
{
    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row, col, i = 0, j = 0;
    cout << "Enter the size of rows: " << endl;
    cin >> row;
    cout << "Enter the size of columns: " << endl;
    cin >> col;
    cout << "Enter the " << row * col << " number of elements: " << endl;

    int **arr;
    // Allocating heap memory to rows
    // Here I used * because I have to get values
    arr = new int *[row];
    // Allocating heap memory of col to each row
    for (i = 0; i <= row - 1; i++)
    {
        arr[i] = new int[col];
    }

    // Taking input
    for (i = 0; i <= row - 1; i++)
    {
        for (j = 0; j <= col - 1; j++)
        {
            cout << "Enter element at row " << i + 1 << " and col " << j + 1 << endl;
            cin >> arr[i][j];
        }
    }

    display(arr, row, col);

    // To deacllocate the memory
    delete[] arr;
    arr = NULL;
    return 0;
}
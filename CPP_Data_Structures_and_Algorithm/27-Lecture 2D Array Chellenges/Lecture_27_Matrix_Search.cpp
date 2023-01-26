#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int target;
    int mat[n][m];
    cout<<"Enter the values of array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout<<"Enter the target: "<<endl;
    cin >> target;
    
    bool found = false;
    int r = 0, c = n - 1;
    while (r < n && c >= 0)
    {
        if (mat[r][c] == target)
        {
            found = true;
        }
        mat[r][c] > target ? c-- : r++;
    }
    if (found)
        cout << "Found";
    else
        cout << "Not Found";
}
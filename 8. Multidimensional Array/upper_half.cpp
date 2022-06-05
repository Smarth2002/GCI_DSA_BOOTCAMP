/* 4. Write a user defined function named Upper-half() which takes a two dimensional array A, with size N rows and N columns as argument and prints the upper half of the array.

e.g.,
2 3 1 5 0                              2 3 1 5 0
7 1 5 3 1                                 1 5 3 1
2 5 7 8 1   Output will be:                 7 8 1
0 1 5 0 1                                     0 1
3 4 9 1 5                                       5*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j>=i)
                cout<<arr[i][j];
            else
                cout<<" ";
        }
        
        cout<<endl;
    }
    
    return 0;
}
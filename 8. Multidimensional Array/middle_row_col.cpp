/* 5. Write a function in C++ which accepts a 2D array of integers and its size as arguments 
and displays the elements of middle row and the elements of middle column.
[Assuming the 2D Array to be a square matrix with odd dimension i.e. 3x3, 5x5, 7x7 etc...]
Example, if the array contents is

3  5  4
7  6  9
2  1  8

Output through the function should be :
Middle Row : 7 6 9
Middle column : 5 6 1*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter odd dimension: ";
    cin>>n;

    int arr[n][n];

    cout<<"enter elements of 2D array"<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"middle row: ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ( i == n/2 )
                cout<<arr[i][j]<<" ";             
        }
    }
    
    cout<<"middle column: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ( j == n/2 )
                cout<<arr[i][j]<<" ";             
        }
    }
    
    return 0;
}
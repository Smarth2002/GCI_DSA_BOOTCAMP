/* 3.Initialize a 2D array of 3*3 matrix. E.g.-
1	2	3
4	5	6
7	8	9

Check if the matrix is symmetric or not. */

#include<bits/stdc++.h>
using namespace std;

int isSymmetric_matrix( int array[][3], int row, int col)
{
    for (int i = 0; i < row-1; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if( array[i][j] != array[j][i] )
                return 0;
        }      
    }
       
    return 1;
}

int main()
{
    int row;
    cout<<"enter rows"<<endl;
    cin>>row;

    int array[row][3];

    cout<<"enter elements"<<endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>array[i][j];
        }
    }
    
    if( isSymmetric_matrix(array, row, 3) )
        cout<<"symmetric matrix";
    
    else
        cout<<"not symmetric matrix";

    return 0;
}
/* Write a code which inputs two numbers m and n and creates a matrix of size m x n (m rows and n columns) 
in which every elements is either X or 0. The Xs and 0s must be filled alternatively, 
the matrix should have outermost rectangle of Xs, then a rectangle of 0s, then a rectangle of Xs, and so on.

Examples:  

Input: m = 3, n = 3
Output: Following matrix 
X X X
X 0 X
X X X

Input: m = 4, n = 5
Output: Following matrix
X X X X X
X 0 0 0 X
X 0 0 0 X
X X X X X

Input:  m = 5, n = 5
Output: Following matrix
X X X X X
X 0 0 0 X
X 0 X 0 X
X 0 0 0 X
X X X X X

Input:  m = 6, n = 7
Output: Following matrix
X X X X X X X
X 0 0 0 0 0 X
X 0 X X X 0 X
X 0 X X X 0 X
X 0 0 0 0 0 X
X X X X X X X */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin>>row>>col;

    char array[row][col];
    
    int row_start=0, col_start=0, row_end=row-1, col_end=col-1; //starting and ending row and col of frames of X and 0

    int flag=1; //flag=1 mean X and flag=0 mean 1

    while( row_start <= row_end && col_start <= col_end ) //till these pairs dont cross each other
    {
        for (int i = row_start; i <= row_end; i++) //traverse the 2D matrix from start_row to end_row and start_col to end_col
        {
            for (int j = col_start; j <= col_end; j++)
            {
                if( i==row_start || i==row_end || j==col_end || j==col_start ) //store character at boundaries only
                {
                    if(flag)
                        array[i][j]='X';
                    else
                        array[i][j]='0';
                }
            }  
        } //after traversing matrix reduce its dimensions and change flag for different boundary

        flag=1-flag;
        row_start++;
        row_end--;
        col_start++;
        col_end--;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<array[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}
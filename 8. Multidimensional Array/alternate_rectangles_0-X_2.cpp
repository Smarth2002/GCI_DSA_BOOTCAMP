/*  Write a code which inputs two numbers m and n and creates a matrix of size m x n (m rows and n columns) 
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

    int start_row=0, start_col=0, end_row=row-1, end_col=col-1; //printing just like spiral order
    int dir=0;
    char ch='X';

    while( start_row <= end_row && start_col <= end_col )
    {
        if( dir==0 ) //right direction
        {
            for (int i = start_col; i <= end_col; i++)
                array[start_row][i]=ch;
            
            start_row++; //so that while coming upwards we dont come at same row
        }

        else if( dir==1 ) //down
        {
            for (int i = start_row; i <= end_row; i++)
                array[i][end_col]=ch;
            
            end_col--;
        }

        else if( dir==2 ) //left
        {
            for (int i = end_col; i >= start_col; i--)
                array[end_row][i]=ch;
            
            end_row--;
        }

        else if( dir==3 ) //up
        {
            for (int i = end_row; i >= start_row; i--)
                array[i][start_col]=ch;
            
            start_col++;

/* we have not written the below if-else part in starting of while loop bcz after printing in each direction
we check condition so we not want to flip character after each direction but after the last i.e upward direction*/

            if( ch=='X' ) //since after printing this upward col character flips
                ch='0';
            else
                ch='X';
        }

        dir = (dir+1)%4;
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
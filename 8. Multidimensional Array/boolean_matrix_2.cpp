/* Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true)
 then make all the cells of ith row and jth column as 1. 
 

Example 1
The matrix
1 0
0 0
should be changed to following
1 1
1 0

Example 2
The matrix
0 0 0
0 0 1
should be changed to following
0 0 1
1 1 1

Example 3
The matrix
1 0 0 1
0 0 1 0
0 0 0 0
should be changed to following
1 1 1 1
1 1 1 1
1 0 1 1*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin>>row>>col;

    int array[row][col], row_info[row]={}, col_info[col]={};

/* since it is not possible to update while traversing bcz after updating the new 1's, these new 1's will furher 
lead to more 1's (not required) so whole matrix will be filled with 1..
so we first check and store the info about the rows and columns in their arrays to print 1 and then traverse
matrix again and update the elements by comparing each element if its row and col info is stored in array*/

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>array[i][j];

            if(array[i][j]==1) //if element is 1 then its row no and col no is stored as 1 in array
            {
                row_info[i]=1;
                col_info[j]=1;
            }
        }                    
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if( row_info[i] == 1 || col_info[j] == 1 ) //for each element if its row or col contain 1 info in row and col info arrays
                array[i][j]=1;

            cout<<array[i][j];
        }
        cout<<endl;
    }

    return 0;
}
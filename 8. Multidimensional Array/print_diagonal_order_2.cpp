/* Given a 2D matrix, print all elements of the given matrix in diagonal order. 
For example, consider the following 5 X 4 input matrix.  

Example:

1     2     3     4
5     6     7     8
9    10    11    12
13    14    15    16
17    18    19    20
Diagonal printing of the above matrix is

1
5 2
9 6 3
13 10 7 4
17 14 11 8
18 15 12
19 16
20*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin>>row>>col;

    int array[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>array[i][j];
        }
    }


    for (int k = 0; k < row; k++) //it prints all diagonals starting from elements in 1st column
    {//here k represents rows
        int i=k; //in starting elements of 1st col j=0 but i changes so i=k
        int j=0;

        while ( i >= 0 && j < col ) //if i,j is a valid pair than print
        {
            cout<<array[i][j]<<" ";

            i--;  // moving upright (like diagonal)
            j++;
        }
        
        cout<<endl;
    }

/* it prints all diagonals with starting elements lying in first col
now starting elements lie in last row */

    for (int k = 1; k < col; k++) //goes from col 1 to col-1 as col=0 is already covered in above loop
    {//here k represents columns
        int i=row-1; //as row is fixed for all starting elements of last row
        int j=k; //col is increasing for every startting element

        while ( i >= 0 && j < col ) //check for valid pair
        {
            cout<<array[i][j]<<" ";

            i--;
            j++;
        }
        
        cout<<endl;
    }
    
    
    return 0;
}
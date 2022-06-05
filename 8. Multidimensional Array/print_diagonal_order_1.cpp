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

    int i=0, j=0, start_i=0, star_j=0; //start_i and start_j are starting elements of each diagonal

    while( star_j < col ) //start_i reaches till row-1 but still diagonals are there but start_j will go till last element till col-1
    {
        i=start_i; //transfer the starting i and j to i and j to increment/decrement them for further iterations
        j=star_j;

        while ( i >= 0 && j < col ) //if its a valid pair of i,j (element) than print it 
        {
            cout<<array[i][j]<<" ";

            i--;  //after printing decrease row and increase col to move upright (like diagonal)
            j++;
        }

        cout<<endl;

/* if starting row has reached till row-1 than start increasing col keeping start_row fixed
otherwise keep increasing start_row till row-1*/

        if(start_i == row-1)  
            star_j++;
        else
            start_i++;
        
    }

    return 0;
}
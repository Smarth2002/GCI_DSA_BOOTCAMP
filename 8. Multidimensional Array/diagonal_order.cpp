/* Given a matrix of n*n size, the task is to print its elements in a diagonal pattern. 

Input : mat[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}}
Output : 1 2 4 7 5 3 6 8 9.
Explanation: Start from 1 
Then from upward to downward diagonally i.e. 2 and 4. Then from downward to upward diagonally i.e 7, 5, 3 
Then from up to down diagonally i.e  6, 8 . Then down to up i.e. end at 9.

Input :  mat[4][4] =  {{1,  2,  3,  10},
                      {4,  5,  6,  11},
                      {7,  8,  9,  12},
                      {13, 14, 15, 16}}
Output:  1 2 4 7 5 3 10 6 8 13 14 9 11 12 15 16 .
Explanation: Start from 1 
Then from upward to downward diagonally i.e. 2 and 4. Then from downward to upward diagonally i.e 7, 5, 3 
Then from upward to downward diagonally i.e. 10 6 8 13. Then from downward to upward diagonally i.e 14 9 11
Then from upward to downward diagonally i.e. 12 15. then end at 16 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;

    int array[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>array[i][j];
        }
    }
    
    int i=0, j=0;

    while( i < row && j < col )
    {
        while ( i >= 0 && j < col )  //to traverse and print in upright direction (like diagonal) because i decrease and j increase
        {
            cout<<array[i][j]<<", ";

            i--; //decrease row and increase col
            j++;
        }

//after this loop we move to right col and upward row...

        if( j == col ) //but if j goes to col than next starting element is below than decrease j and increment i 2 times
        {     
            j--;  
            i=i+2;
        }
        else ////if j<=col than we automatically got reqd j of next starting element (in right) of downright loop and we simply have to increment i
            i++; 
        
        
        while ( i < row && j >= 0 ) //downright direction bcz i increase and j decrease 
        {
            cout<<array[i][j]<<", ";

            i++;
            j--;
        }

//after this loop we get next row and previous col

        if( i == row ) //if i reach row than next starting element is on right so increase j by 2 and decrease i by 1
        {
            i--;
            j=j+2;
        }
        else //if i < row than next starting element is downwards and we automatically got that row so only increment column
            j++;
    
    }
    
    return 0;
}
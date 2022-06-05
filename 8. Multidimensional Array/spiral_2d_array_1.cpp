#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout<<"enter rows and columns: ";
    cin>>row>>col;

    int array[row][col];

    cout<<"enter elements of array"<<endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>array[i][j];
        }
    }
    
    int i=0, j=0, rem_row=row, rem_col=col; //in starting all the rows and columns are left to be traversed

    cout<<"elements of array in spiral "<<endl;
    
    while( rem_row>0 && rem_col>0 )
    {
        for (int k = 0; k < rem_col; k++) //first print elements the no of times columns are remaining
        {
            cout<<array[i][j]<<", ";

/* as this loop will print all rows so we decide coniditions for all rows*/

            if( i <= (row-1)/2 ) //it means in upper as we move in rigt direction so j++
                j++;
            else                  //in lower half we move towards left so j--
                j--;
        }

/* now after printing a row if that row is in upper half than j will be 1 higher than remaining columns
and i needs to incremented to traverse a column so j-- and i++ and in lower half j++ and i-- */

        if( i <= (row-1)/2 )
        {
            j--;
            i++;
        }
        else
        {
            j++;
            i--;
        }
        
        rem_row--; //after printing a row reduce remaining rows so that we dont come at same point and loop run only till rem_rows

        for (int k = 0; k < rem_row; k++) //now print a column elements till no of rows are left
        {
            cout<<array[i][j]<<", ";

//this loop print all columns so keep the conditions according to all columns

            if( j >= col/2 ) //in right half part we go downward so i++ and in left half we move upward so i--
                i++;
            else
                i--;
        }

/*after printing a column if that is in right half then i goes 1 higher than row limit and j needs to be
decremented to traverse leftward so we do i-- and j-- and after printing column in left half we do i++ and j++*/

        if( j >= col/2 ) 
        {
            i--;
            j--;
        }
        else
        {
            i++;
            j++;
        }
        
        rem_col--; //after printing a column reduce remaining no of columns
    }
    
    return 0;
}
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
    
    int i=0, j=0, rem_row=row, rem_col=col;

    cout<<"elements of array in spiral "<<endl;
    
    while( rem_row>0 && rem_col>0 )
    {
        for (int k = 0; k < rem_col; k++)
        {
            cout<<array[i][j]<<", ";

            if( i <= (row-1)/2 )
                j++;
            else
                j--;
        }

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
        
        rem_row--;

        for (int k = 0; k < rem_row; k++)
        {
            cout<<array[i][j]<<", ";

            if( j >= col/2 )
                i++;
            else
                i--;
        }

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
        
        rem_col--;
    }
    
    return 0;
}
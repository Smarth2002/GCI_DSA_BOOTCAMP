/* 2. Write user defined functions for square matrix to calculate

Left diagonal sum
Right diagonal sum*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;

    int arr[row][col];

    int diagL=0, diagR=0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];

            if( i==j )
            {
                diagL+=arr[i][j];

                if( row % 2 != 0 && i==row/2 )
                    diagR+=arr[i][j];
            }
            
            else if( i+j == row-1 )
                diagR+=arr[i][j];
        }   
    }
    
    cout<<"left diagonal sum= "<<diagL<<endl<<"right diagonal sum= "<<diagR;

    return 0;

}
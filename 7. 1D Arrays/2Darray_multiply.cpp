/* 7.Write a program to add and multiply two 3x3 matrices. */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array1[3][3], array2[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>array1[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>array2[i][j];
        }
    }
    
    int prod[3][3]={};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                prod[i][j] = prod[i][j] + array1[i][k] * array2[k][j];
            }
        }
    }

/* inside a single row i with j from 1 to 3 we take array1[i][k] ..
We took i bcz for prod[i][] for any column i remain same of prod and array 1 (to be multiplied) and in columns 
we cant take j because after moving from 1 to 3 it changes row but in reality after moving columns from 1 to 3 
we change the j of prod and again want to restart cols in array1 and we want to do it 3 times 
as on changing each j of prod[i][j] so we made another loop of k and used it... 
We used array2[k][j] ..we took j in column bcz col of prod and array2 (to be multiplied) 
is same for every element..we took k because we want to restart rows of array 2 after each j keeping j same for
particular column (iteration of k) */
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<prod[i][j]<<" ";
        }
        
        cout<<endl;
    }
    
    return 0;
    
}
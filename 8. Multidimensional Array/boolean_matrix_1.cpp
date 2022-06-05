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

    int array[row][col], ans[row][col]={}; //ans[][] is zero array bcz we only fill rows and col of elements containing 1 so the element which not have 1 in row and col will not be filled

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>array[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if( array[i][j] == 1 ) //not do anything if element=0 bcz either it will get updated to 1 if has 1 in its row or col otherwisewe already have 0's in ans[][]
            {
                for (int k = 0; k < col; k++) //print 1 in entire row
                {
                    ans[i][k]=1;
                }

                for (int k = 0; k < row; k++) //print 1 in entire col
                {
                    ans[k][j]=1;
                }
            }
        }        
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}
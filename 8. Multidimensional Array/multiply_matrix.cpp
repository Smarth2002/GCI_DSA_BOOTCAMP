/* 7. Write a program to multiply array A and B of order NxL and LxM*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row1, col1, col2, row2;

    cout<<"enter rows and columns of 1st matrix: ";
    cin>>row1>>col1;
    cout<<"enter rows and columns of 2nd matrix: ";
    cin>>row2>>col2;

    if(col1 != row2)
    {
        cout<<"matrix multiplication not possible";
    }

    else
    {
        int A[row1][col1], B[row2][col2], C[row1][col2]={};

        cout<<"enter elements of 1st matrix: "<<endl;

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                cin>>A[i][j];
            }
        }

        cout<<"enter elements of 2nd matrix: "<<endl;

        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cin>>B[i][j];
            }
        }

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
/*because for fixed i and j (i.e single element of product array C[][]), 
row remain same in A and C (i) but columns are iterated till col1 for every new element j so made a new loop till col1
that run for new element i.e (on changing j) so made A[i][k]  */ 
/* for every fixed i and j i.e (element of prod C[][]) col remain same in B and C i.e j but row of B ierate till row2
for every new element (on changing j) so made B[k][j] that run for every new element (j) */  

                for (int k = 0; k < col1; k++) //can also be k<row2 as col1=row2
                {
                    C[i][j] = C[i][j] + A[i][k] * B[k][j];
                }
            }
        }

        cout<<"matrix after multiplication"<<endl;
        
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout<<C[i][j]<<" ";
            }

            cout<<endl;
        }
    
    }
    
    return 0;
    
}
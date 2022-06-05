/* 6. Write a program to add two array A and B of size m x n.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout<<"enter rows and columns of 2 matrices to add: ";
    cin>>row>>col;

    int A[row][col], B[row][col], C[row][col];

    cout<<"enter elements of 1st matrix"<<endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>A[i][j];
        }    
    }

    cout<<"enter elements of 2nd matrix"<<endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>B[i][j];
        }    
    }

    cout<<"matrix after addition is"<<endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            cout<<C[i][j]<<" ";
        }    

        cout<<endl;
    }
    
    return 0;
}
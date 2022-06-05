//https://www.geeksforgeeks.org/matrix-multiplication-recursive/

#include<bits/stdc++.h>
using namespace std;

int i=0, j=0, k=0; //k=row of product matrix P = row of matrix A, j= col of P= col of B, i= col of matrix A= row of matrix B
const int MAX=100; // i increment on each product addition after i reaches end j increments and i=0, again process continue and after j reaches end k increments and j=0 again process continue and when k reaches end we return
int P[MAX][MAX]={};

void matrixProd(int row1, int col1, int A[][MAX], int row2, int col2, int B[][MAX])
{
    if(col1 != row2)
    {
        cout<<"multiplication not possible";
        return ;
    }

    if(k == row1)
    {
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout<<P[i][j]<<" ";
            }
            
            cout<<endl;
        }

        return;
    }

    if(i == col1)
    {
        j++;
        i=0;
        return matrixProd(row1, col1, A, row2, col2, B);
    }

    if(j == col2)
    {
        k++;
        j=0;
        return matrixProd(row1, col1, A, row2, col2, B);
    }
    
    P[k][j] = P[k][j] + A[k][i]*B[i][j];

    i++;
    
    return matrixProd(row1, col1, A, row2, col2, B);
}

int main()
{
    int row1, col1, row2, col2;
    cin>>row1>>col1;

    int A[MAX][MAX];

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin>>A[i][j];
        }
    }

    cin>>row2>>col2;

    int B[MAX][MAX];

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin>>B[i][j];
        }
    }   

    matrixProd(row1, col1, A, row2, col2, B);
    
    return 0;
}
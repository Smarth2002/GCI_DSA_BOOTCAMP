#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sfi(a) scanf("%d", &a)
#define sfc(a) scanf("%c", &a)
int n = 300;
void add(int a[][n], int b[][n], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            pf("%d ", a[i][j] + b[i][j]);
        }
        pf("\n");
    }
    pf("\n");
}
void sub(int a[][n], int b[][n], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            pf("%d ", a[i][j] - b[i][j]);
        }
        pf("\n");
    }
    pf("\n");
}
void transpose(int a[][n], int b[][n], int r, int c)
{
    int i, j;
    pf("Transpose 1st matrix : \n");
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            pf("%d ", a[j][i]);
            if (j == r - 1)
                pf("\n");
        }
    }
    pf("\nTranspose 2nd matrix : \n");
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            pf("%d ", b[j][i]);
            if (j == r - 1)
                pf("\n");
        }
    }
    pf("\n");
}
void mul(int a[][n], int b[][n], int r, int c)
{
    int i, j, k, m[300][300];
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                m[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            pf("%d ", m[i][j]);
        }
        pf("\n");
    }
    pf("\n");
}
void upperandlower(int a[][n], int b[][n], int r, int c)
{
    int i, j;
    pf("For 1st matrix : \n");
    pf("Upper triangle is : \n");
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j >= i)
                pf("%d ", a[i][j]);
            else
                pf("0 ");
        }
        pf("\n");
    }
    pf("Lower triangle is : \n");
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j <= i)
                pf("%d ", a[i][j]);
            else
                pf("0 ");
        }
        pf("\n");
    }
    pf("\nFor 2nd matrix : \n");
    pf("Upper triangle is : \n");
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j >= i)
                pf("%d ", a[i][j]);
            else
                pf("0 ");
        }
        pf("\n");
    }
    pf("Lower triangle is : \n");
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j <= i)
                pf("%d ", a[i][j]);
            else
                pf("0 ");
        }
        pf("\n");
    }
    pf("\n");
}
int main()
{
    int x, i, r, c, a[300][300], b[300][300];
    pf("Enter no of rows : ");
    sfi(r);
    pf("Enter no of columns : ");
    sfi(c);
    pf("\nEnter elements of 1st matrix : \n");
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            pf("Enter [%d,%d] element : ", i, j);
            sfi(a[i][j]);
        }
    }
    pf("\nEnter elements of 2nd matrix : \n");
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            pf("Enter [%d,%d] element : ", i, j);
            sfi(b[i][j]);
        }
    }
    while (1)
    {
        pf("\n1.Addition of 2 matrix.\n2.Subtraction of 2 matrix.\n3.Transpose of matrix\n4.Multiplication of 2 matrix.\n5.Upper tringle and Lower Triangle\n6.Exit\n");
        pf("\nEnter choice : ");
        sfi(x);
        switch (x)
        {
        case 1:
        {
            add(a, b, r, c);
            break;
        }
        case 2:
        {
            sub(a, b, r, c);
            break;
        }
        case 3:
        {
            transpose(a, b, r, c);
            break;
        }
        case 4:
        {
            mul(a, b, r, c);
            break;
        }
        case 5:
        {
            upperandlower(a, b, c, r);
            break;
        }
        case 6:
        {
            exit(0);
        }
        default:
            break;
        }
    }
    return 0;
}
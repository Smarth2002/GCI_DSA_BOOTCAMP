/* 6.Pass a 2D array to function and access all its elements. */

#include <iostream>
using namespace std;

int solve(int *arr,int i,int j,int m)
{
    return *((arr+i*m)+j);
}

int main()
{
    int n,m,i,j;
    cout<<"enter rows and columns:"<<endl;
    cin >> n >> m;

    int arr[n][m];

    cout<<"enter elements"<<endl;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin >> arr[i][j];
    }

    int a,b;
    cout<<"enter the indices of matrix element you want:";
    cin>>a>>b;

    cout<< solve((int *)arr,a,b,n);
    
    return 0;
}
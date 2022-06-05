#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin>>row>>col;

    int A[row][col];

    int zero=0, nonZero=0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>A[i][j];

            if(A[i][j] == 0)
                zero++;
        }
    }
    
    if( zero > ((row*col)/2) )  
        cout<<"It's a Sparse Matrix";
    else
        cout<<"It's not a Sparse Matrix";
    
    return 0;
}
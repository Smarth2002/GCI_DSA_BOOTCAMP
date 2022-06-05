//https://www.geeksforgeeks.org/the-knights-tour-problem-backtracking-1/
//https://www.pepcoding.com/resources/online-java-foundation/recursion-backtracking/knights-tour-official/ojquestion

#include<bits/stdc++.h>
using namespace std;

void solve(int i, int j, int move, int n, vector<vector<int>>& mat) //1st check place then place move
{
    if(move == n*n+1)
    {
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n; col++)
            {
                cout<<mat[row][col]<<" ";
            }
            
            cout<<endl;
        }
        cout<<endl;
        
        return;
    }

    if(i-2 >= 0 && j+1 < n && mat[i-2][j+1] == 0)
    {
        mat[i-2][j+1]=move;

        solve(i-2, j+1, move+1, n, mat);

        mat[i-2][j+1]=0;
    }

    if(i-1 >= 0 && j+2 < n && mat[i-1][j+2] == 0)
    {
        mat[i-1][j+2]=move;

        solve(i-1, j+2, move+1, n, mat);

        mat[i-1][j+2]=0;
    }

    if(i+1 < n && j+2 < n && mat[i+1][j+2] == 0)
    {
        mat[i+1][j+2]=move;

        solve(i+1, j+2, move+1, n, mat);

        mat[i+1][j+2]=0;
    }

    if(i+2 < n && j+1 < n && mat[i+2][j+1] == 0)
    {
        mat[i+2][j+1]=move;

        solve(i+2, j+1, move+1, n, mat);

        mat[i+2][j+1]=0;
    }

    if(i+2 < n && j-1 >= 0 && mat[i+2][j-1] == 0)
    {
        mat[i+2][j-1]=move;

        solve(i+2, j-1, move+1, n, mat);

        mat[i+2][j-1]=0;
    }

    if(i+1 < n && j-2 >= 0 && mat[i+1][j-2] == 0)
    {
        mat[i+1][j-2]=move;

        solve(i+1, j-2, move+1, n, mat);

        mat[i+1][j-2]=0;
    }

    if(i-1 >= 0 && j-2 >= 0 && mat[i-1][j-2] == 0)
    {
        mat[i-1][j-2]=move;

        solve(i-1, j-2, move+1, n, mat);

        mat[i-1][j-2]=0;
    }

    if(i-2 >= 0 && j-1 >= 0 && mat[i-2][j-1] == 0)
    {
        mat[i-2][j-1]=move;

        solve(i-2, j-1, move+1, n, mat);

        mat[i-2][j-1]=0;
    }

    return;
}

int main()
{
    int n=5;
    int row=2, col=0;

    vector<vector<int>> mat(n, vector<int> (n, 0));

    mat[2][0]=1;
    int move=2;

    solve(row, col, move, n, mat);

    return 0;
}
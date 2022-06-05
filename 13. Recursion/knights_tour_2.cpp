//https://www.geeksforgeeks.org/the-knights-tour-problem-backtracking-1/
//https://www.pepcoding.com/resources/online-java-foundation/recursion-backtracking/knights-tour-official/ojquestion


#include<bits/stdc++.h>
using namespace std;

void solve(int i, int j, int move, int n, vector<vector<int>>& mat) //1st place move then check next place
{
    if(i < 0 || j < 0 || i >= n || j >= n || mat[i][j] != 0)
        return;

    else if(move == n*n)
    {
        mat[i][j]=move;
        
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n; col++)
            {
                cout<<mat[row][col]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

        mat[i][j]=0;
        
        return;
    }

    mat[i][j]=move;

    solve(i-2, j+1, move+1, n, mat);
    solve(i-1, j+2, move+1, n, mat);
    solve(i+1, j+2, move+1, n, mat);
    solve(i+2, j+1, move+1, n, mat);
    solve(i+2, j-1, move+1, n, mat);
    solve(i+1, j-2, move+1, n, mat);
    solve(i-1, j-2, move+1, n, mat);
    solve(i-2, j-1, move+1, n, mat);

    mat[i][j]=0;

    return;
}

int main()
{
    int n=5;
    int row=2, col=0;

    vector<vector<int>> mat(n, vector<int> (n, 0));

    int move=1;

    solve(row, col, move, n, mat);

    return 0;
}
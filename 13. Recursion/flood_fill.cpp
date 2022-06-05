//https://www.pepcoding.com/resources/online-java-foundation/recursion-backtracking/flood-fill-official/ojquestion

#include<bits/stdc++.h>
using namespace std;

void solve(int i, int j, int m, int n, string op, int mat[][7])
{
    if(i == m-1 && j == n-1)
    {
        cout<<op<<endl;
        return;
    }

    mat[i][j]--;

    if(i-1 >= 0 && mat[i-1][j] == 0)
    {
        string op1=op;
        op1.push_back('t');
        //mat[i][j]--;
        solve(i-1, j, m, n, op1, mat);
    }
    if(j-1 >= 0 && mat[i][j-1] == 0)
    {
        string op1=op;
        op1.push_back('l');
        //mat[i][j]--;
        solve(i, j-1, m, n, op1, mat);
    }
    if(i+1 <= m-1 && mat[i+1][j] == 0)
    {
        string op1=op;
        op1.push_back('d');
        //mat[i][j]--;
        solve(i+1, j, m, n, op1, mat);
    }
    if(j+1 <= n-1 && mat[i][j+1] == 0)
    {
        string op1=op;
        op1.push_back('r');
        //mat[i][j]--;
        solve(i, j+1, m, n, op1, mat);
    }

    mat[i][j]++;

    return;
}

int main()
{
    int i=0, j=0;
    string op="";

    int mat[6][7]=
                {
                    {0,1,0,0,0,0,0},
                    {0,1,0,1,1,1,0},
                    {0,0,0,0,0,0,0},
                    {1,0,1,1,0,1,1},
                    {1,0,1,1,0,1,1},
                    {1,0,0,0,0,0,0}
                };

    solve(i, j, 6, 7, op, mat);
}
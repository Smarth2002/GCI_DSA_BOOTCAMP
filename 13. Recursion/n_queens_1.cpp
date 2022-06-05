//https://www.geeksforgeeks.org/n-queen-problem-backtracking-3/

#include<bits/stdc++.h>
using namespace std;

bool isSafePlace(int row, int col, int n, vector<vector<int>>& mat)
{
    for(int i=row-1, j=col; i >= 0; i--) //vertical
    {
        if(mat[i][j] == 1)
            return false;
    }

    for(int i=row-1, j=col-1; i >= 0 && j >= 0; i--, j--) //left diagonal
    {
        if(mat[i][j] == 1)
            return false;
    }

    for(int i=row-1, j=col+1; (i >= 0 && j < n); i--, j++) //right diagonal
    {
        if(mat[i][j] == 1)
            return false;
    }

    return true;
}

void solve(vector<vector<int>>& mat, int curr_row, vector<int> op, int n)
{
    if(curr_row == n) //all queens placed
    {
        for (int i = 0; i < op.size(); i++)
        {
            cout<<op[i]<<" ";
        }
        
        cout<<endl;
    }

    for (int col = 0; col < n; col++) //check all options by placing queen in each col
    {
        if(isSafePlace(curr_row, col, n, mat)) //if cant killed by any of remaining queen
        {
            mat[curr_row][col]=1; //place queen

            vector<int> op1=op;
            op1.push_back(curr_row);
            op1.push_back(col);

            solve(mat, curr_row+1, op1, n);

            mat[curr_row][col]=0; //checked by placing it now remove it
        }
    }
    
    return;
}

int main()
{
    int n=4;

    int curr_row=0;
    vector<int> op;
    
    vector<vector<int>> mat(n, vector<int> (n, 0));

    solve(mat, curr_row, op, n);
    
    return 0;        
}
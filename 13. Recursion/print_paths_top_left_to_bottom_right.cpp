//https://www.geeksforgeeks.org/print-all-possible-paths-from-top-left-to-bottom-right-of-a-mxn-matrix/

#include<bits/stdc++.h>
using namespace std;

void solve(int i, int j, int m, int n, int(*mat)[3], vector<int> ans)
{
    if(i == m-1 && j == n-1)
    {
        for(int i=0; i<ans.size(); i++)
            cout<<ans[i];
        cout<<endl;
    }

    if(i != m-1)
    {
        vector<int> ans1=ans;
        ans1.push_back(mat[i+1][j]);

        solve(i+1, j, m, n, mat, ans1);
    }

    if(j != n-1)
    {
        vector<int> ans2=ans;
        ans2.push_back(mat[i][j+1]);

        solve(i, j+1, m, n, mat, ans2);
    }
}

void printPaths(int m, int n, int mat[][3])
{
    int i=0, j=0;
    vector<int> ans={1};

    solve(i, j, 3, 3, mat, ans);

    return;
}

int main()
{
    int mat[3][3]=  {
                    {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9},
                    };
    
    printPaths(3, 3, mat);

    return 0;
}
//https://www.pepcoding.com/resources/online-java-foundation/recursion-with-arraylists/get-maze-path-with-jumps-official/ojquestion

#include<bits/stdc++.h>
using namespace std;

void solve(int i, int j, int m, int n, string op, vector<string>& ans)
{
    if(i == m-1 && j == n-1)
    {
        ans.push_back(op);
        return;
    }

    for(int k=1; k<n; k++)
    {
        if(j+k < n)
        {
            string op1=op;
            op1.push_back('H');
            op1.append(to_string(k));

            solve(i, j+k, m, n, op1, ans);
        }
    }

    for(int k=1; k<m; k++)
    {
        if(i+k < m)
        {
            string op2=op;
            op2.push_back('V');
            op2.append(to_string(k));

            solve(i+k, j, m, n, op2, ans);
        }
    }

    for(int k=1; k<m && k<n; k++)
    {
        if(i+k < m && j+k < n)
        {
            string op3=op;
            op3.push_back('D');
            op3.append(to_string(k));

            solve(i+k, j+k, m, n, op3, ans);
        }
    }
}

vector<string> mazePaths(int m, int n)
{
    int i=0, j=0;

    string op="";
    vector<string> ans;

    solve(i, j, m, n, op, ans);
    return ans;
}

int main()
{
    vector<string> ans=mazePaths(3, 3);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    
    return 0;
}
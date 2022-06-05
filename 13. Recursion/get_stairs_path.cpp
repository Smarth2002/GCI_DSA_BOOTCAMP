//https://www.pepcoding.com/resources/online-java-foundation/recursion-with-arraylists/get-stair-paths-official/ojquestion

#include<bits/stdc++.h>
using namespace std;

void solve(int n, vector<int> op, vector<vector<int>>& ans)
{
    if(n == 0)
    {
        ans.push_back(op);
        return;
    }

    for (int k = 1; k <= 3; k++)
    {
        if(n-k >= 0)
        {
            vector<int> op1=op;
            op1.push_back(k);

            solve(n-k, op1, ans);
        }
    }
    
    return;
}

int main()
{
    int n=4;
    vector<vector<int>> ans;
    vector<int> op;

    solve(n, op, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j];
        }
        
        cout<<endl;
    }
    
    return 0;
}
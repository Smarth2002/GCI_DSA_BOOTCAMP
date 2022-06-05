#include<bits/stdc++.h>
using namespace std;

void solve(int s, int e, int& ans)
{
    if(s == e)
    {
        ans++;
        return;
    }
    if(s > e)
    {
        return;
    }

    for (int i = 1; i <= 6; i++)
    {
        solve(s+i, e, ans);
    }
    
}

int main()
{
    int s=0, e=3;
    int ans=0;

    solve(s, e, ans);

    cout<<ans;

    return 0;
}
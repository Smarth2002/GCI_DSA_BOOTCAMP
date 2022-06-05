//https://www.hackerearth.com/problem/algorithm/match-makers/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        int g[n], b[n];

        for (int i = 0; i < n; i++)
        {
            cin>>g[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        
        sort(g, g+n);
        sort(b, b+n, greater<int>());

        int res=0;

        for (int i = 0; i < n; i++)
        {
            if(g[i] % b[i] == 0 || b[i] % g[i] == 0)
                res++;
        }
        
        cout<<res<<endl;
    }
    
    return 0;
}
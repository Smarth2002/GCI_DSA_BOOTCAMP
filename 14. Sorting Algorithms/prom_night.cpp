//https://www.hackerearth.com/problem/algorithm/prom-night/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int m, n;
        cin>>m>>n;

        int b[m], g[n];

        for (int i = 0; i < m; i++)
        {
            cin>>b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>g[i];
        }

        if(n < m)
            cout<<"NO"<<endl;
        else
        {
            sort(b, b+m);
            sort(g, g+n);

            int i;
            for ( i = 0; i < m; i++)
            {
                if(g[i] >= b[i])
                {
                    cout<<"NO"<<endl;
                    break;
                }
            }
            
            if(i == m)
                cout<<"YES"<<endl;
        }
        
    }
    
    return 0;
}
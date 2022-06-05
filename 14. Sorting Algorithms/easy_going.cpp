//https://www.hackerearth.com/problem/algorithm/min-max-difference/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n, m;
        cin>>n>>m;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        sort(a, a+n);

        int max=0, min=0;

        for (int i = 0; i < n-m; i++)
        {
            min+=a[i];
        }
        for (int i = n - 1; i >= m; i--)
        {
            max+=a[i];
        }
        
        cout<<max-min<<endl;
    }
    
    return 0;
}
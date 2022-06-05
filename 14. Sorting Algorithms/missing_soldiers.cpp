//https://www.hackerearth.com/problem/algorithm/missing-soldiers-december-easy-easy/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int st[n], y[n], d[n], end[n];

    for (int i = 0; i < n; i++)
    {
        cin>>st[i]>>y[i]>>d[i];

        end[i]=st[i]+d[i];
    }
    
    sort(st, st+n);
    sort(end, end+n);

    int count=0;

    for (int i = 0; i < n; i++)
    {
        if(i > 0 && st[i] <= end[i-1])
        {
            count=count+(end[i]-end[i-1]);
        }
        else
            count=count+end[i]-st[i]+1;
    }
    
    cout<<count;

    return 0;
}
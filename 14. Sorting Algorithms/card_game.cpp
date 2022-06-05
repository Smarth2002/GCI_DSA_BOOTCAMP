//https://www.hackerearth.com/problem/algorithm/card-game-1-44e9f4e7/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int fir[n];

    for (int i = 0; i < n; i++)
    {
        cin>>fir[i];
    }
    
    int m;
    cin>>m;

    int sec[m];

    for (int i = 0; i < m; i++)
    {
        cin>>sec[i];
    }

    int max=0;

    for (int i = 0; i < m; i++)
    {
        if(sec[i] > max)
            max=sec[i];
    }

    long int res=0;
    
    for (int i = 0; i < n; i++)
    {
        if(fir[i] <= max)
        {
            res+=(max-fir[i]+1);
        }
    }
    
    cout<<res;

    return 0;
}
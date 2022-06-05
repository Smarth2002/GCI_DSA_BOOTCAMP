//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/save-patients/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int vac[n];

    for (int i = 0; i < n; i++)
    {
        cin>>vac[i];
    }
    
    int pat[n];

    for (int i = 0; i < n; i++)
    {
        cin>>pat[i];
    }

    sort(vac, vac+n);
    sort(pat, pat+n);
    
    int i;
    for ( i = 0; i < n; i++)
    {
        if(vac[i] <= pat[i])
            break;
    }
    
    if(i != n)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;

    return 0;
}
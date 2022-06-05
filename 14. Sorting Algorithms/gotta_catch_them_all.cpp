//https://www.hackerearth.com/problem/algorithm/gotta-catch-em-all/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;

    int days[k];

    for (int i = 0; i < k; i++)
    {
        cin>>days[i];
    }
    
    sort(days, days+k, greater<int>());

    int max=0;

    for (int i = 0; i < k; i++)
    {
        if(i+days[i]+1 > max)
            max=i+days[i]+1;
    }
    
    cout<<max+1;

    return 0;
}
//https://www.hackerearth.com/problem/algorithm/maximum-sum-of-building-speed-00ab8996/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[2*n];

    for (int i = 0; i < 2*n; i++)
    {
        cin>>a[i];
    }

    sort(a, a+(2*n));
    
    int sum=0;

    for (int i = 0; i <= 2*n-2; i+=2)
    {
        sum+=a[i];
    }
    
    cout<<sum<<endl;

    return 0;
}
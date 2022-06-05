//https://www.geeksforgeeks.org/longest-subarray-forming-an-arithmetic-progression-ap/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int len=2, diff=a[1]-a[0], max_len=0;

    for (int i = 2; i < n; i++)
    {
        if(a[i]-a[i-1] == diff)
            len++;
        else
        {
            if(len > max_len)
                max_len=len;
            diff=a[i]-a[i-1];
            len=2;
        }   
    }
    
    cout<<max_len;

    return 0;
}
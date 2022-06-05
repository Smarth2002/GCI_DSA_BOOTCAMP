//https://www.hackerearth.com/problem/algorithm/sherlock-and-xor/

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

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        long int count=0;

        for (int i = 0; i < n; i++)
        {
            if(a[i] & 1)
                count++;
        }
        
        cout<<count*(n-count)<<endl;
    }
    
    return 0;
}
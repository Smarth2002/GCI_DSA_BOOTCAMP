//https://www.codechef.com/problems/MARCHA1

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int range=(1<<n)-1;
    for (int i = 0; i <= range; i++)
    {
        int idx=0, no=i;
        int sum=0;

        while (no > 0)
        {
            if(no & 1)                      
                sum+=a[idx];
            
            idx++;
            no=no>>1;
        }

        if(sum == k)
        {
            cout<<"YES";
            return 0;
        }        
    }
    
    cout<<"NO";

    return 0;
}
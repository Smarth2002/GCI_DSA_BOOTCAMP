//https://www.geeksforgeeks.org/find-the-element-that-appears-once/

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
    
    int count[32]={}, pos;

    for (int i = 0; i < n; i++)
    {
        pos=0;
        
        while (a[i] > 0)
        {
            if(a[i] & 1)           
                count[pos]++;
                            
            pos++;
            a[i]=a[i]>>1;
        }
    }

    int unique=0, x=1;;
    
    for (int i = 0; i < 32; i++)
    {
        count[i]%=3;

        if(count[i])
            unique+=x;
        x*=2;
    }
    
    cout<<unique;

    return 0;
}
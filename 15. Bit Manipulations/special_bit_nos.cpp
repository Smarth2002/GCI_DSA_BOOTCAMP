//https://www.hackerearth.com/problem/algorithm/chakra-numbers-9c9e0faf/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int q;
    cin>>q;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int spBit[n+1]={};

    for (int i = 0; i < n; i++)
    {
        int no=a[i], flag=0;
        spBit[i+1]=spBit[i];

        while (no > 0)
        {
            if((no & 1) && flag==0)
                flag=1;
            else if((no&1) && flag==1)
            {
                spBit[i+1]++;
                break;
            }
            else
                flag=0;

            no=no>>1;
        }        
    }   
    
    for (int i = 1; i <= q; i++)
    {
        int low, high;
        cin>>low>>high;
        
        cout<<spBit[high]-spBit[low-1]<<endl;
    }
    
    return 0;
}
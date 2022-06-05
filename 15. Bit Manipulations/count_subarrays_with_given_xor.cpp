//https://www.geeksforgeeks.org/count-number-subarrays-given-xor/

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
    
    int k;
    cin>>k;

    int res, count=0;

    for (int i = 0; i < n; i++)
    {
        res=0;

        for (int j = i; j < n; j++)
        {
            res=res^a[j];

            if(res == k)
                count++;
        }
        
    }
    
    cout<<count;

    return 0;
}
//https://www.geeksforgeeks.org/find-first-repeating-element-array-integers/

#include<bits/stdc++.h>
using namespace std;

int freq[1000005]={};

int main()
{
    int n;
    cin>>n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    
    for (int i = 0; i < n; i++)
    {
        if(freq[a[i]] > 0)
        {
            cout<<i+1;
            break;
        }
    }
    
    return 0;
}
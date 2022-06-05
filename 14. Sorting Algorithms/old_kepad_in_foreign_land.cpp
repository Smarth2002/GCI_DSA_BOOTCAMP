//https://www.hackerearth.com/problem/algorithm/old-keypad-in-a-foreign-land-24/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int freq[n];

    for (int i = 0; i < n; i++)
    {
        cin>>freq[i];
    }
    
    int k;
    cin>>k;
    int keySize[k], sum=0;

    for (int i = 0; i < k; i++)
    {
        cin>>keySize[i];
        sum+=keySize[i];
    }
    
    if(n > sum)
        cout<<"-1";
    else
    {
        sort(freq, freq+n, greater<int>());
        sort(keySize, keySize+k, greater<int>());

        int i=0, j=0;
        int ans=0, strokes=1;

        while (i < n)
        {                 
            while (j < k && keySize[j] != 0 && i < n)
            {
                ans=ans+freq[i]*strokes;
                keySize[j]--;
                j++;
                i++;
            }
            
            j=0;
            strokes++;
        }


        cout<<ans;
    }
    
    return 0;
}
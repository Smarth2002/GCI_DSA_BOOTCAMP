//https://www.hackerearth.com/problem/algorithm/monks-choice-of-numbers-1/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n, k;
        cin>>n>>k;

        int setBits[n]={};

        for (int i = 0; i < n; i++)
        {
            int no;
            cin>>no;
            
            int count=0;

            while (no > 0)
            {
                count++;
                no=no&(no-1);
            }
            
            setBits[i]=count;
        }
        
        sort(setBits, setBits+n);

        int ans=0;

        for (int i = n - 1; i >= n-k; i--)
        {
            ans+=setBits[i];
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}
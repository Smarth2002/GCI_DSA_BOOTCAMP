//https://www.hackerearth.com/problem/algorithm/biggest-cake-possible-6d5915e7/
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
        
        sort(a, a+n);

        int no=2;

        for (int i = 0; i < n; i++)
        {
            if(a[i] >= no)
                no+=2;
        }
        
        cout<<no<<endl;
    }
    
    return 0;
}
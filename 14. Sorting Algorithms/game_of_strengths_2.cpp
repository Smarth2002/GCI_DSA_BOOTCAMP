//https://www.hackerearth.com/problem/algorithm/game-of-strengths-4/


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

        long int a[n];

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        sort(a, a+n);

        int coeff=n-1;
        long long int diff=0;

        for (int i = n-1; i >= 0; i--)
        {
            diff=diff + (coeff*a[i]);
            coeff-=2;
        }
        
        long long int res=((diff % 1000000007) * a[n-1]) % 1000000007;

        cout<<res<<endl;
    }
    
    return 0;
}
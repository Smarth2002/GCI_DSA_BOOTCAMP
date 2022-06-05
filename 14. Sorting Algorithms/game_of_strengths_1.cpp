//https://www.hackerearth.com/problem/algorithm/game-of-strengths-4/

#include<bits/stdc++.h>
using namespace std;

const int MAX=100005;
long int a[MAX];

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        long int n;
        cin>>n;

        unsigned long long int sum=0;
        for (long long int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum=(sum +a[i]);			
        }
        
        sort(a, a+n);

        unsigned long long int sumDiff=(sum - (n*a[0]));      
        unsigned long long int total=sumDiff;  

        for (long long int i = 1; i < n-1; i++)
        {
            sumDiff=sumDiff-((n-i) * (a[i]-a[i-1]));
            total=(total+ sumDiff);
        }
        
        unsigned long long int res=((total % 1000000007) * (a[n-1] % 1000000007)) % 1000000007;

        cout<<res<<endl;
        
    }
    
    return 0;
}